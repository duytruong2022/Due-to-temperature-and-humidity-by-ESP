//TODO: include siotcore sdk and declare a object to use
#include "src/All_info.h"
#include "src/SiotCore.h"
SiotCore core;
#include <DHT.h>
const int DHTTYPE = DHT11; //Khai loại DHT
const int DHTPIN = 13; // Chân đọc dữ liệu từ cảm biến
DHT dht(DHTPIN, DHTTYPE); 
int real_value, value; //Khai báo biến DHT

void setup()
{
  Serial.begin(115200);
  core.init(); // Khởi tạo bộ SDK
  dht.begin(); // Khởi tạo cảm biến
}
String r;
void loop()
{
  float h = dht.readHumidity();    //Đọc độ ẩm
  float t = dht.readTemperature(); //Đọc nhiệt độ
  Serial.print(t);
  core.updateData(URL_TEMP, String(t), r, POST); // Đẩy dữ liệu nhiệt độ lên hệ thống
  core.updateData(URL_H, String(h), r, POST); // Đẩy dữ liệu độ ẩm lên hệ thống
  delay(3000);
}
