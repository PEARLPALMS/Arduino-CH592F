# Arduino IDE 環境作成

まず CH58x の実装を作成されている方がいらっしゃいますので、そちらをインストールします。<br>
https://github.com/ElectronicCats/arduino-wch58x<br>

実際は、ボードの URL を追加してパッケージをインストールする方法になりますので、詳しい方法が書かれています。<br>
https://github.com/ElectronicCats/arduino-wch58x/wiki/1.-First-steps-with-Arduino<br>

ここまでで、CH58x が動作すると思われますが、持っていませんので分かりません。<br>

# CH592F 用ファイルを上書きインストール

以下のファイルをダウンロードし、CH58x 環境に上書きします。<br>
CH58x環境が壊れますので、ご注意ください。両方の実装が必要な方は、各自で切り分けを行ってください。<br>
(そのための環境を作る必要があるので、かなり面倒だと思われます)<br>
https://github.com/PEARLPALMS/Arduino-CH592F/blob/main/electroniccats_.7z<br>
上書き元は、環境によると思われますが、以下のディレクトリに上書きします。<br>
C:\Users\ユーザー名\AppData\Local\Arduino15\packages\electroniccats\<br>

なお以下のディレクトリーを削除する必要があります。リネームではインクルードされますので、<br>
バックアップが必要な方は、より上位の階層に移動してください。<br>
C:\Users\ユーザー名\AppData\Local\Arduino15\packages\electroniccats\hardware\wch\0.0.1\cores\arduino\ch583<br>

# LEDのピン番号は？

基盤のシルク印刷に A8 と書かれている通り、8番ピンが LED に接続されています。
PWM も使えます。

```
\#define LED_BUILTIN 8
```
--
ブートローダのファイルが指定されましたが次が不足しています：...

"C:\\Users\\pearl\\... "C:\\Users\\pearl\\.../led_fade_internal.ino.elf"

最大448000バイトのフラッシュメモリのうち、スケッチが24184バイト（5%）を使っています。
最大32000バイトのRAMのうち、グローバル変数が256バイト（0%）を使っていて、ローカル変数で31744バイト使うことができます。


--
#ifdef ID_CH592
#define LED_BUILTIN 8
#endif
--
