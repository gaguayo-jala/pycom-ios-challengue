//
//  FKFlickrPeopleGetPhotos.h
//  FlickrKit
//
//  Generated by FKAPIBuilder.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef NS_ENUM(NSInteger, FKFlickrPeopleGetPhotosError) {
	FKFlickrPeopleGetPhotosError_RequiredArgumentsMissing = 1,		 /*  */
	FKFlickrPeopleGetPhotosError_UnknownUser = 2,		 /* A user_id was passed which did not match a valid flickr user. */
	FKFlickrPeopleGetPhotosError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPeopleGetPhotosError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPeopleGetPhotosError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPeopleGetPhotosError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPeopleGetPhotosError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPeopleGetPhotosError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPeopleGetPhotosError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPeopleGetPhotosError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

};

/*

Return photos from the given user's photostream. Only photos visible to the calling user will be returned. This method must be authenticated; to return public photos for a user, use <a href="/services/api/flickr.people.getPublicPhotos.html">flickr.people.getPublicPhotos</a>.




*/
@interface FKFlickrPeopleGetPhotos : NSObject <FKFlickrAPIMethod>

/* The NSID of the user who's photos to return. A value of "me" will return the calling user's photos. */
@property (nonatomic, copy) NSString *user_id; /* (Required) */

/* Safe search setting:

<ul>
<li>1 for safe.</li>
<li>2 for moderate.</li>
<li>3 for restricted.</li>
</ul>

(Please note: Un-authed calls can only see Safe content.) */
@property (nonatomic, copy) NSString *safe_search;

/* Minimum upload date. Photos with an upload date greater than or equal to this value will be returned. The date should be in the form of a unix timestamp. */
@property (nonatomic, copy) NSString *min_upload_date;

/* Maximum upload date. Photos with an upload date less than or equal to this value will be returned. The date should be in the form of a unix timestamp. */
@property (nonatomic, copy) NSString *max_upload_date;

/* Minimum taken date. Photos with an taken date greater than or equal to this value will be returned. The date should be in the form of a mysql datetime. */
@property (nonatomic, copy) NSString *min_taken_date;

/* Maximum taken date. Photos with an taken date less than or equal to this value will be returned. The date should be in the form of a mysql datetime. */
@property (nonatomic, copy) NSString *max_taken_date;

/* Content Type setting:
<ul>
<li>1 for photos only.</li>
<li>2 for screenshots only.</li>
<li>3 for 'other' only.</li>
<li>4 for photos and screenshots.</li>
<li>5 for screenshots and 'other'.</li>
<li>6 for photos and 'other'.</li>
<li>7 for photos, screenshots, and 'other' (all).</li>
</ul> */
@property (nonatomic, copy) NSString *content_type;

/* Return photos only matching a certain privacy level. This only applies when making an authenticated call to view photos you own. Valid values are:
<ul>
<li>1 public photos</li>
<li>2 private photos visible to friends</li>
<li>3 private photos visible to family</li>
<li>4 private photos visible to friends & family</li>
<li>5 completely private photos</li>
</ul> */
@property (nonatomic, copy) NSString *privacy_filter;

/* A comma-delimited list of extra information to fetch for each returned record. Currently supported fields are: <code>description</code>, <code>license</code>, <code>date_upload</code>, <code>date_taken</code>, <code>owner_name</code>, <code>icon_server</code>, <code>original_format</code>, <code>last_update</code>, <code>geo</code>, <code>tags</code>, <code>machine_tags</code>, <code>o_dims</code>, <code>views</code>, <code>media</code>, <code>path_alias</code>, <code>url_sq</code>, <code>url_t</code>, <code>url_s</code>, <code>url_q</code>, <code>url_m</code>, <code>url_n</code>, <code>url_z</code>, <code>url_c</code>, <code>url_l</code>, <code>url_o</code> */
@property (nonatomic, copy) NSString *extras;

/* Number of photos to return per page. If this argument is omitted, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, copy) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, copy) NSString *page;


@end
