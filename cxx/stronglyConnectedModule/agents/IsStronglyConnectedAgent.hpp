#pragma once

#include <sc-memory/kpm/sc_agent.hpp>

#include "keynodes/keynodes.hpp"
#include "IsStronglyConnectedAgent.generated.hpp"

namespace stronglyConnectedModule
{
    class IsStronglyConnectedAgent : public ScAgent
    {
        SC_CLASS(Agent, Event(Keynodes::question_is_strongly_connected, ScEvent::Type::AddOutputEdge))
        SC_GENERATED_BODY()
    };

} // namespace exampleModule
