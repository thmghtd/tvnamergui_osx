#import <Cocoa/Cocoa.h>

@interface AppCon : NSObject {
    NSMutableArray *theFiles;
    IBOutlet NSProgressIndicator *busy;
}

-(IBAction)rename: (id)sender;
@property (copy) NSMutableArray *theFiles;
@end
