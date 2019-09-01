# esp32 tft debug monitor via uart

====

Debug Monitor via UART with Arduino ESP32

## Requirement

- Arduino Version: 1.8.5
- Target board: [ESPr® Developer](https://www.switch-science.com/catalog/3210/)
- Display: [2.8-inch ili9341 LCD](https://www.amazon.co.jp/HiLetgo%C2%AE-LCD%E3%83%87%E3%82%A3%E3%82%B9%E3%83%97%E3%83%AC%E3%82%A4-%E3%82%BF%E3%83%83%E3%83%81%E3%83%91%E3%83%8D%E3%83%AB-SPI%E3%82%B7%E3%83%AA%E3%82%A2%E3%83%AB240-ILI9341/dp/B072N551V3)


## Hardware Connections

|ESP32  |LCD  |
|---|---|
|3V3  |3V3  |
|GND  |GND  |
|IO5  |CS  |
|IO16  |RES  |
|IO17  |DC  |
|IO23  |MOSI  |
|IO18  |SCK  |
|3V3  |LED  |
|IO19  |MISO  |

## Licence

   Copyright 2019 Daiki Yasuda

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
