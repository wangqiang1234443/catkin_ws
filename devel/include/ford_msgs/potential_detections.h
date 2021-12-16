// Generated by gencpp from file ford_msgs/potential_detections.msg
// DO NOT EDIT!


#ifndef FORD_MSGS_MESSAGE_POTENTIAL_DETECTIONS_H
#define FORD_MSGS_MESSAGE_POTENTIAL_DETECTIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ford_msgs
{
template <class ContainerAllocator>
struct potential_detections_
{
  typedef potential_detections_<ContainerAllocator> Type;

  potential_detections_()
    : header()
    , scores()
    , detections()
    , class_strings()
    , pincer_obs()  {
    }
  potential_detections_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , scores(_alloc)
    , detections(_alloc)
    , class_strings(_alloc)
    , pincer_obs(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _scores_type;
  _scores_type scores;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _detections_type;
  _detections_type detections;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _class_strings_type;
  _class_strings_type class_strings;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _pincer_obs_type;
  _pincer_obs_type pincer_obs;





  typedef boost::shared_ptr< ::ford_msgs::potential_detections_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ford_msgs::potential_detections_<ContainerAllocator> const> ConstPtr;

}; // struct potential_detections_

typedef ::ford_msgs::potential_detections_<std::allocator<void> > potential_detections;

typedef boost::shared_ptr< ::ford_msgs::potential_detections > potential_detectionsPtr;
typedef boost::shared_ptr< ::ford_msgs::potential_detections const> potential_detectionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ford_msgs::potential_detections_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ford_msgs::potential_detections_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ford_msgs::potential_detections_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ford_msgs::potential_detections_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ford_msgs::potential_detections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ford_msgs::potential_detections_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ford_msgs::potential_detections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ford_msgs::potential_detections_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ford_msgs::potential_detections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9ffa88f6b74a8b1030d56ef4a86d508";
  }

  static const char* value(const ::ford_msgs::potential_detections_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9ffa88f6b74a8b1ULL;
  static const uint64_t static_value2 = 0x030d56ef4a86d508ULL;
};

template<class ContainerAllocator>
struct DataType< ::ford_msgs::potential_detections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ford_msgs/potential_detections";
  }

  static const char* value(const ::ford_msgs::potential_detections_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ford_msgs::potential_detections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64[] scores\n\
uint32[] detections\n\
string[] class_strings\n\
uint32[] pincer_obs\n\
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
";
  }

  static const char* value(const ::ford_msgs::potential_detections_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ford_msgs::potential_detections_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.scores);
      stream.next(m.detections);
      stream.next(m.class_strings);
      stream.next(m.pincer_obs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct potential_detections_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ford_msgs::potential_detections_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ford_msgs::potential_detections_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "scores[]" << std::endl;
    for (size_t i = 0; i < v.scores.size(); ++i)
    {
      s << indent << "  scores[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.scores[i]);
    }
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.detections[i]);
    }
    s << indent << "class_strings[]" << std::endl;
    for (size_t i = 0; i < v.class_strings.size(); ++i)
    {
      s << indent << "  class_strings[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.class_strings[i]);
    }
    s << indent << "pincer_obs[]" << std::endl;
    for (size_t i = 0; i < v.pincer_obs.size(); ++i)
    {
      s << indent << "  pincer_obs[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.pincer_obs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FORD_MSGS_MESSAGE_POTENTIAL_DETECTIONS_H
