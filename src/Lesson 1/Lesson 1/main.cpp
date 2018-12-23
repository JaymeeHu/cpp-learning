//
//  main.cpp
//  Lesson 1
//
//  Created by Jaymee Hu on 2018/11/24.
//  Copyright © 2018年 Jaymee Hu. All rights reserved.
//


#include <iostream>
using namespace std;

int add(int x, int y) {
    int result;
    result = x + y;
    return result;
}


int main() {
    // 获取两个数
    // 获得两个格子来装他们
    int jhj, numb2;
    cout << "请输入两个数字：";
    cin >> jhj >> numb2;
    
    // 调用相加函数
    
    
    // 输出
    cout << "你的陈嘉健已下线：" << add(jhj, numb2) << endl;
    return 0;
    
    
}

