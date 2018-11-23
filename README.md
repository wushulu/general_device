# general_device
通用器件的介绍和使用
## 负压电路的介绍
1、当PWM为低电平时，Q2打开，Q1关闭，VCC通过Q2给C1充电，充电回路是VCC-Q2-C1-D2-GND。C1上左正右负。
2、当PWM为低电平时，Q2关闭，Q1打开，C1开始放电，放电回路是C1-C2-D1，这实际上也是对C2进行充电的过程。C2充好电后，下正上负，如果VCC的电势为5点几伏，就可以输出-5V的电压了
![电路图](https://github.com/wushulu/general_device/blob/master/%E8%B4%9F%E5%8E%8B%E7%94%B5%E8%B7%AF.png)

   
