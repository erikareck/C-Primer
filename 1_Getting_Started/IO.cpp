#include <iostream>
using namespace std; 
//命名空間:避免讓自行定義的名稱和程式庫中的名稱衝突
//標準程式庫定義的所有名稱都在std命名空間中

int main(){
    cout<<"Enter two numbers:" << endl; 
    //endl為manipulator(操作符):結束目前文字行並排清(flush)關聯裝置的buffer
    int v1=0, v2=0;
    cin >> v1 >> v2;
    cout<<"The sum of " << v1 << " and " << v2
        <<" is " << v1+v2 << endl;

    return 0;    
}
//註解會被編譯器忽略
/* 
    compile command: g++ -o <execution file name> <source file name>
    default: "a.exe" (Windows)
*/
/* Standard library
    
    1.steam是指從一個IO裝置讀取或寫入一個字元序列
    
    2.IOstream (標準輸出物件):
        cin (標準輸入)
        cout, clog, cerr (標準輸出)
    
    3.寫入資料流
        operator (運算子)
        operand (運算元)
        e.g.
            cout << "Hello"; //為一個運算式，包含運算元和運算子
            輸出標準物件滿足: [左](ostream物件) << 值[右]
            cin >> v1;
            標準輸入物件滿組: [左](istream物件) >> 物件[右]
    
    4. 複合指定運算元 compound assignment operator
    e.g
        sum += val
        將右邊的運算元加到左邊的運算元，然後將結果儲存在左運算元
        
*/