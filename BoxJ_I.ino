void BoxJ_I() //J&I
{
  TurnRight();
  ServoGripDownHalf();
  ServoGripDownHalfBack();
  JC(6);
  TurnRight();
  PassHole();
  JC(1);
  TurnRight();
  TracSpeedTime(SlowSpeed,500);
  Grip();     //box J
  GripUp();
  TracSpeedTimeBack(SonarSpeed,200);
  TurnLeft();
  JC(1);
  TurnLeft();
  TracSpeedTimeBack(SlowSpeed,600);
  GripBack();     //box I
  GripUpBack();
  TracSpeedTime(SonarSpeed,200);
  TurnLeft();
  TracJCSpeed();
  PassHole();
  TurnLeft();
  JC(3);
  TurnLeft();
  JC(2);
  TurnRight();
  JC(5);
  TurnRight();
  JC(1);
  TurnLeft();
  JC(5);
  TurnLeft();
  PutBoxAJ();
  JCBack(1);
  TurnLeft();
  JC(1);
  TurnLeft();
  PutBoxAJBack();
  JC(1);
  TurnRight();
  
}
