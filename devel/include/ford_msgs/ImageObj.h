// Generated by gencpp from file ford_msgs/ImageObj.msg
// DO NOT EDIT!


#ifndef FORD_MSGS_MESSAGE_IMAGEOBJ_H
#define FORD_MSGS_MESSAGE_IMAGEOBJ_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ford_msgs/ImageRect.h>

namespace ford_msgs
{
template <class ContainerAllocator>
struct ImageObj_
{
  typedef ImageObj_<ContainerAllocator> Type;

  ImageObj_()
    : header()
    , type()
    , obj()  {
    }
  ImageObj_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(_alloc)
    , obj(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector< ::ford_msgs::ImageRect_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ford_msgs::ImageRect_<ContainerAllocator> >::other >  _obj_type;
  _obj_type obj;





  typedef boost::shared_ptr< ::ford_msgs::ImageObj_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ford_msgs::ImageObj_<ContainerAllocator> const> ConstPtr;

}; // struct ImageObj_

typedef ::ford_msgs::ImageObj_<std::allocator<void> > ImageObj;

typedef boost::shared_ptr< ::ford_msgs::ImageObj > ImageObjPtr;
typedef boost::shared_ptr< ::ford_msgs::ImageObj const> ImageObjConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ford_msgs::ImageObj_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ford_msgs::ImageObj_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ford_msgs::ImageObj_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ford_msgs::ImageObj_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ford_msgs::ImageObj_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ford_msgs::ImageObj_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ford_msgs::ImageObj_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ford_msgs::ImageObj_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ford_msgs::ImageObj_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c88cbd43b13207de9206c423074bc310";
  }

  static const char* value(const ::ford_msgs::ImageObj_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc88cbd43b13207deULL;
  static const uint64_t static_value2 = 0x9206c423074bc310ULL;
};

template<class ContainerAllocator>
struct DataType< ::ford_msgs::ImageObj_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ford_msgs/ImageObj";
  }

  static const char* value(const ::ford_msgs::ImageObj_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ford_msgs::ImageObj_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string type\n\
ImageRect[] obj\n\
# XXX Should this message have 'score' ?\n\
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
MSG: ford_msgs/ImageRect\n\
int32 x\n\
int32 y\n\
int32 height\n\
int32 width\n\
float32 score\n\
string class_string\n\
int32 class_id\n\
std_msgs/ColorRGBA average\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::ford_msgs::ImageObj_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ford_msgs::ImageObj_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.obj);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageObj_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ford_msgs::ImageObj_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ford_msgs::ImageObj_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "obj[]" << std::endl;
    for (size_t i = 0; i < v.obj.size(); ++i)
    {
      s << indent << "  obj[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ford_msgs::ImageRect_<ContainerAllocator> >::stream(s, indent + "    ", v.obj[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FORD_MSGS_MESSAGE_IMAGEOBJ_H
