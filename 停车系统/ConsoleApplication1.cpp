// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class ParkingSystem {
public:
    int left[3] = { 0,0,0 };
    ParkingSystem(int big, int medium, int small) {
        
        left[0] = big;left[1] = medium;left[2] = small;

    }
    bool addCar(int carType) {
        if (carType == 1)
        {
           
            if (left[0]-- > 0)
                return true;
            else
                return false;
        }
        else if (carType == 2)
        {
            
            if (left[1]-- > 0)
                return true;
            else
                return false;
        }
        else
        {
            
            if (left[2]-- > 0)
                return true;
            else
                return false;
        }
       
    }
};
int main()
{
    ParkingSystem parkingSystem = ParkingSystem(1, 1, 0);
    cout << parkingSystem.addCar(1) << endl;
    cout << parkingSystem.addCar(2) << endl;
    cout << parkingSystem.addCar(3) << endl;
    cout << parkingSystem.addCar(1) << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
