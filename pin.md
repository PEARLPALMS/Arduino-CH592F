# ピン配列

```
==== CH592F ====
 A8       RXD1       AIN LED | GND
 A9 TMR0  TXD1       AIN     | +5V
B15 TCK   MISO_ SCL      DTR | GND
B14 TIO   MOSI_ SDA  PWM DSR | 3V3
B13 SCK0_ TXD1_ DCD_         | A10 TMR1
B12 SCS_  RXD1_ RI_          | A11 TMR2
B11 UD+   TMR2_              | A12 SCS        PWM AIN
B10 UD-   TMR1_              | A13 SCK0       PWM AIN
 B7       TXD0       PWM     | A14 MOSI TXD0_     AIN
 B4       RXD0       PWM     | A15 MISO RXD0_     AIN
B23 RST   TMR0_ TXD2 PWM     |  A5 TXD3           AIN
B22 BOOT  TMR3  RXD2         |  A4 RXD3           AIN
```
