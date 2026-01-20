
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