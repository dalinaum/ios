//
//  UIColor+IRCCloud.h
//
//  Copyright (C) 2013 IRCCloud, Ltd.
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.


#import <UIKit/UIKit.h>

@interface UIColor (IRCCloud)
+(UIColor *)backgroundBlueColor;
+(UIColor *)selectedBlueColor;
+(UIColor *)blueBorderColor;
+(UIColor *)ownersGroupColor;
+(UIColor *)adminsGroupColor;
+(UIColor *)opsGroupColor;
+(UIColor *)halfopsGroupColor;
+(UIColor *)voicedGroupColor;
+(UIColor *)ownersHeadingColor;
+(UIColor *)adminsHeadingColor;
+(UIColor *)opsHeadingColor;
+(UIColor *)halfopsHeadingColor;
+(UIColor *)voicedHeadingColor;
+(UIColor *)membersHeadingColor;
+(UIColor *)ownersBorderColor;
+(UIColor *)ownersLightColor;
+(UIColor *)adminsBorderColor;
+(UIColor *)adminsLightColor;
+(UIColor *)opsBorderColor;
+(UIColor *)opsLightColor;
+(UIColor *)halfopsBorderColor;
+(UIColor *)halfopsLightColor;
+(UIColor *)voicedBorderColor;
+(UIColor *)voicedLightColor;
+(UIColor *)timestampColor;
+(UIColor *)darkBlueColor;
+(UIColor *)networkErrorBackgroundColor;
+(UIColor *)networkErrorColor;
+(UIColor *)colorFromHexString:(NSString *)hexString;
+(UIColor *)mIRCColor:(int)color;
+(UIColor *)errorBackgroundColor;
+(UIColor *)statusBackgroundColor;
+(UIColor *)selfBackgroundColor;
+(UIColor *)highlightBackgroundColor;
+(UIColor *)highlightTimestampColor;
+(UIColor *)noticeBackgroundColor;
+(UIColor *)timestampBackgroundColor;
+(UIColor *)newMsgsBackgroundColor;
+(UIColor *)collapsedRowBackgroundColor;
+(UIColor *)collapsedHeadingBackgroundColor;
+(UIColor *)navBarColor;
+(UIColor *)lightLinkColor;
@end
