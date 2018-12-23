//
//  main.cpp
//  Michael shabi
//
//  Created by Jaymee Hu on 2018/12/23.
//  Copyright © 2018年 Jaymee Hu. All rights reserved.
//

#include <iostream>


    /*引用官方库，定义唯一的namespace*/
#include <iostream>
    using namespace std;
    
    //声明函数
    int mult(int a, int b);
    
    //调用函数
    int main() {
        int numb1, numb2, numb3, numb4, result;
        cout <<"请输入4个数字：" ;
        cin >> numb1 >> numb2 >> numb3 >> numb4 ;
        result = mult(mult( numb1, numb2) , mult( numb3, numb4));
        cout << "你的结果是：" << result << endl ;
        return 0;
    }
    
    //定义函数
    int mult(int a, int b){
        int result;
        result = a*b;
        return result;
    }

