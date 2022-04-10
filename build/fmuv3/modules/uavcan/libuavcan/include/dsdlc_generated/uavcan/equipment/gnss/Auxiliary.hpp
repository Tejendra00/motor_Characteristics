/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tinker/tej/ardupilot/modules/DroneCAN/DSDL/uavcan/equipment/gnss/1061.Auxiliary.uavcan
 */

#ifndef UAVCAN_EQUIPMENT_GNSS_AUXILIARY_HPP_INCLUDED
#define UAVCAN_EQUIPMENT_GNSS_AUXILIARY_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# GNSS low priority auxiliary info.
# Unknown DOP parameters should be set to NAN.
#

float16 gdop
float16 pdop
float16 hdop
float16 vdop
float16 tdop
float16 ndop
float16 edop

uint7 sats_visible                    # All visible sats of all available GNSS (e.g. GPS, GLONASS, etc)
uint6 sats_used                       # All used sats of all available GNSS
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.gnss.Auxiliary
saturated float16 gdop
saturated float16 pdop
saturated float16 hdop
saturated float16 vdop
saturated float16 tdop
saturated float16 ndop
saturated float16 edop
saturated uint7 sats_visible
saturated uint6 sats_used
******************************************************************************/

#undef gdop
#undef pdop
#undef hdop
#undef vdop
#undef tdop
#undef ndop
#undef edop
#undef sats_visible
#undef sats_used

namespace uavcan
{
namespace equipment
{
namespace gnss
{

template <int _tmpl>
struct UAVCAN_EXPORT Auxiliary_
{
    typedef const Auxiliary_<_tmpl>& ParameterType;
    typedef Auxiliary_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > gdop;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > pdop;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > hdop;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > vdop;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > tdop;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > ndop;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > edop;
        typedef ::uavcan::IntegerSpec< 7, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > sats_visible;
        typedef ::uavcan::IntegerSpec< 6, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > sats_used;
    };

    enum
    {
        MinBitLen
            = FieldTypes::gdop::MinBitLen
            + FieldTypes::pdop::MinBitLen
            + FieldTypes::hdop::MinBitLen
            + FieldTypes::vdop::MinBitLen
            + FieldTypes::tdop::MinBitLen
            + FieldTypes::ndop::MinBitLen
            + FieldTypes::edop::MinBitLen
            + FieldTypes::sats_visible::MinBitLen
            + FieldTypes::sats_used::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::gdop::MaxBitLen
            + FieldTypes::pdop::MaxBitLen
            + FieldTypes::hdop::MaxBitLen
            + FieldTypes::vdop::MaxBitLen
            + FieldTypes::tdop::MaxBitLen
            + FieldTypes::ndop::MaxBitLen
            + FieldTypes::edop::MaxBitLen
            + FieldTypes::sats_visible::MaxBitLen
            + FieldTypes::sats_used::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::gdop >::Type gdop;
    typename ::uavcan::StorageType< typename FieldTypes::pdop >::Type pdop;
    typename ::uavcan::StorageType< typename FieldTypes::hdop >::Type hdop;
    typename ::uavcan::StorageType< typename FieldTypes::vdop >::Type vdop;
    typename ::uavcan::StorageType< typename FieldTypes::tdop >::Type tdop;
    typename ::uavcan::StorageType< typename FieldTypes::ndop >::Type ndop;
    typename ::uavcan::StorageType< typename FieldTypes::edop >::Type edop;
    typename ::uavcan::StorageType< typename FieldTypes::sats_visible >::Type sats_visible;
    typename ::uavcan::StorageType< typename FieldTypes::sats_used >::Type sats_used;

    Auxiliary_()
        : gdop()
        , pdop()
        , hdop()
        , vdop()
        , tdop()
        , ndop()
        , edop()
        , sats_visible()
        , sats_used()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<125 == MaxBitLen>::check();
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

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 1061 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.gnss.Auxiliary";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Auxiliary_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        gdop == rhs.gdop &&
        pdop == rhs.pdop &&
        hdop == rhs.hdop &&
        vdop == rhs.vdop &&
        tdop == rhs.tdop &&
        ndop == rhs.ndop &&
        edop == rhs.edop &&
        sats_visible == rhs.sats_visible &&
        sats_used == rhs.sats_used;
}

template <int _tmpl>
bool Auxiliary_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(gdop, rhs.gdop) &&
        ::uavcan::areClose(pdop, rhs.pdop) &&
        ::uavcan::areClose(hdop, rhs.hdop) &&
        ::uavcan::areClose(vdop, rhs.vdop) &&
        ::uavcan::areClose(tdop, rhs.tdop) &&
        ::uavcan::areClose(ndop, rhs.ndop) &&
        ::uavcan::areClose(edop, rhs.edop) &&
        ::uavcan::areClose(sats_visible, rhs.sats_visible) &&
        ::uavcan::areClose(sats_used, rhs.sats_used);
}

template <int _tmpl>
int Auxiliary_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::gdop::encode(self.gdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::pdop::encode(self.pdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::hdop::encode(self.hdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::vdop::encode(self.vdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::tdop::encode(self.tdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ndop::encode(self.ndop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::edop::encode(self.edop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sats_visible::encode(self.sats_visible, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sats_used::encode(self.sats_used, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Auxiliary_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::gdop::decode(self.gdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::pdop::decode(self.pdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::hdop::decode(self.hdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::vdop::decode(self.vdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::tdop::decode(self.tdop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ndop::decode(self.ndop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::edop::decode(self.edop, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sats_visible::decode(self.sats_visible, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sats_used::decode(self.sats_used, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Auxiliary_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x9BE8BDC4C3DBBFD2ULL);

    FieldTypes::gdop::extendDataTypeSignature(signature);
    FieldTypes::pdop::extendDataTypeSignature(signature);
    FieldTypes::hdop::extendDataTypeSignature(signature);
    FieldTypes::vdop::extendDataTypeSignature(signature);
    FieldTypes::tdop::extendDataTypeSignature(signature);
    FieldTypes::ndop::extendDataTypeSignature(signature);
    FieldTypes::edop::extendDataTypeSignature(signature);
    FieldTypes::sats_visible::extendDataTypeSignature(signature);
    FieldTypes::sats_used::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Auxiliary_<0> Auxiliary;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::gnss::Auxiliary > _uavcan_gdtr_registrator_Auxiliary;

}

} // Namespace gnss
} // Namespace equipment
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::gnss::Auxiliary >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::gnss::Auxiliary::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::gnss::Auxiliary >::stream(Stream& s, ::uavcan::equipment::gnss::Auxiliary::ParameterType obj, const int level)
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
    s << "gdop: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::gdop >::stream(s, obj.gdop, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "pdop: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::pdop >::stream(s, obj.pdop, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "hdop: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::hdop >::stream(s, obj.hdop, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "vdop: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::vdop >::stream(s, obj.vdop, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "tdop: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::tdop >::stream(s, obj.tdop, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "ndop: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::ndop >::stream(s, obj.ndop, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "edop: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::edop >::stream(s, obj.edop, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "sats_visible: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::sats_visible >::stream(s, obj.sats_visible, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "sats_used: ";
    YamlStreamer< ::uavcan::equipment::gnss::Auxiliary::FieldTypes::sats_used >::stream(s, obj.sats_used, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace gnss
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::gnss::Auxiliary::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::gnss::Auxiliary >::stream(s, obj, 0);
    return s;
}

} // Namespace gnss
} // Namespace equipment
} // Namespace uavcan

#endif // UAVCAN_EQUIPMENT_GNSS_AUXILIARY_HPP_INCLUDED