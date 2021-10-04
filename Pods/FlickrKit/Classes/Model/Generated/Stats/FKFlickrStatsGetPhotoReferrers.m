//
//  FKFlickrStatsGetPhotoReferrers.m
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrStatsGetPhotoReferrers.h" 

@implementation FKFlickrStatsGetPhotoReferrers



- (BOOL) needsLogin {
    return YES;
}

- (BOOL) needsSigning {
    return YES;
}

- (FKPermission) requiredPerms {
    return 0;
}

- (NSString *) name {
    return @"flickr.stats.getPhotoReferrers";
}

- (BOOL) isValid:(NSError **)error {
    BOOL valid = YES;
	NSMutableString *errorDescription = [[NSMutableString alloc] initWithString:@"You are missing required params: "];
	if(!self.date) {
		valid = NO;
		[errorDescription appendString:@"'date', "];
	}
	if(!self.domain) {
		valid = NO;
		[errorDescription appendString:@"'domain', "];
	}

	if(error != NULL) {
		if(!valid) {	
			NSDictionary *userInfo = @{NSLocalizedDescriptionKey: errorDescription};
			*error = [NSError errorWithDomain:FKFlickrKitErrorDomain code:FKErrorInvalidArgs userInfo:userInfo];
		}
	}
    return valid;
}

- (NSDictionary *) args {
    NSMutableDictionary *args = [NSMutableDictionary dictionary];
	if(self.date) {
		[args setValue:self.date forKey:@"date"];
	}
	if(self.domain) {
		[args setValue:self.domain forKey:@"domain"];
	}
	if(self.photo_id) {
		[args setValue:self.photo_id forKey:@"photo_id"];
	}
	if(self.per_page) {
		[args setValue:self.per_page forKey:@"per_page"];
	}
	if(self.page) {
		[args setValue:self.page forKey:@"page"];
	}

    return [args copy];
}

- (NSString *) descriptionForError:(NSInteger)error {
    switch(error) {
		case FKFlickrStatsGetPhotoReferrersError_UserDoesNotHaveStats:
			return @"User does not have stats";
		case FKFlickrStatsGetPhotoReferrersError_NoStatsForThatDate:
			return @"No stats for that date";
		case FKFlickrStatsGetPhotoReferrersError_InvalidDate:
			return @"Invalid date";
		case FKFlickrStatsGetPhotoReferrersError_PhotoNotFound:
			return @"Photo not found";
		case FKFlickrStatsGetPhotoReferrersError_InvalidDomain:
			return @"Invalid domain";
		case FKFlickrStatsGetPhotoReferrersError_SSLIsRequired:
			return @"SSL is required";
		case FKFlickrStatsGetPhotoReferrersError_InvalidSignature:
			return @"Invalid signature";
		case FKFlickrStatsGetPhotoReferrersError_MissingSignature:
			return @"Missing signature";
		case FKFlickrStatsGetPhotoReferrersError_LoginFailedOrInvalidAuthToken:
			return @"Login failed / Invalid auth token";
		case FKFlickrStatsGetPhotoReferrersError_UserNotLoggedInOrInsufficientPermissions:
			return @"User not logged in / Insufficient permissions";
		case FKFlickrStatsGetPhotoReferrersError_InvalidAPIKey:
			return @"Invalid API Key";
		case FKFlickrStatsGetPhotoReferrersError_ServiceCurrentlyUnavailable:
			return @"Service currently unavailable";
		case FKFlickrStatsGetPhotoReferrersError_WriteOperationFailed:
			return @"Write operation failed";
		case FKFlickrStatsGetPhotoReferrersError_FormatXXXNotFound:
			return @"Format \"xxx\" not found";
		case FKFlickrStatsGetPhotoReferrersError_MethodXXXNotFound:
			return @"Method \"xxx\" not found";
		case FKFlickrStatsGetPhotoReferrersError_InvalidSOAPEnvelope:
			return @"Invalid SOAP envelope";
		case FKFlickrStatsGetPhotoReferrersError_InvalidXMLRPCMethodCall:
			return @"Invalid XML-RPC Method Call";
		case FKFlickrStatsGetPhotoReferrersError_BadURLFound:
			return @"Bad URL found";
  
		default:
			return @"Unknown error code";
    }
}

@end