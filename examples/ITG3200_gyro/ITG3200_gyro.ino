/*****************************************************************************/
//    Function:    Get the temperature and the values of X/Y/Z from ITG3200,and
//                calculate the angular velocity of the X/Y/Z.
//  Hardware:    Grove - 3-Axis Digital Gyro
//    Arduino IDE: Arduino-1.0
//    Author:     Frankie.Chu
//    Date:      Jan 11,2013
//    Version: v1.0
//    by www.seeedstudio.com
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//
/*******************************************************************************/

#include <Wire.h>
#include "ITG3200.h"

ITG3200 gyro;
void setup()
{
    Serial.begin(9600);
    gyro.init();
    gyro.zeroCalibrate(200,10);//sample 200 times to calibrate and it will take 200*10ms
}

void loop()
{
    Serial.print("Temperature = ");
    Serial.print(gyro.getTemperature());
    Serial.println(" C");

    int16_t x,y,z;
    gyro.getXYZ(&x,&y,&z);
    Serial.print("values of X , Y , Z: ");
    Serial.print(x);
    Serial.print(" , ");
    Serial.print(y);
    Serial.print(" , ");
    Serial.println(z);

    float ax,ay,az;
    gyro.getAngularVelocity(&ax,&ay,&az);
    Serial.print("Angular Velocity of X , Y , Z: ");
    Serial.print(ax);
    Serial.print(" , ");
    Serial.print(ay);
    Serial.print(" , ");
    Serial.print(az);
    Serial.println(" degrees per second");
    Serial.println("*************");
    delay(1000);
}

