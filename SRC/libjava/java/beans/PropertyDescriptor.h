
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_PropertyDescriptor__
#define __java_beans_PropertyDescriptor__

#pragma interface

#include <java/beans/FeatureDescriptor.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace beans
    {
        class PropertyDescriptor;
        class PropertyEditor;
    }
  }
}

class java::beans::PropertyDescriptor : public ::java::beans::FeatureDescriptor
{

public: // actually package-private
  PropertyDescriptor(::java::lang::String *);
public:
  PropertyDescriptor(::java::lang::String *, ::java::lang::Class *);
  PropertyDescriptor(::java::lang::String *, ::java::lang::Class *, ::java::lang::String *, ::java::lang::String *);
  PropertyDescriptor(::java::lang::String *, ::java::lang::reflect::Method *, ::java::lang::reflect::Method *);
  virtual ::java::lang::Class * getPropertyType();
  virtual ::java::lang::reflect::Method * getReadMethod();
  virtual void setReadMethod(::java::lang::reflect::Method *);
  virtual ::java::lang::reflect::Method * getWriteMethod();
  virtual void setWriteMethod(::java::lang::reflect::Method *);
  virtual jboolean isBound();
  virtual void setBound(jboolean);
  virtual jboolean isConstrained();
  virtual void setConstrained(jboolean);
  virtual ::java::lang::Class * getPropertyEditorClass();
  virtual void setPropertyEditorClass(::java::lang::Class *);
  virtual ::java::beans::PropertyEditor * createPropertyEditor(::java::lang::Object *);
private:
  ::java::lang::reflect::Constructor * findConstructor(::java::lang::Class *, JArray< ::java::lang::Class * > *);
  ::java::beans::PropertyEditor * instantiateClass(::java::lang::reflect::Constructor *, JArray< ::java::lang::Object * > *);
  void findMethods(::java::lang::Class *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  ::java::lang::Class * checkMethods(::java::lang::reflect::Method *, ::java::lang::reflect::Method *);
public:
  virtual jint hashCode();
  virtual jboolean equals(::java::lang::Object *);
public: // actually package-private
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::beans::FeatureDescriptor)))) propertyType;
  ::java::lang::reflect::Method * getMethod;
  ::java::lang::reflect::Method * setMethod;
  ::java::lang::Class * propertyEditorClass;
  jboolean bound;
  jboolean constrained;
public:
  static ::java::lang::Class class$;
};

#endif // __java_beans_PropertyDescriptor__