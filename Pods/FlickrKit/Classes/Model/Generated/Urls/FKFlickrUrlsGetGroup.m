//
//  FKFlickrUrlsGetGroup.m
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrUrlsGetGroup.h" 

@implementation FKFlickrUrlsGetGroup



- (BOOL) needsLogin {
    return NO;
}

- (BOOL) needsSigning {
    return NO;
}

- (FKPermission) requiredPerms {
    return -1;
}

- (NSString *) name {
    return @"flickr.urls.getGroup";
}

- (BOOL) isValid:(NSError **)error {
    BOOL valid = YES;
	NSMutableString *errorDescription = [[NSMutableString alloc] initWithString:@"You are missing required params: "];
	if(!self.group_id) {
		valid = NO;
		[errorDescription appendString:@"'group_id', "];
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
	if(self.group_id) {
		[args setValue:self.group_id forKey:@"group_id"];
	}

    return [args copy];
}

- (NSString *) descriptionForError:(NSInteger)error {
    switch(error) {
		case FKFlickrUrlsGetGroupError_GroupNotFound:
			return @"Group not found";
		case FKFlickrUrlsGetGroupError_InvalidAPIKey:
			return @"Invalid API Key";
		case FKFlickrUrlsGetGroupError_ServiceCurrentlyUnavailable:
			return @"Service currently unavailable";
		case FKFlickrUrlsGetGroupError_WriteOperationFailed:
			return @"Write operation failed";
		case FKFlickrUrlsGetGroupError_FormatXXXNotFound:
			return @"Format \"xxx\" not found";
		case FKFlickrUrlsGetGroupError_MethodXXXNotFound:
			return @"Method \"xxx\" not found";
		case FKFlickrUrlsGetGroupError_InvalidSOAPEnvelope:
			return @"Invalid SOAP envelope";
		case FKFlickrUrlsGetGroupError_InvalidXMLRPCMethodCall:
			return @"Invalid XML-RPC Method Call";
		case FKFlickrUrlsGetGroupError_BadURLFound:
			return @"Bad URL found";
  
		default:
			return @"Unknown error code";
    }
}

@end
