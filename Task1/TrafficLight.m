% Set the radius of the lights
r = 2;

% Define the angles for creating a circle
th = 0:0.1:2*pi;

% Set up the plot
hold on;
axis([0 20 0 20]);
title('Traffic Light');

% Draw the traffic light frame
rectangle('Position', [8, 6, 5, 13], 'FaceColor', [0 0 0], 'Curvature', [0.1, 0.1]);

% Draw the pole of the traffic light
rectangle('Position', [10, 0, 1, 6], 'FaceColor', [0.5 0.5 0.5]);

% Draw the red light
fill(10.5 + r * cos(th), 17 + r * sin(th), [0.3, 0.05, 0.05]);

% Draw the yellow light
fill(10.5 + r * cos(th), 12.5 + r * sin(th), [0.5, 0.5, 0.1]);

% Draw the green light
fill(10.5 + r * cos(th), 8 + r * sin(th), [0.05, 0.3, 0.05]);

% Infinite loop to simulate the traffic light sequence
while 1
    % Blink the red light
    fill(10.5 + r * cos(th), 17 + r * sin(th), 'r');
    pause(1.5);
    fill(10.5 + r * cos(th), 17 + r * sin(th), [0.3, 0.05, 0.05]);

    % Blink the yellow light
    fill(10.5 + r * cos(th), 12.5 + r * sin(th), 'y');
    pause(1.5);
    fill(10.5 + r * cos(th), 12.5 + r * sin(th), [0.5, 0.5, 0.1]);

    % Blink the green light
    fill(10.5 + r * cos(th), 8 + r * sin(th), 'g');
    pause(1.5);
    fill(10.5 + r * cos(th), 8 + r * sin(th), [0.05, 0.3, 0.05]);
end
