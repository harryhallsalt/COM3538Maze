// Generated by gencpp from file miro2_msg/sleep.msg
// DO NOT EDIT!


#ifndef MIRO2_MSG_MESSAGE_SLEEP_H
#define MIRO2_MSG_MESSAGE_SLEEP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace miro2_msg
{
template <class ContainerAllocator>
struct sleep_
{
  typedef sleep_<ContainerAllocator> Type;

  sleep_()
    : wakefulness(0.0)
    , pressure(0.0)  {
    }
  sleep_(const ContainerAllocator& _alloc)
    : wakefulness(0.0)
    , pressure(0.0)  {
  (void)_alloc;
    }



   typedef float _wakefulness_type;
  _wakefulness_type wakefulness;

   typedef float _pressure_type;
  _pressure_type pressure;





  typedef boost::shared_ptr< ::miro2_msg::sleep_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::miro2_msg::sleep_<ContainerAllocator> const> ConstPtr;

}; // struct sleep_

typedef ::miro2_msg::sleep_<std::allocator<void> > sleep;

typedef boost::shared_ptr< ::miro2_msg::sleep > sleepPtr;
typedef boost::shared_ptr< ::miro2_msg::sleep const> sleepConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::miro2_msg::sleep_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::miro2_msg::sleep_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::miro2_msg::sleep_<ContainerAllocator1> & lhs, const ::miro2_msg::sleep_<ContainerAllocator2> & rhs)
{
  return lhs.wakefulness == rhs.wakefulness &&
    lhs.pressure == rhs.pressure;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::miro2_msg::sleep_<ContainerAllocator1> & lhs, const ::miro2_msg::sleep_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace miro2_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::miro2_msg::sleep_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::miro2_msg::sleep_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro2_msg::sleep_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro2_msg::sleep_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro2_msg::sleep_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro2_msg::sleep_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::miro2_msg::sleep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9ae301b8349f95e1749450e5431eef09";
  }

  static const char* value(const ::miro2_msg::sleep_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9ae301b8349f95e1ULL;
  static const uint64_t static_value2 = 0x749450e5431eef09ULL;
};

template<class ContainerAllocator>
struct DataType< ::miro2_msg::sleep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "miro2_msg/sleep";
  }

  static const char* value(const ::miro2_msg::sleep_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::miro2_msg::sleep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#	@section COPYRIGHT\n"
"#	Copyright (C) 2020 Consequential Robotics Ltd\n"
"#	\n"
"#	@section AUTHOR\n"
"#	Consequential Robotics http://consequentialrobotics.com\n"
"#	\n"
"#	@section LICENSE\n"
"#	For a full copy of the license agreement, and a complete\n"
"#	definition of \"The Software\", see LICENSE in the MDK root\n"
"#	directory.\n"
"#	\n"
"#	Subject to the terms of this Agreement, Consequential\n"
"#	Robotics grants to you a limited, non-exclusive, non-\n"
"#	transferable license, without right to sub-license, to use\n"
"#	\"The Software\" in accordance with this Agreement and any\n"
"#	other written agreement with Consequential Robotics.\n"
"#	Consequential Robotics does not transfer the title of \"The\n"
"#	Software\" to you; the license granted to you is not a sale.\n"
"#	This agreement is a binding legal agreement between\n"
"#	Consequential Robotics and the purchasers or users of \"The\n"
"#	Software\".\n"
"#	\n"
"#	THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY\n"
"#	KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE\n"
"#	WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR\n"
"#	PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS\n"
"#	OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR\n"
"#	OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR\n"
"#	OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE\n"
"#	SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n"
"#	\n"
"#\n"
"#	The \"sleep\" state is two-dimensional, encoding \"wakefulness\"\n"
"#	(0.0 to 1.0, what it sounds like) and \"pressure\" (0.0 to 1.0,\n"
"#	tendency to move towards reduced wakefulness). The two states\n"
"#	evolve together to implement a relaxation oscillator.\n"
"\n"
"float32 wakefulness\n"
"float32 pressure\n"
"\n"
;
  }

  static const char* value(const ::miro2_msg::sleep_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::miro2_msg::sleep_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wakefulness);
      stream.next(m.pressure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sleep_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::miro2_msg::sleep_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::miro2_msg::sleep_<ContainerAllocator>& v)
  {
    s << indent << "wakefulness: ";
    Printer<float>::stream(s, indent + "  ", v.wakefulness);
    s << indent << "pressure: ";
    Printer<float>::stream(s, indent + "  ", v.pressure);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIRO2_MSG_MESSAGE_SLEEP_H
