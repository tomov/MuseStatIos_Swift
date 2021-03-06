// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from sdk_bridge.djinni

#import <Foundation/Foundation.h>
@protocol IXNConnectionHandle;

/**
 * This interface defines wrappers for platform-specific resources. The platform
 * interface allows LibMuse to create threads and manage Bluetooth connections
 * while reducing the amount of code that has to be written once per platform.
 *
 * This interface is for internal library use only.
 */

@protocol IXNMusePlatformInterface

/** Finds and returns the name of the Bluetooth device. */
- (nonnull NSString *)getRemoteDeviceName;

/** Returns the MAC address of the Bluetooth device. */
- (nonnull NSString *)getAddress;

/**
 * Attempt to connect to the %Muse Headband through bluetooth once.
 * No-throw guarantee.
 */
- (void)connect;

/** This method checks that we are in fact connected. */
- (BOOL)isConnected;

/**
 * Drop the bluetooth connection. Method should provide "no-throw"
 * guarantee.
 */
- (void)disconnect;

/** Returns the connection handle associated with this interface. */
- (nullable id<IXNConnectionHandle>)getHandle;

@end
