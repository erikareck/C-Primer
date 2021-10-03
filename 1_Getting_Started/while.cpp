#include <iostream>
using namespace std;

int main(){
    int sum=0, value=0;
    while(cin>>value) //學習重點
        sum+=value;
    cout << "Sum is: " << sum << endl;
    return 0;
}
/* 從鍵盤END-OF-FILE

    Windows: control-z
    Unix: control-d

*/
/* 編譯器可找出程式文字的錯誤
    1. 語法錯誤 (syntax errors)
    2. 型別錯誤 (Type errors)
    3. 宣告錯誤 (Declaration errors)
*/
/* 檔案重導 file redirection
    $ [application.exe] <[infile] >[outfile]
    執行application.exe時
    "<"代表讀入infile的內容
    ">"結果寫入outfile
*/