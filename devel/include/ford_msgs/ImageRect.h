// Generated by gencpp from file ford_msgs/ImageRect.msg
// DO NOT EDIT!


#ifndef FORD_MSGS_MESSAGE_IMAGERECT_H
#define FORD_MSGS_MESSAGE_IMAGERECT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>

namespace ford_msgs
{
template <class ContainerAllocator>
struct ImageRect_
{
  typedef ImageRect_<ContainerAllocator> Type;

  ImageRect_()
    : x(0)
    , y(0)
    , height(0)
    , width(0)
    , score(0.0)
    , class_string()
    , class_id(0)
    , average()  {
    }
  ImageRect_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , height(0)
    , width(0)
    , score(0.0)
    , class_string(_alloc)
    , class_id(0)
    , average(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef int32_t _height_type;
  _height_type height;

   typedef int32_t _width_type;
  _width_type width;

   typedef float _score_type;
  _score_type score;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _class_string_type;
  _class_string_type class_string;

   typedef int32_t _class_id_type;
  _class_id_type class_id;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _average_type;
  _average_type average;





  typedef boost::shared_ptr< ::ford_msgs::ImageRect_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ford_msgs::ImageRect_<ContainerAllocator> const> ConstPtr;

}; // struct ImageRect_

typedef ::ford_msgs::ImageRect_<std::allocator<void> > ImageRect;

typedef boost::shared_ptr< ::ford_msgs::ImageRect > ImageRectPtr;
typedef boost::shared_ptr< ::ford_msgs::ImageRect const> ImageRectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ford_msgs::ImageRect_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ford_msgs::ImageRect_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ford_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'ford_msgs': ['/home/wangqiang/catkin_ws/src/cadrl_ros_gazebo_demo/ford_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ford_msgs::ImageRect_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ford_msgs::ImageRect_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ford_msgs::ImageRect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ford_msgs::ImageRect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ford_msgs::ImageRect_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ford_msgs::ImageRect_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ford_msgs::ImageRect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7929620497f7b77b0596a67f73028561";
  }

  static const char* value(const ::ford_msgs::ImageRect_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7929620497f7b77bULL;
  static const uint64_t static_value2 = 0x0596a67f73028561ULL;
};

template<class ContainerAllocator>
struct DataType< ::ford_msgs::ImageRect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ford_msgs/ImageRect";
  }

  static const char* value(const ::ford_msgs::ImageRect_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ford_msgs::ImageRect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 x\n\
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

  static const char* value(const ::ford_msgs::ImageRect_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ford_msgs::ImageRect_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.score);
      stream.next(m.class_string);
      stream.next(m.class_id);
      stream.next(m.average);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageRect_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ford_msgs::ImageRect_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ford_msgs::ImageRect_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "score: ";
    Printer<float>::stream(s, indent + "  ", v.score);
    s << indent << "class_string: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.class_string);
    s << indent << "class_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.class_id);
    s << indent << "average: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.average);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FORD_MSGS_MESSAGE_IMAGERECT_H