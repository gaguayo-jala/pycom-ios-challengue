//
//  FKFlickrBlogsGetList.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrBlogsGetListError) {
	FKFlickrBlogsGetListError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrBlogsGetListError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrBlogsGetListError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrBlogsGetListError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrBlogsGetListError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrBlogsGetListError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrBlogsGetListError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrBlogsGetListError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrBlogsGetListError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrBlogsGetListError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrBlogsGetListError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrBlogsGetListError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrBlogsGetListError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Get a list of configured blogs for the calling user.

<p>The <code>needspassword</code> attribute indicates whether a call to <code>flickr.blogs.postPhoto</code> for this blog will require a password to be sent. When flickr has a password already stored, <code>needspassword</code> is 0</p>

Response:

<blogs>
	<blog id="73" name="Bloxus test" needspassword="0"
		url="http://remote.bloxus.com/" /> 
	<blog id="74" name="Manila Test" needspassword="1"
		url="http://flickrtest1.userland.com/" /> 
</blogs>

*/
@interface FKFlickrBlogsGetList : NSObject <FKFlickrAPIMethod>

/* Optionally only return blogs for a given service id.  You can get a list of from <a href="/services/api/flickr.blogs.getServices.html">flickr.blogs.getServices()</a>. */
@property (nonatomic, copy) NSString *service;


@end
