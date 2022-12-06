# 1 "/Users/anshumalikarna/Desktop/COA_PROJ/Arduino_CODE/Arduino_CODE.ino"
int Lane1[] = {13,12,11}; // Lane 1 Red, Yellow and Green
int Lane2[] = {10,9,8};// Lane 2 Red, Yellow and Green
int Lane3[] = {7,6,5};// Lane 3 Red, Yellow and Green
int Lane4[] = {4,3,2};// Lane 4 Red, Yellow and Green

void setup()
{
  for (int i = 0; i < 3; i++)
  {
    pinMode(Lane1[i], 0x1);
    pinMode(Lane2[i], 0x1);
    pinMode(Lane3[i], 0x1);
    pinMode(Lane4[i], 0x1);
  }
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(Lane1[i], 0x0);
    digitalWrite(Lane2[i], 0x0);
    digitalWrite(Lane3[i], 0x0);
    digitalWrite(Lane4[i], 0x0);
  }

}

void loop()
 {
  digitalWrite(Lane1[2], 0x1);
  digitalWrite(Lane3[0], 0x1);
  digitalWrite(Lane4[0], 0x1);
  digitalWrite(Lane2[0], 0x1);
  delay(7000);
  digitalWrite(Lane1[2], 0x0);
  digitalWrite(Lane3[0], 0x0);
  digitalWrite(Lane1[1], 0x1);
  digitalWrite(Lane3[1], 0x1);
  delay(3000);
  digitalWrite(Lane1[1], 0x0);
  digitalWrite(Lane3[1], 0x0);
  digitalWrite(Lane1[0], 0x1);
  digitalWrite(Lane3[2], 0x1);
  delay(7000);
  digitalWrite(Lane3[2], 0x0);
  digitalWrite(Lane4[0], 0x0);
  digitalWrite(Lane3[1], 0x1);
  digitalWrite(Lane4[1], 0x1);
  delay(3000);
  digitalWrite(Lane3[1], 0x0);
  digitalWrite(Lane4[1], 0x0);
  digitalWrite(Lane3[0], 0x1);
  digitalWrite(Lane4[2], 0x1);
  delay(7000);
  digitalWrite(Lane4[2], 0x0);
  digitalWrite(Lane2[0], 0x0);
  digitalWrite(Lane4[1], 0x1);
  digitalWrite(Lane2[1], 0x1);
  delay(3000);
  digitalWrite(Lane4[1], 0x0);
  digitalWrite(Lane2[1], 0x0);
  digitalWrite(Lane4[0], 0x1);
  digitalWrite(Lane2[2], 0x1);
  delay(7000);
  digitalWrite(Lane1[0], 0x0);
  digitalWrite(Lane2[2], 0x0);
  digitalWrite(Lane1[1], 0x1);
  digitalWrite(Lane2[1], 0x1);
  delay(3000);
  digitalWrite(Lane2[1], 0x0);
  digitalWrite(Lane1[1], 0x0);
 }
