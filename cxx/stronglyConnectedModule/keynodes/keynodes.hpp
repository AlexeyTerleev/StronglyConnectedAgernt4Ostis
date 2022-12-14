/*
* This source file is part of an OSTIS project. For the latest info, see http://ostis.net
* Distributed under the MIT License
* (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
*/

#pragma once

#include <sc-memory/sc_object.hpp>
#include <sc-memory/sc_addr.hpp>

#include "keynodes.generated.hpp"

namespace stronglyConnectedModule
{

class Keynodes : public ScObject
{
  SC_CLASS()
  SC_GENERATED_BODY()

public:

  SC_PROPERTY(Keynode("question_is_strongly_connected"), ForceCreate)
  static ScAddr question_is_strongly_connected;

};

} // namespace exampleModule
