//
//  NetworkManager.h
//  httpdns_api_demo
//
//  Created by nanpo.yhl on 15/10/29.
//  Copyright © 2015年 com.aliyun.mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    NotReachable = 0,
    ReachableViaWiFi,
    ReachableVia2G,
    ReachableVia3G,
    ReachableVia4G
} _NetworkStatus;

@interface NetworkManager : NSObject

+(NetworkManager *)instance;

/*
 * 当前网络的状态
 */
-(_NetworkStatus)currentStatus;

/*
 * 上一次的网络状态
 */
-(_NetworkStatus)lastStatus;

/*
 * 当前网络状态的String描述
 */
-(NSString*)currentStatusString;

/*
 * 如果当前网络是Wifi,
 * 获取到当前网络的ssid
 */
-(NSString *)currentWifiSsid;

/*
 * 判断当前网络状态下
 * 是否处理有Http/Https代理
 */
+(BOOL) configureProxies;

@end

