# Reflection
## Introduction<a name="link"/><a name="dot"/>
 
 This mini project reinvents some parts of the codebase of this [project](http://www.oschina.net/code/snippet_230828_9913), particular for two aspects:
 * Modify the `Object` class to add or remove some functions
 * Compile classes which correspond to reflection to .dll and significantly decouple the whole codebase. 

## How to test it?
1. open the `Test.txt` and input some names of classes which will be instantiated. Don't forget to format it as `'ID Name'`.  

![](https://github.com/Tezika/ImageCache/blob/master/Reflection/p1.png)  

2. open the project file, `Reflection_2.xcodeproj`. Run and see if getting expected results.  

![](https://github.com/Tezika/ImageCache/blob/master/Reflection/p2.png)

 3. Explanation:   
 * If you have noticed that the class within the id, 4, does not input any info, that's because `Gu` is an invalid class and be ruled out.
 * Since some limitations of the relative path in Mac, before running it, please revise the code includes the info of absolute path.
```cpp
  const char* FILE_PATH = "/Users/Tezika/Projects/CodingLearn/Reflection_2/Test.txt";
```
## Issues
  * Cannot convert `Object` class to an abstract class.   
  * The memory leak of `s_infoMap` in `Reflector.cpp`.
  * The memory leak of `strtok` in string.
 
  




