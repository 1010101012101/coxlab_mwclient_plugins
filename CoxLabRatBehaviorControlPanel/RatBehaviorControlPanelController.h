//
//  MWDebuggerWindowController.h
//  MWorksDebugger
//
//  Created by David Cox on 2/12/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MWorksCocoa/MWWindowController.h"

NSString *FROZEN_STRING = @"Frozen";
NSString *ACTIVE_STRING = @"Active";
NSString *DISABLED_STRING = @"Disabled";


@interface RatBehaviorControlPanelController : NSWindowController {
	IBOutlet id delegate;
	NSArray *staircaseStates;
}

@property(assign) NSArray *staircaseStates;

- (void)awakeFromNib;
//- (void)setDelegate:(id)new_delegate;

- (IBAction) deliverLeft:(id)sender;
- (IBAction) deliverRight:(id)sender;




@end
