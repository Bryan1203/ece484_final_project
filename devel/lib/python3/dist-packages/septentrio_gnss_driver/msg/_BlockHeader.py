# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from septentrio_gnss_driver/BlockHeader.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class BlockHeader(genpy.Message):
  _md5sum = "518ce7a1f9cbde747cc0c5b017e06f70"
  _type = "septentrio_gnss_driver/BlockHeader"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Blockheader including time header for all ROS messages that publish SBF blocks

uint8     sync_1
uint8     sync_2
uint16    crc
uint16    id
uint8     revision
uint16    length

uint32    tow # ms since week start
uint16    wnc # weeks since Jan 06, 1980 at 00:00:00 UTC     """
  __slots__ = ['sync_1','sync_2','crc','id','revision','length','tow','wnc']
  _slot_types = ['uint8','uint8','uint16','uint16','uint8','uint16','uint32','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sync_1,sync_2,crc,id,revision,length,tow,wnc

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BlockHeader, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.sync_1 is None:
        self.sync_1 = 0
      if self.sync_2 is None:
        self.sync_2 = 0
      if self.crc is None:
        self.crc = 0
      if self.id is None:
        self.id = 0
      if self.revision is None:
        self.revision = 0
      if self.length is None:
        self.length = 0
      if self.tow is None:
        self.tow = 0
      if self.wnc is None:
        self.wnc = 0
    else:
      self.sync_1 = 0
      self.sync_2 = 0
      self.crc = 0
      self.id = 0
      self.revision = 0
      self.length = 0
      self.tow = 0
      self.wnc = 0

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
      buff.write(_get_struct_2B2HBHIH().pack(_x.sync_1, _x.sync_2, _x.crc, _x.id, _x.revision, _x.length, _x.tow, _x.wnc))
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
      end = 0
      _x = self
      start = end
      end += 15
      (_x.sync_1, _x.sync_2, _x.crc, _x.id, _x.revision, _x.length, _x.tow, _x.wnc,) = _get_struct_2B2HBHIH().unpack(str[start:end])
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
      buff.write(_get_struct_2B2HBHIH().pack(_x.sync_1, _x.sync_2, _x.crc, _x.id, _x.revision, _x.length, _x.tow, _x.wnc))
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
      end = 0
      _x = self
      start = end
      end += 15
      (_x.sync_1, _x.sync_2, _x.crc, _x.id, _x.revision, _x.length, _x.tow, _x.wnc,) = _get_struct_2B2HBHIH().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B2HBHIH = None
def _get_struct_2B2HBHIH():
    global _struct_2B2HBHIH
    if _struct_2B2HBHIH is None:
        _struct_2B2HBHIH = struct.Struct("<2B2HBHIH")
    return _struct_2B2HBHIH
