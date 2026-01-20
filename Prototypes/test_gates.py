from gates import ANDgate

def test_ANDgate():
  and1 = ANDgate()

  truth_table = [
    (0, 0, 0),
    (0, 1, 0),
    (1, 0, 0),
    (1, 1, 1)
  ]

  for a, b, y in truth_table:
    assert and1(a, b) == y, f"Failed: {a} AND {b} -> {y}"
  
  print("test ANDgate successful")


if __name__ == "__main__":
  test_ANDgate()