/****************************************************************************
	Description:	Defines the CDrive control class.
	Classes:		CDrive
	Project:		2020 Infinite Recharge Robot Code.
	Copyright 2020 First Team 3284 - Camdenton LASER Robotics.
****************************************************************************/
#ifndef Drive_h
#define Drive_h

#include <frc/Joystick.h>
#include <ctre/Phoenix.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/kinematics/DifferentialDriveOdometry.h>
#include <frc/kinematics/ChassisSpeeds.h>
#include <frc/trajectory/TrajectoryGenerator.h>
#include <frc/trajectory/TrajectoryConfig.h>
#include <frc/trajectory/Trajectory.h>
#include <frc/geometry/Pose2d.h>
#include <AHRS.h>
#include "FalconMotion.h"

using namespace frc;
/////////////////////////////////////////////////////////////////////////////
class CDrive
{
public:
    CDrive(Joystick *pDriveController);
    ~CDrive();
    void Init();
    void Tick();
    void GenerateTragectory();
    void FollowTragectory();
    void Stop();

private:
    Joystick*            m_pDriveController;
    CFalconMotion*       m_pLeftMotor1;
    WPI_TalonFX*         m_pLeftMotor2;
    CFalconMotion*       m_pRightMotor1;
    WPI_TalonFX*         m_pRightMotor2;
    DifferentialDrive*   m_pRobotDrive;
    AHRS*                 m_pGyro;
};
/////////////////////////////////////////////////////////////////////////////
#endif