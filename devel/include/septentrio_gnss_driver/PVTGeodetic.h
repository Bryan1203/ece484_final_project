// Generated by gencpp from file septentrio_gnss_driver/PVTGeodetic.msg
// DO NOT EDIT!


#ifndef SEPTENTRIO_GNSS_DRIVER_MESSAGE_PVTGEODETIC_H
#define SEPTENTRIO_GNSS_DRIVER_MESSAGE_PVTGEODETIC_H


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
struct PVTGeodetic_
{
  typedef PVTGeodetic_<ContainerAllocator> Type;

  PVTGeodetic_()
    : header()
    , block_header()
    , mode(0)
    , error(0)
    , latitude(0.0)
    , longitude(0.0)
    , height(0.0)
    , undulation(0.0)
    , vn(0.0)
    , ve(0.0)
    , vu(0.0)
    , cog(0.0)
    , rx_clk_bias(0.0)
    , rx_clk_drift(0.0)
    , time_system(0)
    , datum(0)
    , nr_sv(0)
    , wa_corr_info(0)
    , reference_id(0)
    , mean_corr_age(0)
    , signal_info(0)
    , alert_flag(0)
    , nr_bases(0)
    , ppp_info(0)
    , latency(0)
    , h_accuracy(0)
    , v_accuracy(0)
    , misc(0)  {
    }
  PVTGeodetic_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , block_header(_alloc)
    , mode(0)
    , error(0)
    , latitude(0.0)
    , longitude(0.0)
    , height(0.0)
    , undulation(0.0)
    , vn(0.0)
    , ve(0.0)
    , vu(0.0)
    , cog(0.0)
    , rx_clk_bias(0.0)
    , rx_clk_drift(0.0)
    , time_system(0)
    , datum(0)
    , nr_sv(0)
    , wa_corr_info(0)
    , reference_id(0)
    , mean_corr_age(0)
    , signal_info(0)
    , alert_flag(0)
    , nr_bases(0)
    , ppp_info(0)
    , latency(0)
    , h_accuracy(0)
    , v_accuracy(0)
    , misc(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator>  _block_header_type;
  _block_header_type block_header;

   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef uint8_t _error_type;
  _error_type error;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _height_type;
  _height_type height;

   typedef float _undulation_type;
  _undulation_type undulation;

   typedef float _vn_type;
  _vn_type vn;

   typedef float _ve_type;
  _ve_type ve;

   typedef float _vu_type;
  _vu_type vu;

   typedef float _cog_type;
  _cog_type cog;

   typedef double _rx_clk_bias_type;
  _rx_clk_bias_type rx_clk_bias;

   typedef float _rx_clk_drift_type;
  _rx_clk_drift_type rx_clk_drift;

   typedef uint8_t _time_system_type;
  _time_system_type time_system;

   typedef uint8_t _datum_type;
  _datum_type datum;

   typedef uint8_t _nr_sv_type;
  _nr_sv_type nr_sv;

   typedef uint8_t _wa_corr_info_type;
  _wa_corr_info_type wa_corr_info;

   typedef uint16_t _reference_id_type;
  _reference_id_type reference_id;

   typedef uint16_t _mean_corr_age_type;
  _mean_corr_age_type mean_corr_age;

   typedef uint32_t _signal_info_type;
  _signal_info_type signal_info;

   typedef uint8_t _alert_flag_type;
  _alert_flag_type alert_flag;

   typedef uint8_t _nr_bases_type;
  _nr_bases_type nr_bases;

   typedef uint16_t _ppp_info_type;
  _ppp_info_type ppp_info;

   typedef uint16_t _latency_type;
  _latency_type latency;

   typedef uint16_t _h_accuracy_type;
  _h_accuracy_type h_accuracy;

   typedef uint16_t _v_accuracy_type;
  _v_accuracy_type v_accuracy;

   typedef uint8_t _misc_type;
  _misc_type misc;





  typedef boost::shared_ptr< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> const> ConstPtr;

}; // struct PVTGeodetic_

typedef ::septentrio_gnss_driver::PVTGeodetic_<std::allocator<void> > PVTGeodetic;

typedef boost::shared_ptr< ::septentrio_gnss_driver::PVTGeodetic > PVTGeodeticPtr;
typedef boost::shared_ptr< ::septentrio_gnss_driver::PVTGeodetic const> PVTGeodeticConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.block_header == rhs.block_header &&
    lhs.mode == rhs.mode &&
    lhs.error == rhs.error &&
    lhs.latitude == rhs.latitude &&
    lhs.longitude == rhs.longitude &&
    lhs.height == rhs.height &&
    lhs.undulation == rhs.undulation &&
    lhs.vn == rhs.vn &&
    lhs.ve == rhs.ve &&
    lhs.vu == rhs.vu &&
    lhs.cog == rhs.cog &&
    lhs.rx_clk_bias == rhs.rx_clk_bias &&
    lhs.rx_clk_drift == rhs.rx_clk_drift &&
    lhs.time_system == rhs.time_system &&
    lhs.datum == rhs.datum &&
    lhs.nr_sv == rhs.nr_sv &&
    lhs.wa_corr_info == rhs.wa_corr_info &&
    lhs.reference_id == rhs.reference_id &&
    lhs.mean_corr_age == rhs.mean_corr_age &&
    lhs.signal_info == rhs.signal_info &&
    lhs.alert_flag == rhs.alert_flag &&
    lhs.nr_bases == rhs.nr_bases &&
    lhs.ppp_info == rhs.ppp_info &&
    lhs.latency == rhs.latency &&
    lhs.h_accuracy == rhs.h_accuracy &&
    lhs.v_accuracy == rhs.v_accuracy &&
    lhs.misc == rhs.misc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace septentrio_gnss_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d3911a0efd862e13c076ba7d322cd3e";
  }

  static const char* value(const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d3911a0efd862e1ULL;
  static const uint64_t static_value2 = 0x3c076ba7d322cd3eULL;
};

template<class ContainerAllocator>
struct DataType< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >
{
  static const char* value()
  {
    return "septentrio_gnss_driver/PVTGeodetic";
  }

  static const char* value(const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# PVTGeodetic block\n"
"# ROS message header\n"
"std_msgs/Header header\n"
"\n"
"# SBF block header including time header\n"
"BlockHeader  block_header   \n"
"\n"
"uint8        mode\n"
"uint8        error        \n"
"float64      latitude      # rad    \n"
"float64      longitude     # rad\n"
"float64      height        # m (ellipsoidal)\n"
"float32      undulation    # m\n"
"float32      vn            # m/s\n"
"float32      ve            # m/s\n"
"float32      vu            # m/s\n"
"float32      cog           # deg\n"
"float64      rx_clk_bias   # ms\n"
"float32      rx_clk_drift  # ppm\n"
"uint8        time_system \n"
"uint8        datum\n"
"uint8        nr_sv \n"
"uint8        wa_corr_info\n"
"uint16       reference_id\n"
"uint16       mean_corr_age # 0.01s\n"
"uint32       signal_info\n"
"uint8        alert_flag\n"
"uint8        nr_bases\n"
"uint16       ppp_info      # s\n"
"uint16       latency       # 0.0001 s\n"
"uint16       h_accuracy    # 0.01 m\n"
"uint16       v_accuracy    # 0.01 m\n"
"uint8        misc\n"
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

  static const char* value(const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.block_header);
      stream.next(m.mode);
      stream.next(m.error);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.height);
      stream.next(m.undulation);
      stream.next(m.vn);
      stream.next(m.ve);
      stream.next(m.vu);
      stream.next(m.cog);
      stream.next(m.rx_clk_bias);
      stream.next(m.rx_clk_drift);
      stream.next(m.time_system);
      stream.next(m.datum);
      stream.next(m.nr_sv);
      stream.next(m.wa_corr_info);
      stream.next(m.reference_id);
      stream.next(m.mean_corr_age);
      stream.next(m.signal_info);
      stream.next(m.alert_flag);
      stream.next(m.nr_bases);
      stream.next(m.ppp_info);
      stream.next(m.latency);
      stream.next(m.h_accuracy);
      stream.next(m.v_accuracy);
      stream.next(m.misc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PVTGeodetic_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::septentrio_gnss_driver::PVTGeodetic_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "block_header: ";
    s << std::endl;
    Printer< ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.block_header);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "undulation: ";
    Printer<float>::stream(s, indent + "  ", v.undulation);
    s << indent << "vn: ";
    Printer<float>::stream(s, indent + "  ", v.vn);
    s << indent << "ve: ";
    Printer<float>::stream(s, indent + "  ", v.ve);
    s << indent << "vu: ";
    Printer<float>::stream(s, indent + "  ", v.vu);
    s << indent << "cog: ";
    Printer<float>::stream(s, indent + "  ", v.cog);
    s << indent << "rx_clk_bias: ";
    Printer<double>::stream(s, indent + "  ", v.rx_clk_bias);
    s << indent << "rx_clk_drift: ";
    Printer<float>::stream(s, indent + "  ", v.rx_clk_drift);
    s << indent << "time_system: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.time_system);
    s << indent << "datum: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.datum);
    s << indent << "nr_sv: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nr_sv);
    s << indent << "wa_corr_info: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wa_corr_info);
    s << indent << "reference_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.reference_id);
    s << indent << "mean_corr_age: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mean_corr_age);
    s << indent << "signal_info: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.signal_info);
    s << indent << "alert_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.alert_flag);
    s << indent << "nr_bases: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nr_bases);
    s << indent << "ppp_info: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ppp_info);
    s << indent << "latency: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.latency);
    s << indent << "h_accuracy: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.h_accuracy);
    s << indent << "v_accuracy: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.v_accuracy);
    s << indent << "misc: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.misc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEPTENTRIO_GNSS_DRIVER_MESSAGE_PVTGEODETIC_H