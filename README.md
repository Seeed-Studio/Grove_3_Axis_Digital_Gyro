Grove - 3-Axis Digital Gyro 
---------------------------------------------------------
[![Grove - 3-Axis Digital Gyro ](http://www.seeedstudio.com/depot/images/product/gbgr.jpg)](http://www.seeedstudio.com/depot/grove-3axis-digital-gyro-p-750.html?cPath=25_26)

Grove - 3-axis Gyro module based on ITG 3200. It is the world’s first single-chip, digital-output, 3-axis MEMS motion processing gyro optimized for gaming, 3D mice, and motion-based remote control applications for Internet connected Digital TVs and Set Top Boxes.

Features:

- Grove compatible interface
- Digital-output X-, Y-, and Z-Axis
- Fast Mode I²C (400kHz) serial interface
- ±2000°/s full scale range and 14.375 LSBs per °/s sensitivity
- Low 6.5mA operating current for long battery life
- On-chip temperature sensor
- Integrated amplifiers and low-pass filters
- RoHS and Green compliant


# Usage:

### Initialization

    gyro.init();
    gyro.zeroCalibrate(200,10);//sample 200 times to calibrate and it will take 200*10ms


### get data

	void getXYZ(int16_t *x,int16_t *y,int16_t *z);
	void getAngularVelocity(float *ax,float *ay,float *az);


<br>
For more information, please refer to [wiki page](http://www.seeedstudio.com/wiki/Grove_-_3-Axis_Digital_Gyro).

    
----


This software is written by loovee [luweicong@seeedstudio.com](luweicong@seeedstudio.com "luweicong@seeedstudio.com") for seeed studio<br>
and is licensed under [The MIT License](http://opensource.org/licenses/mit-license.php). Check License.txt for more information.<br>

Contributing to this software is warmly welcomed. You can do this basically by<br>
[forking](https://help.github.com/articles/fork-a-repo), committing modifications and then [pulling requests](https://help.github.com/articles/using-pull-requests) (follow the links above<br>
for operating guide). Adding change log and your contact into file header is encouraged.<br>
Thanks for your contribution.

Seeed Studio is an open hardware facilitation company based in Shenzhen, China. <br>
Benefiting from local manufacture power and convenient global logistic system, <br>
we integrate resources to serve new era of innovation. Seeed also works with <br>
global distributors and partners to push open hardware movement.<br>




[![Analytics](https://ga-beacon.appspot.com/UA-46589105-3/Grove_3_Axis_Digital_Gyro)](https://github.com/igrigorik/ga-beacon)


