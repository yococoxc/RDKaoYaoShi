//
//  LQSDate.h
//  LQSKit
//
//  Created by muzico on 2018/11/15.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, LQSDateComparison) {
    LQSDateComparisonNone,
    LQSDateComparisonEqual,//相等
    LQSDateComparisonEarly,//前者比后者早（前者比后者小）
    LQSDateComparisonLater,//前者比后者晚（前者比后者大）
    LQSDateComparisonFormatUnequal,//两者格式不一致
    LQSDateComparisonException,//比较时发生异常
};

@interface LQSDate : NSObject

/**
 *  时间字符串。
 *  timeZone，时区。默认为：Asia/Shanghai。
 *  format，格式。如：yyyy-MM-dd。
 */
+ (NSString*) dateWithTimeZone:(NSString*)timeZone format:(NSString*)format;


+ (LQSDateComparison) date:(NSString*)date comparisonOfDate:(NSString*)date2;



+ (NSUInteger) ageWithDateString:(NSString*)dateString timeZone:(NSString *)timeZoneName;
+ (NSUInteger) ageWithDateString:(NSString*)dateString;

+ (NSString*) ageStringWithDateString:(NSString*)dateString timeZone:(NSString *)timeZoneName;
+ (NSString*) ageStringWithDateString:(NSString*)dateString;



#pragma mark - 微秒
+ (NSDate*) dateFromMicroSecondsString:(NSString*)microSecondsString;
+ (NSDate*) dateFromMicroSeconds:(long long) microSeconds;
+ (long long) microSecondsWithDate:(NSDate*)date;
+ (NSString*) microSecondsStringWithDate:(NSDate*)date;
+ (NSString*) microSecondsString;

#pragma mark - 毫秒
+ (NSDate*) dateFromMilliSecondsString:(NSString*)milliSecondsString;
+ (NSDate*) dateFromMilliSeconds:(long long) miliSeconds;
+ (long long) milliSecondsWithDate:(NSDate*)date;
+ (NSString*) milliSecondsStringWithDate:(NSDate*)date;
+ (NSString*) milliSecondsString;

#pragma mark - 秒
+ (NSDate*) dateFromSecondsString:(NSString*) secondsString;
+ (NSDate*) dateFromSeconds:(long long) miliSeconds;
+ (long long) secondsWithDate:(NSDate*)date;
+ (NSString*) secondsStringWithDate:(NSDate*)date;
+ (NSString*) secondsString;


/** 使用NSTimeZone将格林尼治的date转换为当前时区的date */
+ (NSDate *) dateFromSystemTimeZoneEithDate:(NSDate*)date;


#pragma mark - 格式转换
//  字符串  -->  NSDate
+ (NSDate*) dateWithDateString:(NSString *)dateString format:(NSString *)format timeZone:(NSString *)timeZoneName;
+ (NSDate*) dateWithDateString:(NSString *)dateString format:(NSString *)format;

/*
 参数:
 20140716155436, yyyyMMddHHmmss, yyyy-MM-dd HH:mm:ss
 结果:
 2014-07-16 15:54:36
 
 或者
 参数:
 2014-09-14 16:55:08, yyyy-MM-dd HH:mm:ss, yyyyMMddHHmmss
 结果:
 20140914165508
 
 */
+ (NSString*) dateStringWithDateString:(NSString *)dateString formFormat:(NSString *)formFormat toFormat:(NSString *)toFormat;

+ (NSString*) dateStringWithDateString:(NSString *)dateString timeZone:(NSString *)timeZoneName formFormat:(NSString *)formFormat toFormat:(NSString *)toFormat;

/**
 timeZone 默认为 Asia/Shanghai
 
 date 通过 format 转换成 结果
 */
+ (NSString*) dateStringWithDate:(NSDate*)date format:(NSString *)format timeZone:(NSString *)timeZoneName;
+ (NSString*) dateStringWithDate:(NSDate*)date format:(NSString *)format;

#pragma mark -
/*
 默认格式：yyyy-MM-dd HH:mm:ss
 默认时区：Asia/Shanghai
 
 时区
 0 时区--->GMT
 正8区 中国/重庆--->Asia/Chongqing
 正8区 中国/上海--->Asia/Shanghai
 正9区 日本/京东--->Asia/Tokyo
 */
+ (NSString*) dateString;
+ (NSString*) dateStringWithFormat:(NSString *)format;
+ (NSString*) dateStringWithTimeZone:(NSString *)timeZoneName;
+ (NSString*) dateStringWithFormat:(NSString *)format timeZone:(NSString *)timeZoneName;



/**
 默认格式：yyyy-MM-dd
 默认时区：Asia/Shanghai
 
 */
+ (NSDate*) date;
+ (NSDate*) dateWithFormat:(NSString *)format;
+ (NSDate*) dateWithTimeZone:(NSString *)timeZoneName;
+ (NSDate*) dateWithFormat:(NSString *)format timeZone:(NSString *)timeZoneName;

#pragma mark - 时区
+ (NSString*) localTimeZoneName;



//计算时间差
+ (NSString*) timeIntervalWithDateString:(NSString*)datestring;
+ (NSString*) timeIntervalWithDateString:(NSString*)datestring timeZone:(NSString *)timeZoneName;




//计算两个日期之间的天数
+ (NSInteger) calcDaysFromBeginDateString:(NSString *)beginDate endDateString:(NSString *)endDate;
+ (NSInteger) calcDaysFromBeginDateString:(NSString *)beginDate endDateString:(NSString *)endDate format:(NSString *)format timeZone:(NSString *)timeZoneName;

+ (NSInteger) calcDaysFromBeginDate:(NSDate *)beginDate endDate:(NSDate *)endDate;
+ (NSInteger) calcDaysFromBeginDate:(NSDate *)beginDate endDate:(NSDate *)endDate format:(NSString *)format timeZone:(NSString *)timeZoneName;



//计算两个日期之间的时数
+ (NSInteger) calcHoursFromBeginDateString:(NSString *)beginDate endDateString:(NSString *)endDate;
+ (NSInteger) calcHoursFromBeginDateString:(NSString *)beginDate endDateString:(NSString *)endDate format:(NSString *)format timeZone:(NSString *)timeZoneName;
+ (NSInteger) calcHoursFromBeginDate:(NSDate *)beginDate endDate:(NSDate *)endDate format:(NSString *)format timeZone:(NSString *)timeZoneName;
+ (NSInteger) calcHoursFromBeginDate:(NSDate *)beginDate endDate:(NSDate *)endDate;


//计算两个日期之间的分数
+ (NSInteger) calcMinutesFromBeginDateString:(NSString *)beginDate endDateString:(NSString *)endDate;
+ (NSInteger) calcMinutesFromBeginDateString:(NSString *)beginDate endDateString:(NSString *)endDate format:(NSString *)format timeZone:(NSString *)timeZoneName;
+ (NSInteger) calcMinutesFromBeginDate:(NSDate *)beginDate endDate:(NSDate *)endDate format:(NSString *)format timeZone:(NSString *)timeZoneName;
+ (NSInteger) calcMinutesFromBeginDate:(NSDate *)beginDate endDate:(NSDate *)endDate;


+ (NSDate *)dateWithCLRTicks:(int64_t)ticks;



//1489054094 ----> 2017-03-09 18:08:14
+ (NSString*) timestampWithNumberString:(NSString*)numberString withDateFormat:(NSString*)aFormat withTimeZone:(NSString*)aTimeZone;
+ (NSString*) timestampWithNumberString:(NSString*)numberString;

@end
