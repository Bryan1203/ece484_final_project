# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from septentrio_gnss_driver/VectorInfoCart.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class VectorInfoCart(genpy.Message):
  _md5sum = "d072946ecd7f4319790a07cf534d27c3"
  _type = "septentrio_gnss_driver/VectorInfoCart"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# VectorInfoCart block
   
uint8   nr_sv
uint8   error
uint8   mode
uint8   misc
float64 delta_x      # m
float64 delta_y      # m
float64 delta_z      # m
float32 delta_vx     # m
float32 delta_vy     # m
float32 delta_vz     # m
uint16  azimuth      # 0.01 deg
int16   elevation    # 0.01 deg
uint16  reference_id
uint16  corr_age     # 0.01 s
uint32  signal_info"""
  __slots__ = ['nr_sv','error','mode','misc','delta_x','delta_y','delta_z','delta_vx','delta_vy','delta_vz','azimuth','elevation','reference_id','corr_age','signal_info']
  _slot_types = ['uint8','uint8','uint8','uint8','float64','float64','float64','float32','float32','float32','uint16','int16','uint16','uint16','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       nr_sv,error,mode,misc,delta_x,delta_y,delta_z,delta_vx,delta_vy,delta_vz,azimuth,elevation,reference_id,corr_age,signal_info

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VectorInfoCart, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.nr_sv is None:
        self.nr_sv = 0
      if self.error is None:
        self.error = 0
      if self.mode is None:
        self.mode = 0
      if self.misc is None:
        self.misc = 0
      if self.delta_x is None:
        self.delta_x = 0.
      if self.delta_y is None:
        self.delta_y = 0.
      if self.delta_z is None:
        self.delta_z = 0.
      if self.delta_vx is None:
        self.delta_vx = 0.
      if self.delta_vy is None:
        self.delta_vy = 0.
      if self.delta_vz is None:
        self.delta_vz = 0.
      if self.azimuth is None:
        self.azimuth = 0
      if self.elevation is None:
        self.elevation = 0
      if self.reference_id is None:
        self.reference_id = 0
      if self.corr_age is None:
        self.corr_age = 0
      if self.signal_info is None:
        self.signal_info = 0
    else:
      self.nr_sv = 0
      self.error = 0
      self.mode = 0
      self.misc = 0
      self.delta_x = 0.
      self.delta_y = 0.
      self.delta_z = 0.
      self.delta_vx = 0.
      self.delta_vy = 0.
      self.delta_vz = 0.
      self.azimuth = 0
      self.elevation = 0
      self.reference_id = 0
      self.corr_age = 0
      self.signal_info = 0

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
      buff.write(_get_struct_4B3d3fHh2HI().pack(_x.nr_sv, _x.error, _x.mode, _x.misc, _x.delta_x, _x.delta_y, _x.delta_z, _x.delta_vx, _x.delta_vy, _x.delta_vz, _x.azimuth, _x.elevation, _x.reference_id, _x.corr_age, _x.signal_info))
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
      end += 52
      (_x.nr_sv, _x.error, _x.mode, _x.misc, _x.delta_x, _x.delta_y, _x.delta_z, _x.delta_vx, _x.delta_vy, _x.delta_vz, _x.azimuth, _x.elevation, _x.reference_id, _x.corr_age, _x.signal_info,) = _get_struct_4B3d3fHh2HI().unpack(str[start:end])
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
      buff.write(_get_struct_4B3d3fHh2HI().pack(_x.nr_sv, _x.error, _x.mode, _x.misc, _x.delta_x, _x.delta_y, _x.delta_z, _x.delta_vx, _x.delta_vy, _x.delta_vz, _x.azimuth, _x.elevation, _x.reference_id, _x.corr_age, _x.signal_info))
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
      end += 52
      (_x.nr_sv, _x.error, _x.mode, _x.misc, _x.delta_x, _x.delta_y, _x.delta_z, _x.delta_vx, _x.delta_vy, _x.delta_vz, _x.azimuth, _x.elevation, _x.reference_id, _x.corr_age, _x.signal_info,) = _get_struct_4B3d3fHh2HI().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4B3d3fHh2HI = None
def _get_struct_4B3d3fHh2HI():
    global _struct_4B3d3fHh2HI
    if _struct_4B3d3fHh2HI is None:
        _struct_4B3d3fHh2HI = struct.Struct("<4B3d3fHh2HI")
    return _struct_4B3d3fHh2HI
