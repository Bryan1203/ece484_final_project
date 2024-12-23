// Generated by gencpp from file depthai_ros_msgs/TrackedFeatures.msg
// DO NOT EDIT!


#ifndef DEPTHAI_ROS_MSGS_MESSAGE_TRACKEDFEATURES_H
#define DEPTHAI_ROS_MSGS_MESSAGE_TRACKEDFEATURES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <depthai_ros_msgs/TrackedFeature.h>

namespace depthai_ros_msgs
{
template <class ContainerAllocator>
struct TrackedFeatures_
{
  typedef TrackedFeatures_<ContainerAllocator> Type;

  TrackedFeatures_()
    : header()
    , features()  {
    }
  TrackedFeatures_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , features(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >> _features_type;
  _features_type features;





  typedef boost::shared_ptr< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedFeatures_

typedef ::depthai_ros_msgs::TrackedFeatures_<std::allocator<void> > TrackedFeatures;

typedef boost::shared_ptr< ::depthai_ros_msgs::TrackedFeatures > TrackedFeaturesPtr;
typedef boost::shared_ptr< ::depthai_ros_msgs::TrackedFeatures const> TrackedFeaturesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator1> & lhs, const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.features == rhs.features;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator1> & lhs, const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace depthai_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b205be15f3779117f010ff7ec03c8749";
  }

  static const char* value(const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb205be15f3779117ULL;
  static const uint64_t static_value2 = 0xf010ff7ec03c8749ULL;
};

template<class ContainerAllocator>
struct DataType< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "depthai_ros_msgs/TrackedFeatures";
  }

  static const char* value(const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"depthai_ros_msgs/TrackedFeature[] features\n"
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
"MSG: depthai_ros_msgs/TrackedFeature\n"
"std_msgs/Header header\n"
"\n"
"geometry_msgs/Point position\n"
"uint32 id\n"
"\n"
"uint32 age\n"
"\n"
"float32 harris_score\n"
"\n"
"float32 tracking_error\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.features);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedFeatures_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::depthai_ros_msgs::TrackedFeatures_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "features[]" << std::endl;
    for (size_t i = 0; i < v.features.size(); ++i)
    {
      s << indent << "  features[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >::stream(s, indent + "    ", v.features[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEPTHAI_ROS_MSGS_MESSAGE_TRACKEDFEATURES_H
