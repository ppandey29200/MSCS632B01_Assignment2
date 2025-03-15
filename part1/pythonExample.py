x = 10  # Global variable

def outer():
    y = 20  # Enclosed variable
    def inner():
        z = 30  # Local variable
        print(x, y, z)
    inner()

outer()
