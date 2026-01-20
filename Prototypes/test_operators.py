from operators import HalfAdder, FullAdder, HalfSubstractor

def test_HalfAdder():
  Half1 = HalfAdder()

  truth_table = [
    (0, 0, 0, 0),
    (0, 1, 1, 0),
    (1, 0, 1, 0),
    (1, 1, 0, 1)
  ]

  for a, b, sum, cout in truth_table:
    assert Half1(a, b) == (sum, cout), f"Failed: {a} Half Add {b} -> {sum},{cout}"
  
  print("test HalfAdder successful")

def test_FullAdder():
  Full1 = FullAdder()

  truth_table = [
  #  a b cin sum cout
    (0, 0, 0, 0, 0),
    (0, 0, 1, 1, 0),
    (0, 1, 0, 1, 0),
    (0, 1, 1, 0, 1),
    (1, 0, 0, 1, 0),
    (1, 0, 1, 0, 1),
    (1, 1, 0, 0, 1),
    (1, 1, 1, 1, 1),
  ]

  for a, b, cin, sum, cout in truth_table:
    assert Full1(a, b, cin) == (sum, cout), f"Failed: {a} Full Add {b}, with carry {cin} -> {sum},{cout}"
  
  print("test FullAdder successful")

def test_HalfSubstractor():
  HalfSubs1 = HalfSubstractor()

  truth_table = [
    (0, 0, 0, 0),
    (0, 1, 1, 1),
    (1, 0, 1, 0),
    (1, 1, 0, 0)
  ]

  for a, b, diff, borrow in truth_table:
    assert HalfSubs1(a, b) == (diff, borrow), f"Failed: {a} Half Sub {b} -> {diff},{borrow}"
  
  print("test HalfSubstractor successful")

if __name__ == "__main__":
  test_HalfAdder()
  test_FullAdder()
  test_HalfSubstractor()