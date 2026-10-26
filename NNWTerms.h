/*
 * NNWTerms.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class NNWTermsApplication, NNWTermsApplication, NNWTermsAccount, NNWTermsFeed, NNWTermsAuthor, NNWTermsFolder, NNWTermsArticle;

enum NNWTermsAccountType {
	NNWTermsAccountTypeOnmymac = 'Locl' /* An On my Mac (local) account */,
	NNWTermsAccountTypeCloudkit = 'Clkt' /* The iCloud account */,
	NNWTermsAccountTypeFeedly = 'Fdly' /* A Feedly account */,
	NNWTermsAccountTypeFeedbin = 'Fdbn' /* A Feedbin account */,
	NNWTermsAccountTypeNewsblur = 'NBlr' /* A Newsblur account */,
	NNWTermsAccountTypeFreshRss = 'Frsh' /* A Fresh RSS account */,
	NNWTermsAccountTypeInoreader = 'Inrd' /* An Inoreader account */,
	NNWTermsAccountTypeBazqux = 'Bzqx' /* A BazQux account */,
	NNWTermsAccountTypeTheOldReader = 'Tord' /* A The Old Reader account */
};
typedef enum NNWTermsAccountType NNWTermsAccountType;

@protocol NNWTermsGenericMethods

- (void) delete;  // Delete an object.

@end



/*
 * Standard Suite
 */

// The application's top-level scripting object.
@interface NNWTermsApplication : SBApplication

@property (copy, readonly) NSString *name;  // The name of the application.
@property (copy, readonly) NSString *version;  // The version number of the application.

- (BOOL) exists:(id)x;  // Verify that an object exists.
- (void) openLocation:(NSString *)x;  // opens the given url.

@end



/*
 * NetNewsWire Suite
 */

// NetNewsWire Application
@interface NNWTermsApplication (NetNewsWireSuite)

- (SBElementArray<NNWTermsAccount *> *) accounts;
- (SBElementArray<NNWTermsArticle *> *) articles;
- (SBElementArray<NNWTermsFeed *> *) feeds;
- (SBElementArray<NNWTermsFeed *> *) feeds;

@property (copy, readonly) NNWTermsArticle *currentArticle;  // The article, if any, being currently displayed
@property (copy, readonly) NSArray<NNWTermsArticle *> *selectedArticles;  // All articles in the main window that are currently selected, if any.
@property (copy, readonly) NSArray<NNWTermsFeed *> *selectedFeeds;  // All feeds in the main window sidebar that are currently selected, if any. Folders and smart feeds are not included.

@end

// An account for subscribing to feeds
@interface NNWTermsAccount : SBObject <NNWTermsGenericMethods>

- (SBElementArray<NNWTermsFeed *> *) feeds;
- (SBElementArray<NNWTermsFeed *> *) feeds;
- (SBElementArray<NNWTermsFolder *> *) folders;

@property (copy, readonly) NSString *name;  // The name of the account
- (NSString *) id;  // The unique id of the account
@property (readonly) NNWTermsAccountType accountType;  // The type of the account
@property BOOL active;  // Whether or not the account is active
@property (copy, readonly) NSArray<NNWTermsFeed *> *allFeeds;  // All feeds, including feeds inside folders
@property (copy, readonly) NSString *opmlRepresentation;  // OPML representation for the account


@end

// An RSS feed
@interface NNWTermsFeed : SBObject <NNWTermsGenericMethods>

- (SBElementArray<NNWTermsAuthor *> *) authors;
- (SBElementArray<NNWTermsArticle *> *) articles;

@property (copy, readonly) NSString *name;  // The name of the feed
- (NSString *) id;  // The unique id of the feed
@property (copy, readonly) NSString *url;  // The type of the feed
@property (copy, readonly) NSString *homepageUrl;  // url for the feed homepage (optional)
@property (copy, readonly) NSString *iconUrl;  // url for the feed icon (optional)
@property (copy, readonly) NSString *faviconUrl;  // url for the feed favicon (optional)
@property (copy, readonly) NSString *opmlRepresentation;  // OPML representation for the feed


@end

// A feed author
@interface NNWTermsAuthor : SBObject <NNWTermsGenericMethods>

@property (copy, readonly) NSString *name;  // The name of the author
- (NSString *) id;  // The unique id of the author
@property (copy, readonly) NSString *url;  // url for the author
@property (copy, readonly) NSString *avatarUrl;  // url for the author avatar (optional)
@property (copy, readonly) NSString *emailAddress;  // email address for the author avatar (optional)


@end

// A folder for organizing feeds
@interface NNWTermsFolder : SBObject <NNWTermsGenericMethods>

- (SBElementArray<NNWTermsFeed *> *) feeds;
- (SBElementArray<NNWTermsArticle *> *) articles;

@property (copy, readonly) NSString *name;  // The name of the account
- (NSInteger) id;  // The unique id of the account
@property (copy, readonly) NSString *opmlRepresentation;  // OPML representation for the folder


@end

// An article in a feed
@interface NNWTermsArticle : SBObject <NNWTermsGenericMethods>

- (SBElementArray<NNWTermsAuthor *> *) authors;

- (NSString *) id;  // The unique id of the article as set by the feed
@property (copy, readonly) NSString *title;  // The article title
@property (copy, readonly) NSString *url;  // url for the article.  This will be the permalink if available, or the external url
@property (copy, readonly) NSString *externalUrl;  // the external url for the article, if known
@property (copy, readonly) NSString *permalink;  // a permalink for the article, if known
@property (copy, readonly) NSString *contents;  // text of the article
@property (copy, readonly) NSString *html;  // html of the article
@property (copy, readonly) NSString *summary;  // a summary of the article
@property (copy, readonly) NSDate *publishedDate;  // date the article was published
@property (copy, readonly) NSDate *arrivedDate;  // date the article was seen by NetNewsWire
@property (copy, readonly) NSDate *modifiedDate;  // date the article was last modified
@property BOOL read;  // has the article been read
@property BOOL starred;  // has the article been marked with a star
@property (readonly) BOOL deleted;  // has the article been deleted by the user
@property (copy, readonly) NSString *imageUrl;  // an image url for the article
@property (copy, readonly) NNWTermsFeed *feed;  // the containing feed


@end

