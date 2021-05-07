// Generated by gencpp from file miro2_msg/voice_state.msg
// DO NOT EDIT!


#ifndef MIRO2_MSG_MESSAGE_VOICE_STATE_H
#define MIRO2_MSG_MESSAGE_VOICE_STATE_H


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
struct voice_state_
{
  typedef voice_state_<ContainerAllocator> Type;

  voice_state_()
    : breathing_phase(0.0)
    , vocalising(false)  {
    }
  voice_state_(const ContainerAllocator& _alloc)
    : breathing_phase(0.0)
    , vocalising(false)  {
  (void)_alloc;
    }



   typedef float _breathing_phase_type;
  _breathing_phase_type breathing_phase;

   typedef uint8_t _vocalising_type;
  _vocalising_type vocalising;





  typedef boost::shared_ptr< ::miro2_msg::voice_state_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::miro2_msg::voice_state_<ContainerAllocator> const> ConstPtr;

}; // struct voice_state_

typedef ::miro2_msg::voice_state_<std::allocator<void> > voice_state;

typedef boost::shared_ptr< ::miro2_msg::voice_state > voice_statePtr;
typedef boost::shared_ptr< ::miro2_msg::voice_state const> voice_stateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::miro2_msg::voice_state_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::miro2_msg::voice_state_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::miro2_msg::voice_state_<ContainerAllocator1> & lhs, const ::miro2_msg::voice_state_<ContainerAllocator2> & rhs)
{
  return lhs.breathing_phase == rhs.breathing_phase &&
    lhs.vocalising == rhs.vocalising;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::miro2_msg::voice_state_<ContainerAllocator1> & lhs, const ::miro2_msg::voice_state_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace miro2_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::miro2_msg::voice_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::miro2_msg::voice_state_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro2_msg::voice_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::miro2_msg::voice_state_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro2_msg::voice_state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::miro2_msg::voice_state_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::miro2_msg::voice_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e821a66f37dcfd027ec1d69a1734ae31";
  }

  static const char* value(const ::miro2_msg::voice_state_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe821a66f37dcfd02ULL;
  static const uint64_t static_value2 = 0x7ec1d69a1734ae31ULL;
};

template<class ContainerAllocator>
struct DataType< ::miro2_msg::voice_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "miro2_msg/voice_state";
  }

  static const char* value(const ::miro2_msg::voice_state_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::miro2_msg::voice_state_<ContainerAllocator> >
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
"\n"
"float32 breathing_phase\n"
"bool vocalising\n"
"\n"
;
  }

  static const char* value(const ::miro2_msg::voice_state_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::miro2_msg::voice_state_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.breathing_phase);
      stream.next(m.vocalising);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct voice_state_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::miro2_msg::voice_state_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::miro2_msg::voice_state_<ContainerAllocator>& v)
  {
    s << indent << "breathing_phase: ";
    Printer<float>::stream(s, indent + "  ", v.breathing_phase);
    s << indent << "vocalising: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vocalising);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIRO2_MSG_MESSAGE_VOICE_STATE_H
