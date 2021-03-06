#pragma once

#include <triple_contact_planner/solver/constraint/constraint_base.h>

namespace contact_planner
{

class ConstraintEquality : public ConstraintBase
{
public:
  ConstraintEquality(const std::string &name = "");
  void setEqualityCondition(const Eigen::VectorXd & b);

  void printCondition() override;
};

} // namespace contact_planner

