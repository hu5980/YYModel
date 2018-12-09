//
//  YYModel.h
//  YYModel <https://github.com/ibireme/YYModel>
//
//  Created by ibireme on 15/5/10.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <Foundation/Foundation.h>

/*
 __has_include
 此宏传入一个你想引入文件的名称作为参数，如果该文件能够被引入则返回1，否则返回0
 
 #include / #import 语句有两种方式包含头文件，分别是使用双引号" "与左右尖括号< >。其区别是（对于不是使用完全文件路径名的）头文件的搜索顺序不同
 
 使用双引号" "的头文件的搜索顺序：
 
 包含该#include语句的源文件所在目录；
 包含该#include语句的源文件的已经打开的头文件的逆序；
 编译选项-I所指定的目录
 环境变量INCLUDE所定义的目录
 使用左右尖括号< >的头文件的搜索顺序：
 
 编译选项-I所指定的目录
 环境变量INCLUDE所定义的目录
 
 FOUNDATION_EXPORT 和#define 作用是一样的，使用第一种在检索字符串的时候可以用 ==  #define 需要使用isEqualToString 在效率上前者由于是基于地址的判断 速度会更快一些
 */
#if __has_include(<YYModel/YYModel.h>)
FOUNDATION_EXPORT double YYModelVersionNumber;
FOUNDATION_EXPORT const unsigned char YYModelVersionString[];
#import <YYModel/NSObject+YYModel.h>
#import <YYModel/YYClassInfo.h>
#else
#import "NSObject+YYModel.h"
#import "YYClassInfo.h"
#endif
