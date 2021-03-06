@class BrickLayer;
@class BrickMenu;
@class BrickIntercom;

typedef NS_ENUM(NSInteger, HelperToolStatus) {
  HelperMissing,
  HelperVersionMismatch,
  HelperReady
};

@interface BrickController : NSObject <NSApplicationDelegate, NSMenuDelegate>

@property (readonly) NSStatusItem *statusItem;
@property (readonly) BrickMenu *brickMenu;
@property (readonly) BrickLayer *brickLayer;
@property (readonly) BrickIntercom *brickIntercom;
@property (readonly) NSImage *statusMenuIcon;

# pragma mark Actions

- (void) toggleActivation:(NSMenuItem*)sender;
- (void) toggleRule:(NSMenuItem*)sender;
- (void) installHelperTool:(NSMenuItem*)sender;
- (void) getHelp:(NSMenuItem*)sender;
- (void) toggleDebugMode:(NSMenuItem*)sender;
- (void) toggleRememberOnReboot:(NSMenuItem*)sender;;
- (void) toggleLogin:(NSMenuItem*)sender;

@end
