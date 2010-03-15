//
//  SUAppcastItem.h
//  Sparkle
//
//  Created by Andy Matuschak on 3/12/06.
//  Copyright 2006 Andy Matuschak. All rights reserved.
//

#ifndef SUAPPCASTITEM_H
#define SUAPPCASTITEM_H

@interface SUAppcastItem : NSObject
{
@private
	NSString *title;
	NSDate *date;
	NSString *itemDescription;
	
	NSURL *releaseNotesURL;
	
	NSString *DSASignature;	
	NSString *minimumSystemVersion;
	
	NSURL *fileURL;
	NSString *fileURLType; // what is being pointed at here? Could be a text/html for instance instead of an app.
	 
	NSString *versionString;
	NSString *displayVersionString;
	
	NSDictionary *propertiesDictionary;
}

// Initializes with data from a dictionary provided by the RSS class.
- initWithDictionary:(NSDictionary *)dict;
- initWithDictionary:(NSDictionary *)dict failureReason:(NSString**)error;

- (NSString *)title;
- (NSString *)versionString;
- (NSString *)displayVersionString;
- (NSDate *)date;
- (NSString *)itemDescription;
- (NSURL *)releaseNotesURL;
- (NSURL *)fileURL;
- (NSString *)fileURLType;
- (NSString *)DSASignature;
- (NSString *)minimumSystemVersion;

// Returns the dictionary provided in initWithDictionary; this might be useful later for extensions.
- (NSDictionary *)propertiesDictionary;

@end

#endif
