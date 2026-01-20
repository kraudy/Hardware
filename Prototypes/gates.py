
"""
Simple and gate
"""
class AndGate:
  def __call__(self, a: bool, b: bool) -> bool:
    return (a & b)

class NandGate:
  def __call__(self, a: bool, b: bool) -> bool:
    return not (a & b)
  
class OrGate:
  def __call__(self, a:bool, b: bool) -> bool:
    return (a | b)
  
class NorGate:
  def __call__(self, a:bool, b: bool) -> bool:
    return not (a | b)
  
class XnorGate:
  def __call__(self, a:bool, b: bool) -> bool:
    return not (a ^ b)
  
class XorGate:
  def __call__(self, a:bool, b: bool) -> bool:
    return (a ^ b)