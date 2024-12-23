# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from septentrio_gnss_driver/AttCovEuler.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import septentrio_gnss_driver.msg
import std_msgs.msg

class AttCovEuler(genpy.Message):
  _md5sum = "e0afc6c2dfb1f98f719a573ace215ea7"
  _type = "septentrio_gnss_driver/AttCovEuler"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# AttCovEuler block
# ROS message header
std_msgs/Header header

# SBF block header including time header
BlockHeader  block_header   

uint8        error   
float32      cov_headhead   # deg^2
float32      cov_pitchpitch # deg^2
float32      cov_rollroll   # deg^2 
float32      cov_headpitch  # deg^2
float32      cov_headroll   # deg^2
float32      cov_pitchroll  # deg^2

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: septentrio_gnss_driver/BlockHeader
# Blockheader including time header for all ROS messages that publish SBF blocks

uint8     sync_1
uint8     sync_2
uint16    crc
uint16    id
uint8     revision
uint16    length

uint32    tow # ms since week start
uint16    wnc # weeks since Jan 06, 1980 at 00:00:00 UTC     """
  __slots__ = ['header','block_header','error','cov_headhead','cov_pitchpitch','cov_rollroll','cov_headpitch','cov_headroll','cov_pitchroll']
  _slot_types = ['std_msgs/Header','septentrio_gnss_driver/BlockHeader','uint8','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,block_header,error,cov_headhead,cov_pitchpitch,cov_rollroll,cov_headpitch,cov_headroll,cov_pitchroll

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AttCovEuler, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.block_header is None:
        self.block_header = septentrio_gnss_driver.msg.BlockHeader()
      if self.error is None:
        self.error = 0
      if self.cov_headhead is None:
        self.cov_headhead = 0.
      if self.cov_pitchpitch is None:
        self.cov_pitchpitch = 0.
      if self.cov_rollroll is None:
        self.cov_rollroll = 0.
      if self.cov_headpitch is None:
        self.cov_headpitch = 0.
      if self.cov_headroll is None:
        self.cov_headroll = 0.
      if self.cov_pitchroll is None:
        self.cov_pitchroll = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.block_header = septentrio_gnss_driver.msg.BlockHeader()
      self.error = 0
      self.cov_headhead = 0.
      self.cov_pitchpitch = 0.
      self.cov_rollroll = 0.
      self.cov_headpitch = 0.
      self.cov_headroll = 0.
      self.cov_pitchroll = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2B2HBHIHB6f().pack(_x.block_header.sync_1, _x.block_header.sync_2, _x.block_header.crc, _x.block_header.id, _x.block_header.revision, _x.block_header.length, _x.block_header.tow, _x.block_header.wnc, _x.error, _x.cov_headhead, _x.cov_pitchpitch, _x.cov_rollroll, _x.cov_headpitch, _x.cov_headroll, _x.cov_pitchroll))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.block_header is None:
        self.block_header = septentrio_gnss_driver.msg.BlockHeader()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 40
      (_x.block_header.sync_1, _x.block_header.sync_2, _x.block_header.crc, _x.block_header.id, _x.block_header.revision, _x.block_header.length, _x.block_header.tow, _x.block_header.wnc, _x.error, _x.cov_headhead, _x.cov_pitchpitch, _x.cov_rollroll, _x.cov_headpitch, _x.cov_headroll, _x.cov_pitchroll,) = _get_struct_2B2HBHIHB6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2B2HBHIHB6f().pack(_x.block_header.sync_1, _x.block_header.sync_2, _x.block_header.crc, _x.block_header.id, _x.block_header.revision, _x.block_header.length, _x.block_header.tow, _x.block_header.wnc, _x.error, _x.cov_headhead, _x.cov_pitchpitch, _x.cov_rollroll, _x.cov_headpitch, _x.cov_headroll, _x.cov_pitchroll))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.block_header is None:
        self.block_header = septentrio_gnss_driver.msg.BlockHeader()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 40
      (_x.block_header.sync_1, _x.block_header.sync_2, _x.block_header.crc, _x.block_header.id, _x.block_header.revision, _x.block_header.length, _x.block_header.tow, _x.block_header.wnc, _x.error, _x.cov_headhead, _x.cov_pitchpitch, _x.cov_rollroll, _x.cov_headpitch, _x.cov_headroll, _x.cov_pitchroll,) = _get_struct_2B2HBHIHB6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B2HBHIHB6f = None
def _get_struct_2B2HBHIHB6f():
    global _struct_2B2HBHIHB6f
    if _struct_2B2HBHIHB6f is None:
        _struct_2B2HBHIHB6f = struct.Struct("<2B2HBHIHB6f")
    return _struct_2B2HBHIHB6f
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
