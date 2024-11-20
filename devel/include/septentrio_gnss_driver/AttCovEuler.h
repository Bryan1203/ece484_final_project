// Generated by gencpp from file septentrio_gnss_driver/AttCovEuler.msg
// DO NOT EDIT!


#ifndef SEPTENTRIO_GNSS_DRIVER_MESSAGE_ATTCOVEULER_H
#define SEPTENTRIO_GNSS_DRIVER_MESSAGE_ATTCOVEULER_H


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
struct AttCovEuler_
{
  typedef AttCovEuler_<ContainerAllocator> Type;

  AttCovEuler_()
    : header()
    , block_header()
    , error(0)
    , cov_headhead(0.0)
    , cov_pitchpitch(0.0)
    , cov_rollroll(0.0)
    , cov_headpitch(0.0)
    , cov_headroll(0.0)
    , cov_pitchroll(0.0)  {
    }
  AttCovEuler_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , block_header(_alloc)
    , error(0)
    , cov_headhead(0.0)
    , cov_pitchpitch(0.0)
    , cov_rollroll(0.0)
    , cov_headpitch(0.0)
    , cov_headroll(0.0)
    , cov_pitchroll(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator>  _block_header_type;
  _block_header_type block_header;

   typedef uint8_t _error_type;
  _error_type error;

   typedef float _cov_headhead_type;
  _cov_headhead_type cov_headhead;

   typedef float _cov_pitchpitch_type;
  _cov_pitchpitch_type cov_pitchpitch;

   typedef float _cov_rollroll_type;
  _cov_rollroll_type cov_rollroll;

   typedef float _cov_headpitch_type;
  _cov_headpitch_type cov_headpitch;

   typedef float _cov_headroll_type;
  _cov_headroll_type cov_headroll;

   typedef float _cov_pitchroll_type;
  _cov_pitchroll_type cov_pitchroll;





  typedef boost::shared_ptr< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> const> ConstPtr;

}; // struct AttCovEuler_

typedef ::septentrio_gnss_driver::AttCovEuler_<std::allocator<void> > AttCovEuler;

typedef boost::shared_ptr< ::septentrio_gnss_driver::AttCovEuler > AttCovEulerPtr;
typedef boost::shared_ptr< ::septentrio_gnss_driver::AttCovEuler const> AttCovEulerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.block_header == rhs.block_header &&
    lhs.error == rhs.error &&
    lhs.cov_headhead == rhs.cov_headhead &&
    lhs.cov_pitchpitch == rhs.cov_pitchpitch &&
    lhs.cov_rollroll == rhs.cov_rollroll &&
    lhs.cov_headpitch == rhs.cov_headpitch &&
    lhs.cov_headroll == rhs.cov_headroll &&
    lhs.cov_pitchroll == rhs.cov_pitchroll;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace septentrio_gnss_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e0afc6c2dfb1f98f719a573ace215ea7";
  }

  static const char* value(const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe0afc6c2dfb1f98fULL;
  static const uint64_t static_value2 = 0x719a573ace215ea7ULL;
};

template<class ContainerAllocator>
struct DataType< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >
{
  static const char* value()
  {
    return "septentrio_gnss_driver/AttCovEuler";
  }

  static const char* value(const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# AttCovEuler block\n"
"# ROS message header\n"
"std_msgs/Header header\n"
"\n"
"# SBF block header including time header\n"
"BlockHeader  block_header   \n"
"\n"
"uint8        error   \n"
"float32      cov_headhead   # deg^2\n"
"float32      cov_pitchpitch # deg^2\n"
"float32      cov_rollroll   # deg^2 \n"
"float32      cov_headpitch  # deg^2\n"
"float32      cov_headroll   # deg^2\n"
"float32      cov_pitchroll  # deg^2\n"
"\n"
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

  static const char* value(const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.block_header);
      stream.next(m.error);
      stream.next(m.cov_headhead);
      stream.next(m.cov_pitchpitch);
      stream.next(m.cov_rollroll);
      stream.next(m.cov_headpitch);
      stream.next(m.cov_headroll);
      stream.next(m.cov_pitchroll);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AttCovEuler_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::septentrio_gnss_driver::AttCovEuler_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "block_header: ";
    s << std::endl;
    Printer< ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.block_header);
    s << indent << "error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error);
    s << indent << "cov_headhead: ";
    Printer<float>::stream(s, indent + "  ", v.cov_headhead);
    s << indent << "cov_pitchpitch: ";
    Printer<float>::stream(s, indent + "  ", v.cov_pitchpitch);
    s << indent << "cov_rollroll: ";
    Printer<float>::stream(s, indent + "  ", v.cov_rollroll);
    s << indent << "cov_headpitch: ";
    Printer<float>::stream(s, indent + "  ", v.cov_headpitch);
    s << indent << "cov_headroll: ";
    Printer<float>::stream(s, indent + "  ", v.cov_headroll);
    s << indent << "cov_pitchroll: ";
    Printer<float>::stream(s, indent + "  ", v.cov_pitchroll);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEPTENTRIO_GNSS_DRIVER_MESSAGE_ATTCOVEULER_H
