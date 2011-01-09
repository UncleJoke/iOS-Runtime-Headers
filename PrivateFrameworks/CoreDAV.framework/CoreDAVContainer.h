/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSNumber, NSString, NSSet;



@interface CoreDAVContainer : CoreDAVItem <CoreDAVParsingIgnoreUnknownItems>
{
    NSNumber *_isUnauthenticated;
    NSInteger _containerType;
    NSString *_href;
    NSString *_containerTitle;
    NSSet *_privileges;
}

@property(retain) NSSet *privileges;
@property(retain) NSString *containerTitle;
@property NSInteger containerType;
@property(retain) NSNumber *isUnauthenticated;
@property(readonly) NSString *href;

+ (BOOL)ignoresUnknownChildren;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingWithSubItems;

- (NSInteger)containerType;
- (id)isUnauthenticated;
- (id)copyCoreDAVParseRules;
- (id)containerTitle;
- (id)initWithXMLParser:(id)arg1 nameSpace:(id)arg2 elementName:(id)arg3 nodeAttributes:(id)arg4 root:(id)arg5 parent:(id)arg6 parentSetter:(SEL)arg7 ruleForMe:(id)arg8;
- (void)setAddressBookNode:(id)arg1;
- (void)setSearchAddressBookNode:(id)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setContainerType:(NSInteger)arg1;
- (void)setIsUnauthenticated:(id)arg1;
- (void)noteIgnoredItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)privileges;
- (void)setPrivileges:(id)arg1;
- (id)href;

@end