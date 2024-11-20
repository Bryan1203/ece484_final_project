// Generated by gencpp from file septentrio_gnss_driver/ReceiverTime.msg
// DO NOT EDIT!


#ifndef SEPTENTRIO_GNSS_DRIVER_MESSAGE_RECEIVERTIME_H
#define SEPTENTRIO_GNSS_DRIVER_MESSAGE_RECEIVERTIME_H


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
struct ReceiverTime_
{
  typedef ReceiverTime_<ContainerAllocator> Type;

  ReceiverTime_()
    : header()
    , block_header()
    , utc_year(0)
    , utc_month(0)
    , utc_day(0)
    , utc_hour(0)
    , utc_min(0)
    , utc_second(0)
    , delta_ls(0)
    , sync_level(0)  {
    }
  ReceiverTime_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , block_header(_alloc)
    , utc_year(0)
    , utc_month(0)
    , utc_day(0)
    , utc_hour(0)
    , utc_min(0)
    , utc_second(0)
    , delta_ls(0)
    , sync_level(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator>  _block_header_type;
  _block_header_type block_header;

   typedef int8_t _utc_year_type;
  _utc_year_type utc_year;

   typedef int8_t _utc_month_type;
  _utc_month_type utc_month;

   typedef int8_t _utc_day_type;
  _utc_day_type utc_day;

   typedef int8_t _utc_hour_type;
  _utc_hour_type utc_hour;

   typedef int8_t _utc_min_type;
  _utc_min_type utc_min;

   typedef int8_t _utc_second_type;
  _utc_second_type utc_second;

   typedef int8_t _delta_ls_type;
  _delta_ls_type delta_ls;

   typedef uint8_t _sync_level_type;
  _sync_level_type sync_level;





  typedef boost::shared_ptr< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> const> ConstPtr;

}; // struct ReceiverTime_

typedef ::septentrio_gnss_driver::ReceiverTime_<std::allocator<void> > ReceiverTime;

typedef boost::shared_ptr< ::septentrio_gnss_driver::ReceiverTime > ReceiverTimePtr;
typedef boost::shared_ptr< ::septentrio_gnss_driver::ReceiverTime const> ReceiverTimeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.block_header == rhs.block_header &&
    lhs.utc_year == rhs.utc_year &&
    lhs.utc_month == rhs.utc_month &&
    lhs.utc_day == rhs.utc_day &&
    lhs.utc_hour == rhs.utc_hour &&
    lhs.utc_min == rhs.utc_min &&
    lhs.utc_second == rhs.utc_second &&
    lhs.delta_ls == rhs.delta_ls &&
    lhs.sync_level == rhs.sync_level;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace septentrio_gnss_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4e8efd4564fa50f687df91c6000b6c23";
  }

  static const char* value(const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4e8efd4564fa50f6ULL;
  static const uint64_t static_value2 = 0x87df91c6000b6c23ULL;
};

template<class ContainerAllocator>
struct DataType< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "septentrio_gnss_driver/ReceiverTime";
  }

  static const char* value(const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ReceiverTime block\n"
"# ROS message header\n"
"std_msgs/Header header\n"
"\n"
"# SBF block header including time header\n"
"BlockHeader  block_header\n"
"\n"
"int8  utc_year    # year\n"
"int8  utc_month   # month\n"
"int8  utc_day     # day\n"
"int8  utc_hour    # hour\n"
"int8  utc_min     # minute\n"
"int8  utc_second # s\n"
"int8  delta_ls   # s\n"
"uint8 sync_level\n"
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

  static const char* value(const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.block_header);
      stream.next(m.utc_year);
      stream.next(m.utc_month);
      stream.next(m.utc_day);
      stream.next(m.utc_hour);
      stream.next(m.utc_min);
      stream.next(m.utc_second);
      stream.next(m.delta_ls);
      stream.next(m.sync_level);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReceiverTime_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::septentrio_gnss_driver::ReceiverTime_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "block_header: ";
    s << std::endl;
    Printer< ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.block_header);
    s << indent << "utc_year: ";
    Printer<int8_t>::stream(s, indent + "  ", v.utc_year);
    s << indent << "utc_month: ";
    Printer<int8_t>::stream(s, indent + "  ", v.utc_month);
    s << indent << "utc_day: ";
    Printer<int8_t>::stream(s, indent + "  ", v.utc_day);
    s << indent << "utc_hour: ";
    Printer<int8_t>::stream(s, indent + "  ", v.utc_hour);
    s << indent << "utc_min: ";
    Printer<int8_t>::stream(s, indent + "  ", v.utc_min);
    s << indent << "utc_second: ";
    Printer<int8_t>::stream(s, indent + "  ", v.utc_second);
    s << indent << "delta_ls: ";
    Printer<int8_t>::stream(s, indent + "  ", v.delta_ls);
    s << indent << "sync_level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sync_level);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEPTENTRIO_GNSS_DRIVER_MESSAGE_RECEIVERTIME_H
