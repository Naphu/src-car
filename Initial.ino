void InitialRef() {
  RefL2 = 2244;
  RefL1 = 2477;     
  RefC = 2562;  
  RefR1 = 2240;     
  RefR2 = 2332;
  
  RefBL2 = 1767;    
  RefBL1 = 2405;
  RefBR1 = 2401;   
  RefBR2 = 2231;  
}
void InitialSpeed() 
{
  //MaxSpeed = BaseSpeed;
  MaxSpeed = 100;
  Ki = 0;
  Error = 0;
  PreError = 0;
  KiB = 0;
  if(BaseSpeed<=50)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    Kp = 5;       //forward PID
    Kd = 20;
    Kt = 10;
    KpB = 5;       //Backward PID
    KdB = 20;
    KtB = 10;
  }
  else if(BaseSpeed<=60)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    Kp = 6;       //forward PID
    Kd = 30;
    Kt = 10;
    KpB = 6;       //Backward PID
    KdB = 30;
    KtB = 10;
  }
  else if(BaseSpeed<=70)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    Kp = 7;       //forward PID
    Kd = 40;
    Kt = 10;
    KpB = 7;       //Backward PID
    KdB = 40;
    KtB = 10;
  }
  else if(BaseSpeed<=80)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    Kp = 8;       //forward PID
    Kd = 50;
    Kt = 10;
    KpB = 8;       //Backward PID
    KdB = 50;
    KtB = 10;
  }
  else if(BaseSpeed<=90)
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    Kp = 9;       //forward PID
    Kd = 60;
    Kt = 10;
    KpB = 9;       //Backward PID
    KdB = 60;
    KtB = 10;
  }
  else
  {
    LeftBaseSpeed = BaseSpeed-0;
    RightBaseSpeed = BaseSpeed-0;
    BackLeftBaseSpeed = BaseSpeed-0;
    BackRightBaseSpeed = BaseSpeed-0;
    Kp =10;       //forward PID
    Kd = 70;
    Kt = 10;
    KpB = 10;       //Backward PID
    KdB = 70;
    KtB = 10;
  }
 } 
