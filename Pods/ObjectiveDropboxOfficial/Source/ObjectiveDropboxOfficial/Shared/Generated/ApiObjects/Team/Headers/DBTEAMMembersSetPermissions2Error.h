///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMMembersSetPermissions2Error;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembersSetPermissions2Error` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersSetPermissions2Error : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMMembersSetPermissions2ErrorTag` enum type represents the possible
/// tag states with which the `DBTEAMMembersSetPermissions2Error` union can
/// exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMMembersSetPermissions2ErrorTag){
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    DBTEAMMembersSetPermissions2ErrorUserNotFound,

    /// Cannot remove the admin setting of the last admin.
    DBTEAMMembersSetPermissions2ErrorLastAdmin,

    /// The user is not a member of the team.
    DBTEAMMembersSetPermissions2ErrorUserNotInTeam,

    /// Cannot remove/grant permissions. This can happen if the team member is
    /// suspended.
    DBTEAMMembersSetPermissions2ErrorCannotSetPermissions,

    /// No matching role found. At least one of the provided new_roles does not
    /// exist on this team.
    DBTEAMMembersSetPermissions2ErrorRoleNotFound,

    /// (no description).
    DBTEAMMembersSetPermissions2ErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMMembersSetPermissions2ErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_not_found".
///
/// Description of the "user_not_found" tag state: No matching user found. The
/// provided team_member_id, email, or external_id does not exist on this team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotFound;

///
/// Initializes union class with tag state of "last_admin".
///
/// Description of the "last_admin" tag state: Cannot remove the admin setting
/// of the last admin.
///
/// @return An initialized instance.
///
- (instancetype)initWithLastAdmin;

///
/// Initializes union class with tag state of "user_not_in_team".
///
/// Description of the "user_not_in_team" tag state: The user is not a member of
/// the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotInTeam;

///
/// Initializes union class with tag state of "cannot_set_permissions".
///
/// Description of the "cannot_set_permissions" tag state: Cannot remove/grant
/// permissions. This can happen if the team member is suspended.
///
/// @return An initialized instance.
///
- (instancetype)initWithCannotSetPermissions;

///
/// Initializes union class with tag state of "role_not_found".
///
/// Description of the "role_not_found" tag state: No matching role found. At
/// least one of the provided new_roles does not exist on this team.
///
/// @return An initialized instance.
///
- (instancetype)initWithRoleNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_not_found".
///
/// @return Whether the union's current tag state has value "user_not_found".
///
- (BOOL)isUserNotFound;

///
/// Retrieves whether the union's current tag state has value "last_admin".
///
/// @return Whether the union's current tag state has value "last_admin".
///
- (BOOL)isLastAdmin;

///
/// Retrieves whether the union's current tag state has value
/// "user_not_in_team".
///
/// @return Whether the union's current tag state has value "user_not_in_team".
///
- (BOOL)isUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value
/// "cannot_set_permissions".
///
/// @return Whether the union's current tag state has value
/// "cannot_set_permissions".
///
- (BOOL)isCannotSetPermissions;

///
/// Retrieves whether the union's current tag state has value "role_not_found".
///
/// @return Whether the union's current tag state has value "role_not_found".
///
- (BOOL)isRoleNotFound;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMMembersSetPermissions2Error` union.
///
@interface DBTEAMMembersSetPermissions2ErrorSerializer : NSObject

///
/// Serializes `DBTEAMMembersSetPermissions2Error` instances.
///
/// @param instance An instance of the `DBTEAMMembersSetPermissions2Error` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersSetPermissions2Error` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMMembersSetPermissions2Error *)instance;

///
/// Deserializes `DBTEAMMembersSetPermissions2Error` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersSetPermissions2Error` API object.
///
/// @return An instantiation of the `DBTEAMMembersSetPermissions2Error` object.
///
+ (DBTEAMMembersSetPermissions2Error *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END