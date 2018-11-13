#ifndef ROBOTUPDATECALLBACK_H
#define ROBOTUPDATECALLBACK_H

#include <osg/Matrixd>
#include <osg/NodeCallback>

namespace robo
{
class Robot;
}

class RobotUpdateCallback : public osg::NodeCallback
{
public:
  RobotUpdateCallback(robo::Robot* robot);
  virtual ~RobotUpdateCallback();

  virtual void operator()(osg::Node *node, osg::NodeVisitor *nv);

private:
  robo::Robot *robot_ptr_;
  osg::Matrixd model_rotation_matrix_;

  void computeModelRotationMatrix();
};

#endif /* ROBOTUPDATECALLBACK_H */
