//	--------------------------------------------------------------------------------------------------------------------
//
//  GZEFormatAlert.h
//  APNSTest
//
//  Created by Gerd Van Zegbroeck on 16/11/10.
//
//  Managing Software : http://www.managingsoftware.com
//
//	--------------------------------------------------------------------------------------------------------------------
//
//	This file is part of APNSTest - Apple Push Notification Test.
//
//	APNSTest is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	APNSTest is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with APNSTest. If not, see <http://www.gnu.org/licenses/>.
//
//	--------------------------------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>

//	--------------------------------------------------------------------------------------------------------------------
//	class references
//	--------------------------------------------------------------------------------------------------------------------

@class GZEFormatAlert;

//	--------------------------------------------------------------------------------------------------------------------
//	class GZEFormatAlertDelegate
//	--------------------------------------------------------------------------------------------------------------------

@protocol GZEFormatAlertDelegate

@required

- (BOOL)formatAlertCheck:(GZEFormatAlert *)aAlert forString:(NSString *)aString;

@end

//	--------------------------------------------------------------------------------------------------------------------
//	class GZEFormatAlert
//	--------------------------------------------------------------------------------------------------------------------

@interface GZEFormatAlert : NSFormatter 
{
	@private
	
	id<GZEFormatAlertDelegate> delegate;
}

//	--------------------------------------------------------------------------------------------------------------------
//	properties
//	--------------------------------------------------------------------------------------------------------------------

@property (assign) IBOutlet id<GZEFormatAlertDelegate> delegate;

//	--------------------------------------------------------------------------------------------------------------------
//	done
//	--------------------------------------------------------------------------------------------------------------------

@end

//	--------------------------------------------------------------------------------------------------------------------