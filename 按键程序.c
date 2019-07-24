    button_value=Button_1_GetValue();//读按键
    
    if(button_state==0)
    {
        if(button_value==0)
       {
             button_start_stop^=1;//按键按下去一下开 再按一下停止。
             button_state=1;
             button_cnt=0; 
            if(button_start_stop==1)
            {     IO_RC4_SetHigh();
                 run_state=  MOTOR_STARTUP;
            } else{
                  IO_RC4_SetLow();
                 run_state=MOTOR_STOP;
             }
     }
        
     }else
     {
      if(button_cnt++>=4000)//延时约0.3秒
      {
        button_cnt=0;
        button_state=0;
      }
     }