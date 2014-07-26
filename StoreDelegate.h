/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "ModernCombat5-Structs.h"
#import "SKProductsRequestDelegate.h"

@class SKProductsRequest, NSLocale;

__attribute__((visibility("hidden")))
@interface StoreDelegate : NSObject <SKProductsRequestDelegate> {
	SKProductsRequest *m_request;	// 4 = 0x4
	int m_state;	// 8 = 0x8
	map<std::__1::basic_string<char>, iap::AppleItemInfo, std::__1::less<std::__1::basic_string<char> >, glwebtools::SAllocator<std::__1::pair<const std::__1::basic_string<char>, iap::AppleItemInfo>, 4> > m_itemInfo;	// 12 = 0xc
	NSLocale *m_storeLocale;	// 24 = 0x18
	map<std::__1::basic_string<char>, SKProduct *, std::__1::less<std::__1::basic_string<char> >, glwebtools::SAllocator<std::__1::pair<const std::__1::basic_string<char>, SKProduct *>, 4> > m_productMap;	// 28 = 0x1c
}
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)buyProduct:(const char *)product;
- (void)cancelProductsRequest;
- (void)dealloc;
- (map<std::__1::basic_string<char>, iap::AppleItemInfo, std::__1::less<std::__1::basic_string<char> >, glwebtools::SAllocator<std::__1::pair<const std::__1::basic_string<char>, iap::AppleItemInfo>, 4> > *)getMerchantItemInfo;
- (int)getState;
- (int)localizePrice:(id)price toString:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *)string withCurrencyCode:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *)currencyCode withCurrencySymbol:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *)currencySymbol;
- (void)productsRequest:(id)request didReceiveResponse:(id)response;
- (void)request:(id)request didFailWithError:(id)error;
- (void)requestProductData:(vector<std::__1::basic_string<char>, glwebtools::SAllocator<std::__1::basic_string<char>, 4> > *)data;
@end

