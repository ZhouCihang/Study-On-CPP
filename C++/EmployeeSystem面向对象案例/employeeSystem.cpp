#include <iostream>
using namespace std;
#include "HeaderFile/workerManager.h"
#include "HeaderFile/worker.h"
#include "HeaderFile/employee.h"
#include "HeaderFile/manager.h"
#include "HeaderFile/boss.h"

int main()
{
    WorkerManager wm;

    int choice;
    while (true)
    {
        wm.showMenu();
        cout << "请输入您的选项：" << endl;
        cin >> choice;
        switch (choice)
        {
            //0. 退出管理系统
        case 0:
            wm.ExitSystem();
            break;
            //1. 增加职工信息
        case 1:
            wm.AddEmp();
            break;
            //2. 显示职工信息
        case 2:
            wm.show_EmpInfo();
            break;
            //3. 删除离职职工
        case 3:
            wm.delete_Emp();
            break;
            //4. 修改职工信息
        case 4:
            wm.ModifyEmp();
            break;
            //5. 查找职工信息
        case 5:
            wm.find_Emp();
            break;
            //6. 按照编号排序
        case 6:
            wm.sort_Emp();
            break;
            //7. 清空所有文档
        case 7:
            //wm.clear_Emp();
            break;

        default:
            break;
        }
    }
    return 0;
}

//Compile command
//cd "/Users/zhoucihang/Study-On-CPP/C++/EmployeeSystem面向对象案例/" && g++ employeeSystem.cpp workerManager.cpp employee.cpp manager.cpp boss.cpp -o employeeSystem -std=c++11 && "/Users/zhoucihang/Study-On-CPP/C++/EmployeeSystem面向对象案例/"employeeSystem
