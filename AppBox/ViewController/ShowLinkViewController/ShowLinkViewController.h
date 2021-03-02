//
//  ShowLinkViewController.h
//  AppBox
//
//  Created by Vineet Choudhary on 07/09/16.
//  Copyright © 2016 Developer Insider. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "QRCodeViewController.h"
#import "Project+CoreDataClass.h"
#import "DashboardViewController.h"

@interface ShowLinkViewController : NSViewController{
    IBOutlet NSTextField *textFieldHint;
    IBOutlet NSTextField *textFieldAppLink;
    IBOutlet NSButton *buttonCopyToClipboard;
    __weak IBOutlet NSLayoutConstraint *linkHeightConstraint;
    __weak IBOutlet NSLayoutConstraint *linkHintHeightConstraint;
}

@property(nonatomic, strong) XCProject *project;

- (IBAction)buttonCloseTapped:(NSButton *)sender;
- (IBAction)buttonCopyToClipboardTapped:(NSButton *)sender;
- (IBAction)buttonOpenURLAction:(NSButton *)sender;


@end
