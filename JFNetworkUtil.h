//
// JFNetworkUtil.h
// JFCommon
//
// Created by Jason Fuerstenberg on 10/12/28.
// Copyright 2010 Jason Fuerstenberg. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>

#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
#import <SystemConfiguration/CaptiveNetwork.h> // For network name detection
#else
#import <CoreWLAN/CoreWLAN.h> // For network name detection
#endif

#import <netdb.h>
#import <ifaddrs.h>
#import <arpa/inet.h>


@interface JFNetworkUtil : NSObject

+ (BOOL) isConnectedToNetwork;
+ (BOOL) isConnectedToWifi;
+ (NSString *) localIpAddress;
+ (NSString *) wifiNetworkName;

@end
