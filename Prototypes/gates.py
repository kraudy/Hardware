
"""
Simple and gate
"""
class ANDgate:
  def __init__(self):
    pass

  def __call__(self, a: bool, b: bool) -> bool:
    return (a & b)

