//	--------------------------------------------------------------------------------------------------------------------
//
//  GZECertificate.h
//  APNSTest
//
//  Created by Gerd Van Zegbroeck on 16/11/10.
//  Copyright 2010 Managing Software. All rights reserved.
//
//	--------------------------------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>

//	--------------------------------------------------------------------------------------------------------------------
//	class GZECertificate
//	--------------------------------------------------------------------------------------------------------------------

@interface GZECertificate : NSObject 
{
	
@private
	
	NSString *key;
	
	NSString *name;

	SecIdentityRef identity;
}

//	--------------------------------------------------------------------------------------------------------------------
//	properties
//	--------------------------------------------------------------------------------------------------------------------

@property (readonly) NSString *key;

@property (readonly) NSString *name;

@property (readonly) SecIdentityRef identity;

//	--------------------------------------------------------------------------------------------------------------------
//	method prototypes
//	--------------------------------------------------------------------------------------------------------------------

+ (id)certificateWithKey:(NSString *)aKey withName:(NSString *)aName withIdentity:(SecIdentityRef)aIdentity;

- (id)initCertificateWithKey:(NSString *)aKey withName:(NSString *)aName withIdentity:(SecIdentityRef)aIdentity;

//	--------------------------------------------------------------------------------------------------------------------
//	done
//	--------------------------------------------------------------------------------------------------------------------

@end

//	--------------------------------------------------------------------------------------------------------------------