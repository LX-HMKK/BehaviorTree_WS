#ifndef SIMPLE_BT_HPP
#define SIMPLE_BT_HPP

#include <iostream>
#include <chrono>
#include "behaviortree_cpp/action_node.h"      //行为树动作节点
#include "behaviortree_cpp/bt_factory.h"    //创建行为树的工厂


//定义一个简单的行为树动作节点
class ApproachObject : public BT::SyncActionNode
{   public:
        explicit ApproachObject(const std::string &name): BT::SyncActionNode(name, {}) {}

        BT::NodeStatus tick() override
        {
            std::cout<<"Approach Object"<< this->name() << std::endl;

            std::this_thread::sleep_for(std::chrono::seconds(5));
            return BT::NodeStatus::SUCCESS;
        }
};  



class GripperInterface
{
    public:
        GripperInterface(){}
        BT::NodeStatus open()
        {
            is_open_ = true;
            std::cout<<"Gripper Open"<<std::endl;
            return BT::NodeStatus::SUCCESS;
        }   
        BT::NodeStatus close()
        {   
            is_open_ = false;
            std::cout<<"Gripper Close"<<std::endl;
            return BT::NodeStatus::SUCCESS;
        }
    private:
        bool is_open_;
};


#endif // SIMPLE_BT_HPP