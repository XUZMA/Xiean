
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_MappedByteBufferImpl__
#define __java_nio_MappedByteBufferImpl__

#pragma interface

#include <java/nio/MappedByteBuffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
        class RawData;
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
        class CharBuffer;
        class DoubleBuffer;
        class FloatBuffer;
        class IntBuffer;
        class LongBuffer;
        class MappedByteBufferImpl;
        class ShortBuffer;
    }
  }
}

class java::nio::MappedByteBufferImpl : public ::java::nio::MappedByteBuffer
{

public:
  MappedByteBufferImpl(::gnu::gcj::RawData *, jint, jboolean);
  jboolean isReadOnly();
  jbyte get();
  ::java::nio::ByteBuffer * put(jbyte);
  jbyte get(jint);
  ::java::nio::ByteBuffer * get(JArray< jbyte > *, jint, jint);
  ::java::nio::ByteBuffer * put(jint, jbyte);
  ::java::nio::ByteBuffer * compact();
  jboolean isDirect();
  ::java::nio::ByteBuffer * slice();
private:
  ::java::nio::ByteBuffer * duplicate(jboolean);
public:
  ::java::nio::ByteBuffer * duplicate();
  ::java::nio::ByteBuffer * asReadOnlyBuffer();
  ::java::nio::CharBuffer * asCharBuffer();
  ::java::nio::ShortBuffer * asShortBuffer();
  ::java::nio::IntBuffer * asIntBuffer();
  ::java::nio::LongBuffer * asLongBuffer();
  ::java::nio::FloatBuffer * asFloatBuffer();
  ::java::nio::DoubleBuffer * asDoubleBuffer();
  jchar getChar();
  ::java::nio::ByteBuffer * putChar(jchar);
  jchar getChar(jint);
  ::java::nio::ByteBuffer * putChar(jint, jchar);
  jshort getShort();
  ::java::nio::ByteBuffer * putShort(jshort);
  jshort getShort(jint);
  ::java::nio::ByteBuffer * putShort(jint, jshort);
  jint getInt();
  ::java::nio::ByteBuffer * putInt(jint);
  jint getInt(jint);
  ::java::nio::ByteBuffer * putInt(jint, jint);
  jlong getLong();
  ::java::nio::ByteBuffer * putLong(jlong);
  jlong getLong(jint);
  ::java::nio::ByteBuffer * putLong(jint, jlong);
  jfloat getFloat();
  ::java::nio::ByteBuffer * putFloat(jfloat);
  jfloat getFloat(jint);
  ::java::nio::ByteBuffer * putFloat(jint, jfloat);
  jdouble getDouble();
  ::java::nio::ByteBuffer * putDouble(jdouble);
  jdouble getDouble(jint);
  ::java::nio::ByteBuffer * putDouble(jint, jdouble);
public: // actually package-private
  void unmapImpl();
  jboolean isLoadedImpl();
  void loadImpl();
  void forceImpl();
private:
  jboolean __attribute__((aligned(__alignof__( ::java::nio::MappedByteBuffer)))) readOnly;
public:
  ::gnu::gcj::RawData * implPtr;
  jlong implLen;
  static ::java::lang::Class class$;
};

#endif // __java_nio_MappedByteBufferImpl__