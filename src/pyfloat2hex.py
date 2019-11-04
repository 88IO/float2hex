import struct
import sys

def float2hex(f: float) -> str:
    return hex(struct.unpack('>I', struct.pack('>f', f))[0])

if __name__ == '__main__':
    try:
        print(float2hex(float(sys.argv[1])))
    except ValueError:
        print(sys.argv[1])
    except indexError:
        print()
