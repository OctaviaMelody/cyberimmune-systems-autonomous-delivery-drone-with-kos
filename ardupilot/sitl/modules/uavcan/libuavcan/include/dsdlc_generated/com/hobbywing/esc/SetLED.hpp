/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/user/cyberimmune-systems-autonomous-delivery-drone-with-kos-contest/modules/DroneCAN/DSDL/com/hobbywing/esc/212.SetLED.uavcan
 */

#ifndef COM_HOBBYWING_ESC_SETLED_HPP_INCLUDED
#define COM_HOBBYWING_ESC_SETLED_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
OVERRIDE_SIGNATURE 0xb493bd48c0853ee5

uint8 OPTION_SAVE = 1
uint8 option

uint8 COLOR_R = 4
uint8 COLOR_G = 2
uint8 COLOR_B = 1
uint8 color

uint8 BLINK_OFF = 0
uint8 BLINK_1HZ = 1
uint8 BLINK_2HZ = 2
uint8 BLINK_5HZ = 5
uint8 blink

---

uint8 option
uint8 color
uint8 blink
******************************************************************************/

/********************* DSDL signature source definition ***********************
com.hobbywing.esc.SetLED
saturated uint8 option
saturated uint8 color
saturated uint8 blink
---
saturated uint8 option
saturated uint8 color
saturated uint8 blink
******************************************************************************/

#undef option
#undef color
#undef blink
#undef OPTION_SAVE
#undef COLOR_R
#undef COLOR_G
#undef COLOR_B
#undef BLINK_OFF
#undef BLINK_1HZ
#undef BLINK_2HZ
#undef BLINK_5HZ
#undef option
#undef color
#undef blink

namespace com
{
namespace hobbywing
{
namespace esc
{

struct UAVCAN_EXPORT SetLED_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OPTION_SAVE;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > COLOR_R;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > COLOR_G;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > COLOR_B;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BLINK_OFF;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BLINK_1HZ;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BLINK_2HZ;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BLINK_5HZ;
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > option;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > color;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > blink;
        };

        enum
        {
            MinBitLen
                = FieldTypes::option::MinBitLen
                + FieldTypes::color::MinBitLen
                + FieldTypes::blink::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::option::MaxBitLen
                + FieldTypes::color::MaxBitLen
                + FieldTypes::blink::MaxBitLen
        };

        // Constants
        static const typename ::uavcan::StorageType< typename ConstantTypes::OPTION_SAVE >::Type OPTION_SAVE; // 1
        static const typename ::uavcan::StorageType< typename ConstantTypes::COLOR_R >::Type COLOR_R; // 4
        static const typename ::uavcan::StorageType< typename ConstantTypes::COLOR_G >::Type COLOR_G; // 2
        static const typename ::uavcan::StorageType< typename ConstantTypes::COLOR_B >::Type COLOR_B; // 1
        static const typename ::uavcan::StorageType< typename ConstantTypes::BLINK_OFF >::Type BLINK_OFF; // 0
        static const typename ::uavcan::StorageType< typename ConstantTypes::BLINK_1HZ >::Type BLINK_1HZ; // 1
        static const typename ::uavcan::StorageType< typename ConstantTypes::BLINK_2HZ >::Type BLINK_2HZ; // 2
        static const typename ::uavcan::StorageType< typename ConstantTypes::BLINK_5HZ >::Type BLINK_5HZ; // 5

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::option >::Type option;
        typename ::uavcan::StorageType< typename FieldTypes::color >::Type color;
        typename ::uavcan::StorageType< typename FieldTypes::blink >::Type blink;

        Request_()
            : option()
            , color()
            , blink()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<24 == MaxBitLen>::check();
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
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > option;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > color;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > blink;
        };

        enum
        {
            MinBitLen
                = FieldTypes::option::MinBitLen
                + FieldTypes::color::MinBitLen
                + FieldTypes::blink::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::option::MaxBitLen
                + FieldTypes::color::MaxBitLen
                + FieldTypes::blink::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::option >::Type option;
        typename ::uavcan::StorageType< typename FieldTypes::color >::Type color;
        typename ::uavcan::StorageType< typename FieldTypes::blink >::Type blink;

        Response_()
            : option()
            , color()
            , blink()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<24 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 212 };

    static const char* getDataTypeFullName()
    {
        return "com.hobbywing.esc.SetLED";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    SetLED_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool SetLED_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        option == rhs.option &&
        color == rhs.color &&
        blink == rhs.blink;
}

template <int _tmpl>
bool SetLED_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(option, rhs.option) &&
        ::uavcan::areClose(color, rhs.color) &&
        ::uavcan::areClose(blink, rhs.blink);
}

template <int _tmpl>
int SetLED_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::option::encode(self.option, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::color::encode(self.color, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::blink::encode(self.blink, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int SetLED_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::option::decode(self.option, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::color::decode(self.color, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::blink::decode(self.blink, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool SetLED_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        option == rhs.option &&
        color == rhs.color &&
        blink == rhs.blink;
}

template <int _tmpl>
bool SetLED_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(option, rhs.option) &&
        ::uavcan::areClose(color, rhs.color) &&
        ::uavcan::areClose(blink, rhs.blink);
}

template <int _tmpl>
int SetLED_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::option::encode(self.option, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::color::encode(self.color, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::blink::encode(self.blink, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int SetLED_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::option::decode(self.option, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::color::decode(self.color, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::blink::decode(self.blink, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature SetLED_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xB493BD48C0853EE5ULL);

    Request::FieldTypes::option::extendDataTypeSignature(signature);
    Request::FieldTypes::color::extendDataTypeSignature(signature);
    Request::FieldTypes::blink::extendDataTypeSignature(signature);

    Response::FieldTypes::option::extendDataTypeSignature(signature);
    Response::FieldTypes::color::extendDataTypeSignature(signature);
    Response::FieldTypes::blink::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetLED_::Request_<_tmpl>::ConstantTypes::OPTION_SAVE >::Type
    SetLED_::Request_<_tmpl>::OPTION_SAVE = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetLED_::Request_<_tmpl>::ConstantTypes::COLOR_R >::Type
    SetLED_::Request_<_tmpl>::COLOR_R = 4U; // 4

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetLED_::Request_<_tmpl>::ConstantTypes::COLOR_G >::Type
    SetLED_::Request_<_tmpl>::COLOR_G = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetLED_::Request_<_tmpl>::ConstantTypes::COLOR_B >::Type
    SetLED_::Request_<_tmpl>::COLOR_B = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetLED_::Request_<_tmpl>::ConstantTypes::BLINK_OFF >::Type
    SetLED_::Request_<_tmpl>::BLINK_OFF = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetLED_::Request_<_tmpl>::ConstantTypes::BLINK_1HZ >::Type
    SetLED_::Request_<_tmpl>::BLINK_1HZ = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetLED_::Request_<_tmpl>::ConstantTypes::BLINK_2HZ >::Type
    SetLED_::Request_<_tmpl>::BLINK_2HZ = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetLED_::Request_<_tmpl>::ConstantTypes::BLINK_5HZ >::Type
    SetLED_::Request_<_tmpl>::BLINK_5HZ = 5U; // 5

/*
 * Final typedef
 */
typedef SetLED_ SetLED;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::com::hobbywing::esc::SetLED > _uavcan_gdtr_registrator_SetLED;

}

} // Namespace esc
} // Namespace hobbywing
} // Namespace com

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::com::hobbywing::esc::SetLED::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::com::hobbywing::esc::SetLED::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::com::hobbywing::esc::SetLED::Request >::stream(Stream& s, ::com::hobbywing::esc::SetLED::Request::ParameterType obj, const int level)
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
    s << "option: ";
    YamlStreamer< ::com::hobbywing::esc::SetLED::Request::FieldTypes::option >::stream(s, obj.option, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "color: ";
    YamlStreamer< ::com::hobbywing::esc::SetLED::Request::FieldTypes::color >::stream(s, obj.color, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "blink: ";
    YamlStreamer< ::com::hobbywing::esc::SetLED::Request::FieldTypes::blink >::stream(s, obj.blink, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::com::hobbywing::esc::SetLED::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::com::hobbywing::esc::SetLED::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::com::hobbywing::esc::SetLED::Response >::stream(Stream& s, ::com::hobbywing::esc::SetLED::Response::ParameterType obj, const int level)
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
    s << "option: ";
    YamlStreamer< ::com::hobbywing::esc::SetLED::Response::FieldTypes::option >::stream(s, obj.option, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "color: ";
    YamlStreamer< ::com::hobbywing::esc::SetLED::Response::FieldTypes::color >::stream(s, obj.color, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "blink: ";
    YamlStreamer< ::com::hobbywing::esc::SetLED::Response::FieldTypes::blink >::stream(s, obj.blink, level + 1);
}

}

namespace com
{
namespace hobbywing
{
namespace esc
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::com::hobbywing::esc::SetLED::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::com::hobbywing::esc::SetLED::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::com::hobbywing::esc::SetLED::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::com::hobbywing::esc::SetLED::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace esc
} // Namespace hobbywing
} // Namespace com

#endif // COM_HOBBYWING_ESC_SETLED_HPP_INCLUDED