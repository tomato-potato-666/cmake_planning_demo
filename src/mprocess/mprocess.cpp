#include<iostream>
#include "mprocess.h"
#include<Eigen/Dense>

void mProcess::planProcess()
{
    std::cout<<"this is planing process"<<std::endl;
    my_map.mapInfo();

    Eigen::MatrixXd m(2,2);
    m << 1,2,3,4;
    std::cout<<m<<std::endl;

    std::cout<<"planning sucess!"<<std::endl;
}