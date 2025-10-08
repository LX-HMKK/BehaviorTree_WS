#include "simple_bt.hpp"
  

//注册节点
BT::NodeStatus CheckBattery()
{
    std::cout<<"Battery OK"<<std::endl;
    return BT::NodeStatus::SUCCESS;
}



int main()
{   
    BT::BehaviorTreeFactory factory;
    factory.registerNodeType<ApproachObject>("ApproachObject");
    factory.registerSimpleAction("CheckBattery",std::bind(CheckBattery));

    GripperInterface gripper;
    factory.registerSimpleAction("OpenGripper",std::bind(&GripperInterface::open,&gripper));
    factory.registerSimpleAction("CloseGripper",std::bind(&GripperInterface::close,&gripper));

    auto tree = factory.createTreeFromFile("/home/sentry/BT_ws/assets/bt_tree.xml");   //tmd，必须要用绝对路径

    tree.tickOnce();

    return 0;
}