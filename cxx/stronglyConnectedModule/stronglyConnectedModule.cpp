/*
* This source file is part of an OSTIS project. For the latest info, see http://ostis.net
* Distributed under the MIT License
* (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
*/

#include "stronglyConnectedModule.hpp"
#include "keynodes/keynodes.hpp"
#include "agents/IsStronglyConnectedAgent.hpp"

using namespace stronglyConnectedModule;

SC_IMPLEMENT_MODULE(StronglyConnectedModule)

sc_result StronglyConnectedModule::InitializeImpl()
{
  if (!stronglyConnectedModule::Keynodes::InitGlobal())
    return SC_RESULT_ERROR;

  SC_AGENT_REGISTER(IsStronglyConnectedAgent)

  return SC_RESULT_OK;
}

sc_result StronglyConnectedModule::ShutdownImpl()
{

  SC_AGENT_UNREGISTER(IsStronglyConnectedAgent)

  return SC_RESULT_OK;
}
