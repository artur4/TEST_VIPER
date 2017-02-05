//
//  MainInteractor.h
//  TEST_VIPER
//
//  Created by Dim on 05.02.17.
//  Copyright © 2017 Dmitriy Baklanov. All rights reserved.
//

#import "MainInteractorInputProtocol.h"

@protocol MainInteractorOutputProtocol;

@interface MainInteractor : NSObject <MainInteractorInputProtocol>

@property (nonatomic, weak) id <MainInteractorOutputProtocol> presenter;

@end
