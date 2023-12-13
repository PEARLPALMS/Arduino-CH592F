# Arduino-CH592F
WCH CH592F for Arduino IDE

CH592F 用の Arduino IDE ですが、実物を持ってませんので、開発環境を作っただけです。
以下の場所に CH58x 用の実装がありますので、それに上書きする形でインストールします。
https://github.com/ElectronicCats/arduino-wch58x

いずれモノが入手し、気が向けば続きを実装するかもしれません。
<img src="./image/board.png" width="80%">


# CH592F 概要 (Google翻訳)<br>
原文は<a href="https://www.wch-ic.com/products/CH592.html">こちら</a>

# 概要<br>
CH592 は、BLE ワイヤレス通信を統合した RISC-V MCU マイクロコントローラーです。2Mbps BLE通信モジュール、フルスピードUSBホストおよびデバイスコントローラおよびトランシーバ、セグメントLCDドライバモジュール、SPI、4つのシリアルポート、12チャネルADC、タッチキー検出モジュールおよびその他の豊富な周辺リソースをオンチップ統合。

# システムブロック図<br>
<img src="./image/ch592f.png" width="100%">

# 特徴<br>
・ QingKe 32 ビット RISC-V4C コア<br>
・ RV32IMAC 命令セットおよび自己拡張命令をサポート<br>
・ 26KB SRAM、512KB フラッシュ、ICP、ISP、IAP をサポート、OTA ワイヤレス アップグレードをサポート<br>
・ 内蔵2.4GHz RFトランシーバー、ベースバンドおよびリンク制御、BLE5.4をサポート<br>
・ 2Mbps、1Mbpsをサポート<br>
・ -95dBm RX 感度、プログラム可能な +4.5dBm TX パワー<br>
・ 最適化されたプロトコルスタックとアプリケーション層APIを提供し、ネットワーキングをサポート<br>
・ 内蔵温度センサー（TS）<br>
・ 内蔵RTC、タイミングとトリガの2つのモードをサポート<br>
・ USB2.0フルスピードホスト/デバイス<br>
・ 12チャンネルタッチキー<br>
・ 12チャンネル12ビットADC<br>
・ 4 UART、1 SPI、12 チャネル PWM、1 チャネル I2C<br>
・ セグメントLCDドライバーインターフェイス。80 ポイント (20*4) LCD パネルをサポート<br>
・ 24 GPIO、そのうち 4 つは 5V 信号入力をサポート<br>
・ 最小サポート 1.7V 電源電圧<br>
・ 内蔵のAES-128暗号化および復号化、固有のチップID<br>
・ パッケージ: QFN32、QFN28<br>

# セレクションガイド<br>
<img src="./image/ch59xx.png" width="100%">
