from adders import HalfAdder, FullAdder

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

if __name__ == "__main__":
  test_HalfAdder()
  test_FullAdder()