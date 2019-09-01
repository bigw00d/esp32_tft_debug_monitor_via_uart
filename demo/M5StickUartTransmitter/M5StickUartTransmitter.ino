#include <M5StickC.h>
 
void setup() {
  M5.begin();

  // Serial1.begin(unsigned long baud, uint32_t config, int8_t rxPin, int8_t txPin, bool invert)
  Serial1.begin(115200, SERIAL_8N1, 0, 26); // EXT_IO( RX(G0), TX(G26) )
}
 
void loop() {
  static int sendCount = 0;
  Serial1.println("I/ start sending");
  delay(500);
  Serial1.println("1, SWVer, M5StickUARTV001");
  delay(500);
  Serial1.println("2, State, Sending");
  delay(500);
  Serial1.printf("3, Count1, %d\r\n", sendCount);
  delay(500);
  Serial1.printf("4, Count2, %d\r\n", sendCount);
  delay(500);
  Serial1.printf("6, VDD, %d\r\n", (sendCount)%60);
  delay(500);
  sendCount++;
  Serial1.println("I/ wait response");
  delay(500);
  Serial1.println("1, SWVer, M5StickUARTV001");
  delay(500);
  Serial1.println("2, State, Receiving");
  delay(500);
  Serial1.printf("5, Count3, %d\r\n", sendCount);
  delay(500);
  Serial1.printf("6, VDD, %d\r\n", (sendCount+20)%60);
  delay(500);
  sendCount++;
}
