//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSData, NSString, NSURL;

@protocol MUIWKWebViewUIProxyObject <NSObject>
- (void)dataDetectorsExternalUIRequested:(NSData *)arg1;
- (void)logInjectedWebBundleMessage:(NSString *)arg1;
- (void)logWebConsoleMessage:(NSString *)arg1;
- (void)setMessageHasBlockedRemoteContent;
- (void)completeWebDocumentPasteboardType;
- (void)webProcessDidLayoutContent:(NSURL *)arg1;
- (void)webProcessDidPaintContent:(NSURL *)arg1;
@end

