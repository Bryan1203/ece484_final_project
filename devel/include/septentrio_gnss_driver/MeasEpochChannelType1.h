// Generated by gencpp from file septentrio_gnss_driver/MeasEpochChannelType1.msg
// DO NOT EDIT!


#ifndef SEPTENTRIO_GNSS_DRIVER_MESSAGE_MEASEPOCHCHANNELTYPE1_H
#define SEPTENTRIO_GNSS_DRIVER_MESSAGE_MEASEPOCHCHANNELTYPE1_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <septentrio_gnss_driver/MeasEpochChannelType2.h>

namespace septentrio_gnss_driver
{
template <class ContainerAllocator>
struct MeasEpochChannelType1_
{
  typedef MeasEpochChannelType1_<ContainerAllocator> Type;

  MeasEpochChannelType1_()
    : rx_channel(0)
    , type(0)
    , sv_id(0)
    , misc(0)
    , code_lsb(0)
    , doppler(0)
    , carrier_lsb(0)
    , carrier_msb(0)
    , cn0(0)
    , lock_time(0)
    , obs_info(0)
    , n2(0)
    , type2()  {
    }
  MeasEpochChannelType1_(const ContainerAllocator& _alloc)
    : rx_channel(0)
    , type(0)
    , sv_id(0)
    , misc(0)
    , code_lsb(0)
    , doppler(0)
    , carrier_lsb(0)
    , carrier_msb(0)
    , cn0(0)
    , lock_time(0)
    , obs_info(0)
    , n2(0)
    , type2(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _rx_channel_type;
  _rx_channel_type rx_channel;

   typedef uint8_t _type_type;
  _type_type type;

   typedef uint8_t _sv_id_type;
  _sv_id_type sv_id;

   typedef uint8_t _misc_type;
  _misc_type misc;

   typedef uint32_t _code_lsb_type;
  _code_lsb_type code_lsb;

   typedef int32_t _doppler_type;
  _doppler_type doppler;

   typedef uint16_t _carrier_lsb_type;
  _carrier_lsb_type carrier_lsb;

   typedef int8_t _carrier_msb_type;
  _carrier_msb_type carrier_msb;

   typedef uint8_t _cn0_type;
  _cn0_type cn0;

   typedef uint16_t _lock_time_type;
  _lock_time_type lock_time;

   typedef uint8_t _obs_info_type;
  _obs_info_type obs_info;

   typedef uint8_t _n2_type;
  _n2_type n2;

   typedef std::vector< ::septentrio_gnss_driver::MeasEpochChannelType2_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::septentrio_gnss_driver::MeasEpochChannelType2_<ContainerAllocator> >> _type2_type;
  _type2_type type2;





  typedef boost::shared_ptr< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> const> ConstPtr;

}; // struct MeasEpochChannelType1_

typedef ::septentrio_gnss_driver::MeasEpochChannelType1_<std::allocator<void> > MeasEpochChannelType1;

typedef boost::shared_ptr< ::septentrio_gnss_driver::MeasEpochChannelType1 > MeasEpochChannelType1Ptr;
typedef boost::shared_ptr< ::septentrio_gnss_driver::MeasEpochChannelType1 const> MeasEpochChannelType1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator2> & rhs)
{
  return lhs.rx_channel == rhs.rx_channel &&
    lhs.type == rhs.type &&
    lhs.sv_id == rhs.sv_id &&
    lhs.misc == rhs.misc &&
    lhs.code_lsb == rhs.code_lsb &&
    lhs.doppler == rhs.doppler &&
    lhs.carrier_lsb == rhs.carrier_lsb &&
    lhs.carrier_msb == rhs.carrier_msb &&
    lhs.cn0 == rhs.cn0 &&
    lhs.lock_time == rhs.lock_time &&
    lhs.obs_info == rhs.obs_info &&
    lhs.n2 == rhs.n2 &&
    lhs.type2 == rhs.type2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace septentrio_gnss_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6ec5531728aded72fdbf7e7550cabd87";
  }

  static const char* value(const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6ec5531728aded72ULL;
  static const uint64_t static_value2 = 0xfdbf7e7550cabd87ULL;
};

template<class ContainerAllocator>
struct DataType< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "septentrio_gnss_driver/MeasEpochChannelType1";
  }

  static const char* value(const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MeasEpochChannelType1 block\n"
"   \n"
"uint8  rx_channel\n"
"uint8  type\n"
"uint8  sv_id\n"
"uint8  misc        # 4294967.296 m\n"
"uint32 code_lsb    # 0.001 m\n"
"int32  doppler     # 0.0001 Hz\n"
"uint16 carrier_lsb # 0.001 cycles\n"
"int8   carrier_msb # 65.536 cycles\n"
"uint8  cn0         # 0.25 dB-Hz\n"
"uint16 lock_time\n"
"uint8  obs_info\n"
"uint8  n2\n"
"\n"
"MeasEpochChannelType2[] type2\n"
"================================================================================\n"
"MSG: septentrio_gnss_driver/MeasEpochChannelType2\n"
"# MeasEpochChannelType2 block\n"
"   \n"
"uint8  type\n"
"uint8  lock_time          # s\n"
"uint8  cn0                # 0.25 dB-Hz\n"
"uint8  offsets_msb        # 65.536 m or 65.536 Hz\n"
"int8   carrier_msb        # 65.536 cycles\n"
"uint8  obs_info\n"
"uint16 code_offset_lsb    # 0.001 m\n"
"uint16 carrier_lsb        # 0.001 cycles\n"
"uint16 doppler_offset_lsb # 0.0001 Hz\n"
;
  }

  static const char* value(const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rx_channel);
      stream.next(m.type);
      stream.next(m.sv_id);
      stream.next(m.misc);
      stream.next(m.code_lsb);
      stream.next(m.doppler);
      stream.next(m.carrier_lsb);
      stream.next(m.carrier_msb);
      stream.next(m.cn0);
      stream.next(m.lock_time);
      stream.next(m.obs_info);
      stream.next(m.n2);
      stream.next(m.type2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MeasEpochChannelType1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::septentrio_gnss_driver::MeasEpochChannelType1_<ContainerAllocator>& v)
  {
    s << indent << "rx_channel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rx_channel);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "sv_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sv_id);
    s << indent << "misc: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.misc);
    s << indent << "code_lsb: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.code_lsb);
    s << indent << "doppler: ";
    Printer<int32_t>::stream(s, indent + "  ", v.doppler);
    s << indent << "carrier_lsb: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.carrier_lsb);
    s << indent << "carrier_msb: ";
    Printer<int8_t>::stream(s, indent + "  ", v.carrier_msb);
    s << indent << "cn0: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cn0);
    s << indent << "lock_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.lock_time);
    s << indent << "obs_info: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.obs_info);
    s << indent << "n2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.n2);
    s << indent << "type2[]" << std::endl;
    for (size_t i = 0; i < v.type2.size(); ++i)
    {
      s << indent << "  type2[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::septentrio_gnss_driver::MeasEpochChannelType2_<ContainerAllocator> >::stream(s, indent + "    ", v.type2[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEPTENTRIO_GNSS_DRIVER_MESSAGE_MEASEPOCHCHANNELTYPE1_H
