// Generated by gencpp from file ford_msgs/GetSafeActions.msg
// DO NOT EDIT!


#ifndef FORD_MSGS_MESSAGE_GETSAFEACTIONS_H
#define FORD_MSGS_MESSAGE_GETSAFEACTIONS_H

#include <ros/service_traits.h>


#include <ford_msgs/GetSafeActionsRequest.h>
#include <ford_msgs/GetSafeActionsResponse.h>


namespace ford_msgs
{

struct GetSafeActions
{

typedef GetSafeActionsRequest Request;
typedef GetSafeActionsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetSafeActions
} // namespace ford_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ford_msgs::GetSafeActions > {
  static const char* value()
  {
    return "2fe3126bd5b2d56edd5005220333d4fd";
  }

  static const char* value(const ::ford_msgs::GetSafeActions&) { return value(); }
};

template<>
struct DataType< ::ford_msgs::GetSafeActions > {
  static const char* value()
  {
    return "ford_msgs/GetSafeActions";
  }

  static const char* value(const ::ford_msgs::GetSafeActions&) { return value(); }
};


// service_traits::MD5Sum< ::ford_msgs::GetSafeActionsRequest> should match 
// service_traits::MD5Sum< ::ford_msgs::GetSafeActions > 
template<>
struct MD5Sum< ::ford_msgs::GetSafeActionsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ford_msgs::GetSafeActions >::value();
  }
  static const char* value(const ::ford_msgs::GetSafeActionsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ford_msgs::GetSafeActionsRequest> should match 
// service_traits::DataType< ::ford_msgs::GetSafeActions > 
template<>
struct DataType< ::ford_msgs::GetSafeActionsRequest>
{
  static const char* value()
  {
    return DataType< ::ford_msgs::GetSafeActions >::value();
  }
  static const char* value(const ::ford_msgs::GetSafeActionsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ford_msgs::GetSafeActionsResponse> should match 
// service_traits::MD5Sum< ::ford_msgs::GetSafeActions > 
template<>
struct MD5Sum< ::ford_msgs::GetSafeActionsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ford_msgs::GetSafeActions >::value();
  }
  static const char* value(const ::ford_msgs::GetSafeActionsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ford_msgs::GetSafeActionsResponse> should match 
// service_traits::DataType< ::ford_msgs::GetSafeActions > 
template<>
struct DataType< ::ford_msgs::GetSafeActionsResponse>
{
  static const char* value()
  {
    return DataType< ::ford_msgs::GetSafeActions >::value();
  }
  static const char* value(const ::ford_msgs::GetSafeActionsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // FORD_MSGS_MESSAGE_GETSAFEACTIONS_H
