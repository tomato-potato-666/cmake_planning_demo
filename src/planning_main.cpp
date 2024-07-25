#include<iostream>
#include"mprocess\mprocess.h"
#include"show_result\show_result.h"

int main()
{
    std::cout<<"planning start"<<std::endl;
    mProcess pro;
    pro.planProcess();
    std::cout<<"planning end"<<std::endl;

    ShowResult show;
    show.drawResult();

    return 0;
}