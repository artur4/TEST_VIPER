//
//  ObjectInteractorOutputProtocol.h
//  TEST_VIPER
//
//  Created by Dim on 14.02.17.
//  Copyright © 2017 Dmitriy Baklanov. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ObjectInfoViewModel;

@protocol ObjectInteractorOutputProtocol <NSObject>

- (void)assignObjectInfoViewModel:(ObjectInfoViewModel *)objectInfoViewModel;

@end
