// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from validation.djinni

#import "Muse/gen-objc/IXNErrorType.h"
#import <Foundation/Foundation.h>

/**
 * Represents an error from an operation (synchronous or asynchronous).
 * These will be forwarded to any ErrorListeners that are registered.
 * \if ANDROID_ONLY
 * \sa MuseErrorListener
 * \sa Muse.registerErrorListener()
 * \elseif IOS_ONLY
 * \sa ::IXNMuseErrorListener
 * \sa IXNMuse::registerErrorListener:
 * \endif
 */
@interface IXNError : NSObject
- (nonnull id)initWithType:(IXNErrorType)type
                      code:(int32_t)code
                      info:(nonnull NSString *)info;

/**
 * Type of error
 * \return the type of error that has occurred.
 */
@property (nonatomic, readonly) IXNErrorType type;

/**
 * Machine-parseable error code
 * \return a machine parseable error code.
 */
@property (nonatomic, readonly) int32_t code;

/**
 * Human-readable description.
 * \return the english error message.
 */
@property (nonatomic, readonly, nonnull) NSString * info;

@end
