//
//  CLLocation+WGS84ToGCJ02.h
//  DingDing
//
//  Created by shiying on 8/25/15.
//  Copyright (c) 2015 Cstorm. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

/**
 *  坐标系转化，
 *  GPS坐标系(WGS84)：又称国际标准坐标。国际性地图获取的坐标都是GPS坐标，例如google,apple等
 *  中国国内坐标(GCJ-02)：又称火星坐标系。这是被国内开发的加密坐标系。在中国国内的地图都是使用这个坐标系。高德地图，百度地图等
 */
@interface CLLocation (WGS84ToGCJ02)

//判断是否已经超出中国范围
+(BOOL)isLocationOutOfChina:(CLLocationCoordinate2D)location;
//转GCJ-02
+(CLLocationCoordinate2D)transformFromWGSToGCJ:(CLLocationCoordinate2D)wgsLoc;

@end
