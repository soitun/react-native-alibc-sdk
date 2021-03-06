//
//  ALPTBShopParam.h
//  ALPLinkPartnerSDK
//
//  Created by czp on 16/9/22.
//  Copyright © 2016年 czp. All rights reserved.
//

#import "ALPTBJumpParam.h"

@interface ALPTBShopParam : ALPTBJumpParam

/**
 *  shopId,要跳转到的店铺
 */
@property (nonatomic, strong) NSString *shopId;


/**
 *  初始化,shopId必传
 *
 *  @param shopId
 */
-(instancetype)initWithShopId:(NSString *)shopId;

@end
