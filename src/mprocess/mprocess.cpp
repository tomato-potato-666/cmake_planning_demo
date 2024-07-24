#include<iostream>
#include "..\include\mprocess.h"

void mProcess::planProcess()
{
    std::cout<<"this is planing process"<<std::endl;
    my_map.mapInfo();
    std::cout<<"planning sucess!"<<std::endl;
}