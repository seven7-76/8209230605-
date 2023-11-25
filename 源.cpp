#include <iostream>
using namespace std;

int main() {
    double price = 0.8; 
    int num = 2; 
    int totalNum = num; 
    double totalCost = num * price; 
    int days = 1; 

    while (num <= 100) {
        num *= 2; 
        totalNum += num; 
        totalCost += num * price; 
        days++;
    }

    double averageCost = totalCost / days; 
    cout << "每天平均花费：" << averageCost << "元" << endl;

    return 0;
}