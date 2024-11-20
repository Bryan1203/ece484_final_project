// Generated by gencpp from file septentrio_gnss_driver/GALAuthStatus.msg
// DO NOT EDIT!


#ifndef SEPTENTRIO_GNSS_DRIVER_MESSAGE_GALAUTHSTATUS_H
#define SEPTENTRIO_GNSS_DRIVER_MESSAGE_GALAUTHSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <septentrio_gnss_driver/BlockHeader.h>

namespace septentrio_gnss_driver
{
template <class ContainerAllocator>
struct GALAuthStatus_
{
  typedef GALAuthStatus_<ContainerAllocator> Type;

  GALAuthStatus_()
    : header()
    , block_header()
    , osnma_status(0)
    , trusted_time_delta(0.0)
    , gal_active_mask(0)
    , gal_authentic_mask(0)
    , gps_active_mask(0)
    , gps_authentic_mask(0)  {
    }
  GALAuthStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , block_header(_alloc)
    , osnma_status(0)
    , trusted_time_delta(0.0)
    , gal_active_mask(0)
    , gal_authentic_mask(0)
    , gps_active_mask(0)
    , gps_authentic_mask(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator>  _block_header_type;
  _block_header_type block_header;

   typedef uint16_t _osnma_status_type;
  _osnma_status_type osnma_status;

   typedef float _trusted_time_delta_type;
  _trusted_time_delta_type trusted_time_delta;

   typedef uint64_t _gal_active_mask_type;
  _gal_active_mask_type gal_active_mask;

   typedef uint64_t _gal_authentic_mask_type;
  _gal_authentic_mask_type gal_authentic_mask;

   typedef uint64_t _gps_active_mask_type;
  _gps_active_mask_type gps_active_mask;

   typedef uint64_t _gps_authentic_mask_type;
  _gps_authentic_mask_type gps_authentic_mask;





  typedef boost::shared_ptr< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> const> ConstPtr;

}; // struct GALAuthStatus_

typedef ::septentrio_gnss_driver::GALAuthStatus_<std::allocator<void> > GALAuthStatus;

typedef boost::shared_ptr< ::septentrio_gnss_driver::GALAuthStatus > GALAuthStatusPtr;
typedef boost::shared_ptr< ::septentrio_gnss_driver::GALAuthStatus const> GALAuthStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.block_header == rhs.block_header &&
    lhs.osnma_status == rhs.osnma_status &&
    lhs.trusted_time_delta == rhs.trusted_time_delta &&
    lhs.gal_active_mask == rhs.gal_active_mask &&
    lhs.gal_authentic_mask == rhs.gal_authentic_mask &&
    lhs.gps_active_mask == rhs.gps_active_mask &&
    lhs.gps_authentic_mask == rhs.gps_authentic_mask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace septentrio_gnss_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b9a0d56668644a236059d089716150f";
  }

  static const char* value(const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b9a0d56668644a2ULL;
  static const uint64_t static_value2 = 0x36059d089716150fULL;
};

template<class ContainerAllocator>
struct DataType< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "septentrio_gnss_driver/GALAuthStatus";
  }

  static const char* value(const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# GALAuthStatus block \n"
"# Block_Number 4245\n"
"\n"
"std_msgs/Header header\n"
"\n"
"# SBF block header including time header\n"
"BlockHeader block_header\n"
"\n"
"uint16  osnma_status\n"
"float32 trusted_time_delta # s\n"
"uint64  gal_active_mask\n"
"uint64  gal_authentic_mask\n"
"uint64  gps_active_mask\n"
"uint64  gps_authentic_mask\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: septentrio_gnss_driver/BlockHeader\n"
"# Blockheader including time header for all ROS messages that publish SBF blocks\n"
"\n"
"uint8     sync_1\n"
"uint8     sync_2\n"
"uint16    crc\n"
"uint16    id\n"
"uint8     revision\n"
"uint16    length\n"
"\n"
"uint32    tow # ms since week start\n"
"uint16    wnc # weeks since Jan 06, 1980 at 00:00:00 UTC     \n"
;
  }

  static const char* value(const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.block_header);
      stream.next(m.osnma_status);
      stream.next(m.trusted_time_delta);
      stream.next(m.gal_active_mask);
      stream.next(m.gal_authentic_mask);
      stream.next(m.gps_active_mask);
      stream.next(m.gps_authentic_mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GALAuthStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::septentrio_gnss_driver::GALAuthStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "block_header: ";
    s << std::endl;
    Printer< ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.block_header);
    s << indent << "osnma_status: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.osnma_status);
    s << indent << "trusted_time_delta: ";
    Printer<float>::stream(s, indent + "  ", v.trusted_time_delta);
    s << indent << "gal_active_mask: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.gal_active_mask);
    s << indent << "gal_authentic_mask: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.gal_authentic_mask);
    s << indent << "gps_active_mask: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.gps_active_mask);
    s << indent << "gps_authentic_mask: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.gps_authentic_mask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEPTENTRIO_GNSS_DRIVER_MESSAGE_GALAUTHSTATUS_H