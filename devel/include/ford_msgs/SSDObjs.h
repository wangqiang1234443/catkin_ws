// Generated by gencpp from file ford_msgs/SSDObjs.msg
// DO NOT EDIT!


#ifndef FORD_MSGS_MESSAGE_SSDOBJS_H
#define FORD_MSGS_MESSAGE_SSDOBJS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/ColorRGBA.h>
#include <geometry_msgs/Point.h>

namespace ford_msgs
{
template <class ContainerAllocator>
struct SSDObjs_
{
  typedef SSDObjs_<ContainerAllocator> Type;

  SSDObjs_()
    : header()
    , avg_colors()
    , clusters()
    , pincer_obs()  {
    }
  SSDObjs_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , avg_colors(_alloc)
    , clusters(_alloc)
    , pincer_obs(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _avg_colors_type;
  _avg_colors_type avg_colors;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _clusters_type;
  _clusters_type clusters;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _pincer_obs_type;
  _pincer_obs_type pincer_obs;





  typedef boost::shared_ptr< ::ford_msgs::SSDObjs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ford_msgs::SSDObjs_<ContainerAllocator> const> ConstPtr;

}; // struct SSDObjs_

typedef ::ford_msgs::SSDObjs_<std::allocator<void> > SSDObjs;

typedef boost::shared_ptr< ::ford_msgs::SSDObjs > SSDObjsPtr;
typedef boost::shared_ptr< ::ford_msgs::SSDObjs const> SSDObjsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ford_msgs::SSDObjs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ford_msgs::SSDObjs_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ford_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'ford_msgs': ['/home/wangqiang/catkin_ws/src/cadrl_ros_gazebo_demo/ford_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ford_msgs::SSDObjs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ford_msgs::SSDObjs_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ford_msgs::SSDObjs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ford_msgs::SSDObjs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ford_msgs::SSDObjs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ford_msgs::SSDObjs_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ford_msgs::SSDObjs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "67a4b6ed1fabd91000a0077cb78e4704";
  }

  static const char* value(const ::ford_msgs::SSDObjs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x67a4b6ed1fabd910ULL;
  static const uint64_t static_value2 = 0x00a0077cb78e4704ULL;
};

template<class ContainerAllocator>
struct DataType< ::ford_msgs::SSDObjs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ford_msgs/SSDObjs";
  }

  static const char* value(const ::ford_msgs::SSDObjs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ford_msgs::SSDObjs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
std_msgs/ColorRGBA[] avg_colors\n\
geometry_msgs/Point[] clusters\n\
uint8[] pincer_obs\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::ford_msgs::SSDObjs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ford_msgs::SSDObjs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.avg_colors);
      stream.next(m.clusters);
      stream.next(m.pincer_obs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SSDObjs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ford_msgs::SSDObjs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ford_msgs::SSDObjs_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "avg_colors[]" << std::endl;
    for (size_t i = 0; i < v.avg_colors.size(); ++i)
    {
      s << indent << "  avg_colors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.avg_colors[i]);
    }
    s << indent << "clusters[]" << std::endl;
    for (size_t i = 0; i < v.clusters.size(); ++i)
    {
      s << indent << "  clusters[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.clusters[i]);
    }
    s << indent << "pincer_obs[]" << std::endl;
    for (size_t i = 0; i < v.pincer_obs.size(); ++i)
    {
      s << indent << "  pincer_obs[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.pincer_obs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FORD_MSGS_MESSAGE_SSDOBJS_H