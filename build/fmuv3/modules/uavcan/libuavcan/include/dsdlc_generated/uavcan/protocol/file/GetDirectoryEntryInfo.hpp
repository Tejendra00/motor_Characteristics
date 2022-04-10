/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tinker/tej/ardupilot/modules/DroneCAN/DSDL/uavcan/protocol/file/46.GetDirectoryEntryInfo.uavcan
 */

#ifndef UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_HPP_INCLUDED
#define UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/protocol/file/EntryType.hpp>
#include <uavcan/protocol/file/Error.hpp>
#include <uavcan/protocol/file/Path.hpp>

/******************************* Source text **********************************
#
# This service can be used to retrieve a remote directory listing, one entry per request.
#
# The client should query each entry independently, iterating 'entry_index' from 0 until the last entry is passed,
# in which case the server will report that there is no such entry (via the fields 'entry_type' and 'error').
#
# The entry_index shall be applied to the ordered list of directory entries (e.g. alphabetically ordered). The exact
# sorting criteria does not matter as long as it provides the same ordering for subsequent service calls.
#

uint32 entry_index

Path directory_path

---

Error error

EntryType entry_type

Path entry_full_path  # Ignored/Empty if such entry does not exist.
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.file.GetDirectoryEntryInfo
saturated uint32 entry_index
uavcan.protocol.file.Path directory_path
---
uavcan.protocol.file.Error error
uavcan.protocol.file.EntryType entry_type
uavcan.protocol.file.Path entry_full_path
******************************************************************************/

#undef entry_index
#undef directory_path
#undef error
#undef entry_type
#undef entry_full_path

namespace uavcan
{
namespace protocol
{
namespace file
{

struct UAVCAN_EXPORT GetDirectoryEntryInfo_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 32, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > entry_index;
            typedef ::uavcan::protocol::file::Path directory_path;
        };

        enum
        {
            MinBitLen
                = FieldTypes::entry_index::MinBitLen
                + FieldTypes::directory_path::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::entry_index::MaxBitLen
                + FieldTypes::directory_path::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::entry_index >::Type entry_index;
        typename ::uavcan::StorageType< typename FieldTypes::directory_path >::Type directory_path;

        Request_()
            : entry_index()
            , directory_path()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<1640 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::protocol::file::Error error;
            typedef ::uavcan::protocol::file::EntryType entry_type;
            typedef ::uavcan::protocol::file::Path entry_full_path;
        };

        enum
        {
            MinBitLen
                = FieldTypes::error::MinBitLen
                + FieldTypes::entry_type::MinBitLen
                + FieldTypes::entry_full_path::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::error::MaxBitLen
                + FieldTypes::entry_type::MaxBitLen
                + FieldTypes::entry_full_path::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::error >::Type error;
        typename ::uavcan::StorageType< typename FieldTypes::entry_type >::Type entry_type;
        typename ::uavcan::StorageType< typename FieldTypes::entry_full_path >::Type entry_full_path;

        Response_()
            : error()
            , entry_type()
            , entry_full_path()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<1632 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 46 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.file.GetDirectoryEntryInfo";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    GetDirectoryEntryInfo_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool GetDirectoryEntryInfo_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        entry_index == rhs.entry_index &&
        directory_path == rhs.directory_path;
}

template <int _tmpl>
bool GetDirectoryEntryInfo_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(entry_index, rhs.entry_index) &&
        ::uavcan::areClose(directory_path, rhs.directory_path);
}

template <int _tmpl>
int GetDirectoryEntryInfo_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::entry_index::encode(self.entry_index, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::directory_path::encode(self.directory_path, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetDirectoryEntryInfo_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::entry_index::decode(self.entry_index, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::directory_path::decode(self.directory_path, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool GetDirectoryEntryInfo_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        error == rhs.error &&
        entry_type == rhs.entry_type &&
        entry_full_path == rhs.entry_full_path;
}

template <int _tmpl>
bool GetDirectoryEntryInfo_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(error, rhs.error) &&
        ::uavcan::areClose(entry_type, rhs.entry_type) &&
        ::uavcan::areClose(entry_full_path, rhs.entry_full_path);
}

template <int _tmpl>
int GetDirectoryEntryInfo_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::error::encode(self.error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::entry_type::encode(self.entry_type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::entry_full_path::encode(self.entry_full_path, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetDirectoryEntryInfo_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::error::decode(self.error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::entry_type::decode(self.entry_type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::entry_full_path::decode(self.entry_full_path, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature GetDirectoryEntryInfo_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xCFB1184F8C28C684ULL);

    Request::FieldTypes::entry_index::extendDataTypeSignature(signature);
    Request::FieldTypes::directory_path::extendDataTypeSignature(signature);

    Response::FieldTypes::error::extendDataTypeSignature(signature);
    Response::FieldTypes::entry_type::extendDataTypeSignature(signature);
    Response::FieldTypes::entry_full_path::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef GetDirectoryEntryInfo_ GetDirectoryEntryInfo;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::file::GetDirectoryEntryInfo > _uavcan_gdtr_registrator_GetDirectoryEntryInfo;

}

} // Namespace file
} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::GetDirectoryEntryInfo::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Request >::stream(Stream& s, ::uavcan::protocol::file::GetDirectoryEntryInfo::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "entry_index: ";
    YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Request::FieldTypes::entry_index >::stream(s, obj.entry_index, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "directory_path: ";
    YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Request::FieldTypes::directory_path >::stream(s, obj.directory_path, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::GetDirectoryEntryInfo::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Response >::stream(Stream& s, ::uavcan::protocol::file::GetDirectoryEntryInfo::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "error: ";
    YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Response::FieldTypes::error >::stream(s, obj.error, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "entry_type: ";
    YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Response::FieldTypes::entry_type >::stream(s, obj.entry_type, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "entry_full_path: ";
    YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Response::FieldTypes::entry_full_path >::stream(s, obj.entry_full_path, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace file
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::GetDirectoryEntryInfo::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::GetDirectoryEntryInfo::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::GetDirectoryEntryInfo::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace file
} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_HPP_INCLUDED