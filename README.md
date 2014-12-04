HeapUsage class (beginner)
--------------
This class can be added to any BB10 headless app to retrieve Heap Memory usage at any time, to make sure you don't go over the 3Mb limit. In fact, it can even be added to any standard app if you like, I've made the sole function a Q_INKOVABLE one just in case you want to access it from QML.

Here's how to add to your project :

1) Import HeapUsage folder to your src folder so that you have those 2 files :
/src/HeapUsage/HeapUsage.cpp
/src/HeapUsage/HeapUsage.h

2) In your application hpp file, add those lines
```sh
#include <src/HeapUsage/HeapUsage.h>
```
```sh
private:
	HeapUsage* heapUsage;
```

3) In your application cpp file, add this line to your constructor
```sh
	heapUsage = new HeapUsage();
```
If your application is a standard app and you want to have access to the function in QML, add this to your constructor after declaring your QmlDocument qml 
```sh
	qml->setContextProperty("_heapUsage", heapUsage);
```

4) Whenever you want to get the heap memory usage of your app, write this line in C++
```sh
	heapUsage->measureMem();
```
If you want to access it in QML, use this line
```sh
	_heapUsage.measureMem()
```

This code was shared to me by Shadid Haque from BlackBerry, I've only modified it a little bit to make sure everything runs smoothly and that it can be easily added to any project.


LICENSE
--------------
The MIT License (MIT)

Copyright (c) 2014 Roger Leblanc

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
