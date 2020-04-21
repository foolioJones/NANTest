# NANTest

** FIXED IN NEW NDK RELEASE (ndkVersion "21.1.6352462") **

Reproduce NAN from native pow(x,y)

NAN is returned with release build and exponent < 0.1

It works fine using a debug build but when using a release build it returns NAN

(Need to change signingConfigs storeFile path to your local debug.keystore)


![Image](https://github.com/foolioJones/NANTest/blob/master/Screenshot_20200224-035527_NANTest.jpg)
