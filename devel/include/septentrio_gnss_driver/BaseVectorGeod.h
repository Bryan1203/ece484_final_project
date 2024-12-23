// Generated by gencpp from file septentrio_gnss_driver/BaseVectorGeod.msg
// DO NOT EDIT!


#ifndef SEPTENTRIO_GNSS_DRIVER_MESSAGE_BASEVECTORGEOD_H
#define SEPTENTRIO_GNSS_DRIVER_MESSAGE_BASEVECTORGEOD_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <septentrio_gnss_driver/BlockHeader.h>
#include <septentrio_gnss_driver/VectorInfoGeod.h>

namespace septentrio_gnss_driver
{
template <class ContainerAllocator>
struct BaseVectorGeod_
{
  typedef BaseVectorGeod_<ContainerAllocator> Type;

  BaseVectorGeod_()
    : header()
    , block_header()
    , n(0)
    , sb_length(0)
    , vector_info_geod()  {
    }
  BaseVectorGeod_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , block_header(_alloc)
    , n(0)
    , sb_length(0)
    , vector_info_geod(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator>  _block_header_type;
  _block_header_type block_header;

   typedef uint8_t _n_type;
  _n_type n;

   typedef uint8_t _sb_length_type;
  _sb_length_type sb_length;

   typedef std::vector< ::septentrio_gnss_driver::VectorInfoGeod_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::septentrio_gnss_driver::VectorInfoGeod_<ContainerAllocator> >> _vector_info_geod_type;
  _vector_info_geod_type vector_info_geod;





  typedef boost::shared_ptr< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> const> ConstPtr;

}; // struct BaseVectorGeod_

typedef ::septentrio_gnss_driver::BaseVectorGeod_<std::allocator<void> > BaseVectorGeod;

typedef boost::shared_ptr< ::septentrio_gnss_driver::BaseVectorGeod > BaseVectorGeodPtr;
typedef boost::shared_ptr< ::septentrio_gnss_driver::BaseVectorGeod const> BaseVectorGeodConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.block_header == rhs.block_header &&
    lhs.n == rhs.n &&
    lhs.sb_length == rhs.sb_length &&
    lhs.vector_info_geod == rhs.vector_info_geod;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace septentrio_gnss_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1349428be748ae82d66f928c5daf71dd";
  }

  static const char* value(const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1349428be748ae82ULL;
  static const uint64_t static_value2 = 0xd66f928c5daf71ddULL;
};

template<class ContainerAllocator>
struct DataType< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >
{
  static const char* value()
  {
    return "septentrio_gnss_driver/BaseVectorGeod";
  }

  static const char* value(const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# BaseVectorGeod block \n"
"# Block_Number 4028\n"
"\n"
"std_msgs/Header header\n"
"\n"
"# SBF block header including time header\n"
"BlockHeader block_header\n"
"\n"
"uint8   n\n"
"uint8   sb_length\n"
"\n"
"VectorInfoGeod[] vector_info_geod \n"
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
"================================================================================\n"
"MSG: septentrio_gnss_driver/VectorInfoGeod\n"
"# VectorInfoGeod block\n"
"   \n"
"uint8   nr_sv\n"
"uint8   error\n"
"uint8   mode\n"
"uint8   misc\n"
"float64 delta_east   # m\n"
"float64 delta_north  # m\n"
"float64 delta_up     # m\n"
"float32 delta_ve     # m\n"
"float32 delta_vn     # m\n"
"float32 delta_vu     # m\n"
"uint16  azimuth      # 0.01 deg\n"
"int16   elevation    # 0.01 deg\n"
"uint16  reference_id\n"
"uint16  corr_age     # 0.01 s\n"
"uint32  signal_info\n"
;
  }

  static const char* value(const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.block_header);
      stream.next(m.n);
      stream.next(m.sb_length);
      stream.next(m.vector_info_geod);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaseVectorGeod_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::septentrio_gnss_driver::BaseVectorGeod_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "block_header: ";
    s << std::endl;
    Printer< ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.block_header);
    s << indent << "n: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.n);
    s << indent << "sb_length: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sb_length);
    s << indent << "vector_info_geod[]" << std::endl;
    for (size_t i = 0; i < v.vector_info_geod.size(); ++i)
    {
      s << indent << "  vector_info_geod[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::septentrio_gnss_driver::VectorInfoGeod_<ContainerAllocator> >::stream(s, indent + "    ", v.vector_info_geod[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEPTENTRIO_GNSS_DRIVER_MESSAGE_BASEVECTORGEOD_H
