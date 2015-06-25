# Refleciton_2(通过C++实现反射机制)
##一、简介<a name="link"/><a name="dot"/>
该项目通过对开源中国的一个大神实现关于反射的项目([原项目传送门](http://www.oschina.net/code/snippet_230828_9913))进行了理解，重新设计，以及以下两个方面的改写:  
 * 修改`Object`基类中的内容使其符合自己的要求。
 * 将反射有关的类编译成动态链接库`dylib_reflectorclasses`使其能够实现灵活的添加和很大程度的解耦。

##二、使用流程
1.打开其中Test.txt,加入自己想要输入的实例类名字，格式按照"ID 名称“的格式来录入。  

<a name="pic"/>
![](https://github.com/Tezika/ImageCache/blob/master/Reflection/p1.png)  

2.然后进入项目文件Reflection_2.xcodeproj,运行执行即可得到最后的显示结果。  

![](https://github.com/Tezika/ImageCache/blob/master/Reflection/p2.png)

 3.几点说明: <a name="dot"/><a name="code"/>
 * ID为4的并没有输出，因为其ID实例化的类名存在问题（`Gu`并没有这个这个类，因此最后将它过滤掉）。
 * 因为mac在文件系统上只能读写绝对路径，所以应该在运行前修改`main.cpp`中的如下代码为使用的实际路径。
```cpp
  const char* FILE_PATH = "/Users/Tezika/Projects/CodingLearn/Reflection_2/Test.txt";
```
##三、存在的问题
  <a name="dot"/>
  * `Object`基类无法变成抽象类。
  * `Reflector.cpp`中的`s_infoMap`存在内存泄露问题。
  *  文件读写部分关于`strtok`字符串部分割也存在内存泄露问题。
 
##最后有兴趣的大神和童鞋可以给我交流和完善这个项目哟。。:)!
  




