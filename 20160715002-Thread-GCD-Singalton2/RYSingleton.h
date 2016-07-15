//
//  RYSingleton.h
//  20160715002-Thread-GCD-Singalton2
//
//  Created by Rainer on 16/7/15.
//  Copyright © 2016年 Rainer. All rights reserved.
//

#ifndef RYSingleton_h
#define RYSingleton_h

#define RYSingletonH + (instancetype)sharedInstance;

#define RYSingletonM \
\
static id _instance;\
\
+ (instancetype)sharedInstance {\
    return [[self alloc] init];\
}\
\
+ (instancetype)allocWithZone:(struct _NSZone *)zone {\
    static dispatch_once_t dispatchOnceToken;\
    \
    dispatch_once(&dispatchOnceToken, ^{\
        _instance = [super allocWithZone:zone];\
    });\
    \
    return _instance;\
}\
\
- (id)copyWithZone:(NSZone *)zone {\
    return _instance;\
}


#endif /* RYSingalton_h */
