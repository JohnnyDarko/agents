# agents:
Agents are the operational facilitating components of any system. Platforms functionally just a collection of agents. Agents are aggregation points for nodes - one agent might manage multiple nodes. Agents are deployed by nGen, and execute tasks according to cycle time (scheduling).

example of nodes:

    Navigation: 
                collects Gps and Ahrs information to calculate where the platform is at.
            
    Guidance: 
                collects controller/user input, mission data, and develops the corrections 
                to stay on course.
            
    Control:    
                takes correction data, and innerloop control data from Autopilot or 
                internal PID's, and adjusts steering, speed, or flight controls to 
                stay on course and provide stabilization.

    Autopilot: 
                takes fastloop (inner loop) data and data from guidance to provide 
                heading lock, altitude lock etc.
