/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   <CLASSNAME>.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef UHDM_<UPPER_CLASSNAME>_H
#define UHDM_<UPPER_CLASSNAME>_H

#include <uhdm/sv_vpi_user.h>
#include <uhdm/uhdm_vpi_user.h>

#include <uhdm/SymbolFactory.h>
#include <uhdm/containers.h>
#include <uhdm/<EXTENDS>.h>

<GROUP_HEADER_DEPENDENCY>


namespace UHDM {
<TYPE_FORWARD_DECLARE>

class <CLASSNAME><FINAL_CLASS> : public <EXTENDS> {
  UHDM_IMPLEMENT_RTTI(<CLASSNAME>, <EXTENDS>)
public:
  // Implicit constructor used to initialize all members,
  // comment: <CLASSNAME>();
  <VIRTUAL>~<CLASSNAME>()<FINAL_DESTRUCTOR> = default;

<METHODS>

  <VIRTUAL> UHDM_OBJECT_TYPE UhdmType() const <OVERRIDE_OR_FINAL> { return uhdm<CLASSNAME>; }

protected:
  void DeepCopy(<CLASSNAME>* clone, Serializer* serializer,
                ElaboratorListener* elaborator, BaseClass* parent) const;

private:
<MEMBERS>
};

<DISABLE_OBJECT_FACTORY>
typedef FactoryT<<CLASSNAME>> <CLASSNAME>Factory;
<END_DISABLE_OBJECT_FACTORY>

typedef FactoryT<std::vector<<CLASSNAME> *>> VectorOf<CLASSNAME>Factory;

}  // namespace UHDM

#endif
