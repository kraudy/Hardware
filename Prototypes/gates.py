
"""
Simple and gate
"""
class ANDgate:
  def __call__(self, a: bool, b: bool) -> bool:
    return (a & b)

