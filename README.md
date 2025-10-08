# 行为树初识
基于BehaviorTree.CPP库: <https://github.com/BehaviorTree/BehaviorTree.CPP.git>   
基于可视化idea：<https://www.behaviortree.dev/groot>   
参考官方教程：<https://www.behaviortree.dev/docs/intro>    

## 配置此库
1. 依赖：    
```shell
git clone https://github.com/BehaviorTree/BehaviorTree.CPP.git \
sudo apt update \
sudo apt install build-essential cmake libzmq3-dev libboost-dev libsqlite3-dev \
```
2. 安装：  
```shell
cd BehaviorTree.CPP \
mkdir build \
cd build \
cmake .. && make -j
```
