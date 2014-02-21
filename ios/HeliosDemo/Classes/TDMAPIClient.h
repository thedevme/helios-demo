#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface TDMAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (TDMAPIClient *)sharedClient;

@end
