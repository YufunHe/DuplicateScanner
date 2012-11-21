//
//  THConditionPredicateEditorRowTemplate.h
//  Test
//
//  Created by TanHao on 12-11-13.
//  Copyright (c) 2012年 tanhao.me. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface THConditionPredicateEditorRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *conditionButton;
    BOOL once;
}

+ (id)defaultTemplate;

- (BOOL)boolValue;

@end
