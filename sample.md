
# サンプルプログラム

幾つかのプログラムは、意図しない動作をする可能性もあります。<br>
自己責任で内容を理解した上で動作確認をお願いします。<br>
<br>


> [test_ch592f_button](sample/test_ch592f_button/)<br>
ボタン動作するために、全てのピンの動作を確認します。<br>
各種ピンを GND とショートさせると、内蔵LEDが光ります。<br>
<br>

> [test_ch592f_button2](sample/test_ch592f_button2)<br>
実際にボタンを実装して動作を確認します。<br>
ボタンを押下すると、内蔵LEDが光ります。<br>
<img src="./sample/test_ch592f_button2/IMG_0712.png" width="20%">
<br>

> [test_ch592f_serial](sample/test_ch592f_serial)<br>
現時点で内蔵の USB端子 から COMポート としてシリアル通信で出来ておりません。<br>
UART0 を使って別途用意するシリアル通信機器へ単純な通信を行います。デバッグ出力が行なえます。<br>
<br>

> [test_ch592f_ble_hid_keyboard_org](sample/test_ch592f_ble_hid_keyboard_org)<br>
WeActの開発ページの存在する Bluetooth HID Keyboard のサンプルプログラムです。<br>
b～z まで 2秒毎に出力します。<br>
<br>

> [test_ch592f_ble_hid_keyboard](sample/test_ch592f_ble_hid_keyboard)<br>
実際にボタンを実装して簡易キーボードを作成します。<br>
ボタンを押下すると、ボタンにより abc が出力します。長押しにも対応しており、長押しの場合は、ABC が出力されます。<br>
<img src="./sample/test_ch592f_ble_hid_keyboard/IMG_0712.png" width="20%">
<br>
