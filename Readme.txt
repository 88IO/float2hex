 Excelマクロ「float2hex」

[ ファイル ]
/float2hex
    /bin
        float2hex.exe  // C実装
        pyfloat2hex.exe  // python実装
    /src
        float2hex.c
        float2hex.py
    macro.xlsm  // マクロ有効ブック
    Readme.txt


[ 概要 ]
選択セルの浮動小数点数を16進数表現に置き換える

エクセルのマクロでは型変換が難しかったため、C言語で作成し標準出力をVBAで受け取ることで実装した。


[ 使用上の注意 ]
・macro.xlsmが相対パスでfloat2hex.exeを指定しているため、移動不可
・/binにdllファイルも含まれているが、float2hex.exeが依存している可能性があるので、削除非推奨
・python版（pyfloat2hex.exe）はテスト版なので動作しない可能性あり
