/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2023 at 11:00:13 PM Israel Standard Time
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate <NSObject>
@optional
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
-(char)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
-(void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 satisfyingConstraint:(id)arg3;
-(void)locationManager:(id)arg1 didFailRangingBeaconsForConstraint:(id)arg2 error:(id)arg3;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
-(void)locationManagerDidChangeAuthorization:(id)arg1;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1;
-(void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2;
-(void)locationManager:(id)arg1 didVisit:(id)arg2;

@end

