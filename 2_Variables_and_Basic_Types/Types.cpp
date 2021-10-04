//C++ 屬於靜態定型(statically typed)，在compile time編譯時檢查型別
//python則是在run time時檢查型別

/* 2.1.1 算術型別
    [NOTE]
    1.資料確定比int(32bits)還大時，實務上使用long long
    2.盡量使用double來進行浮點樹運算，因為float通常沒有足夠的精確度
*/
/* 2.1.2 型別轉換 Type Conversions
    [NOTE]
    //指定範圍外的值給無型別，會對該值進行modulo運算後得到的remainder進行儲存
    unsigned char c=-1 
    //指定範圍外的值給有型別，則會成為未定義(undefined)
    signed char c2=256
    //混用有號和無號型別最後都會被轉換成無號型別(計算結果為負數則進行modulo)

*/
/* 2.1.3 字面值
    [NOTE]
    > 字元與字元字串
        char a ="A" //a.size()大小為1
        string a = "A" //a.size()大小為2，因為字串結尾會加上'\0'表示null結束
    > Escape Sequence/Generalized Escape Sequence
        '\n' == '\12' (以16進位數字代表)
        '\x4d' == '\115' == 'M'
        //只有'\'的後三位會相依於slash
        //用後輟(suffix)或前輟(prefix)可覆寫型別 (p.40)
        //"nullptr"為指標字面值

*/
/*  2.2 變數 Variables
    > 初始化
        *函式外的變數預設初始值為0
        *函式內的變數為"未初始化"所以是"undefined"
        *物件string允許不明確使用初始器，所以預設為空字串
*/
/* 2.2.2 個別編譯 seperate compilation
    >程式可分割為多個檔案，並獨立編譯
    >宣告(declaration)+定義(definition)
        宣告:讓程式知道某個名稱，一個想要使用定義在其他地方的檔案會引入該名稱的宣告
        定義:創建關聯的那個實體
        **定義必須剛好一次，但可以被宣告多次**
            要在多個檔案使用同一個變數，必須在一個檔案中定義變數，而且只能定義一次也就是只能在一個檔案中
            用到那個變數的其他檔案則需要宣告這個變數，而非定義
    >需要使用extern宣告
        extern int i;       //宣告但不定義
        int j;              //宣告且定義
        extern int i=1.3345 //定義
*/
/* 2.2.3 識別字
    命名習慣:
    1.一般變數微小寫
    2.類別的第一個字母大寫
*/
/* 2.2.4 範疇 Scope
    ::reused //表示全域變數的reused
*/