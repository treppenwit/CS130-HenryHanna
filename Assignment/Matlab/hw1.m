% Ask the user for units (feet or meters)
unit_choice = input('Do you want to input values in feet or meters? (Type "feet" or "meters"): ', 's');

% Conversion factors
ft_to_m = 0.3048; % 1 foot = 0.3048 meters
m_to_ft = 3.28084; % 1 meter = 3.28084 feet
g = 9.81; % Acceleration due to gravity (m/s^2)

% Ask the user for input values
alpha_deg = input('Enter the launch angle (theta) in degrees (between 0 and 90): ');
muzzle_velocity_input = input('Enter the muzzle velocity (in chosen units): ');
target_distance_input = input('Enter the target distance (in chosen units): ');

% Convert units if necessary
if strcmp(unit_choice, 'feet')
    % Convert inputs to meters
    muzzle_velocity = muzzle_velocity_input * ft_to_m; % feet/sec to meters/sec
    target_distance = target_distance_input * ft_to_m; % feet to meters
else
    % If in meters, no conversion needed
    muzzle_velocity = muzzle_velocity_input;
    target_distance = target_distance_input;
end

% Convert angle from degrees to radians
alpha_rad = deg2rad(alpha_deg);

% Split the velocity into horizontal and vertical components
V_vertical = muzzle_velocity * sin(alpha_rad); % Vertical component (m/s)
V_horizontal = muzzle_velocity * cos(alpha_rad); % Horizontal component (m/s)

% Calculate flight time
flight_time = 2 * V_vertical / g; % Total time of flight (seconds)

% Calculate the maximum height
h_max = (V_vertical^2) / (2 * g); % Maximum height (meters)

% Calculate the horizontal distance
x_distance = V_horizontal * flight_time; % Horizontal distance (meters)

% Output results
% Flight time in seconds
fprintf('Flight time: %.2f seconds\n', flight_time);

% Max height in meters and feet
fprintf('Max height: %.2f meters (%.2f feet)\n', h_max, h_max * m_to_ft);

% Horizontal distance in meters and feet
fprintf('Horizontal distance: %.1f meters (%.1f feet)\n', x_distance, x_distance * m_to_ft);

% Optionally: Display the results in the other unit system as well
if strcmp(unit_choice, 'feet')
    % Convert the results to feet if the original input was in feet
    fprintf('\nConverted to meters:\n');
    fprintf('Flight time: %.2f seconds\n', flight_time);
    fprintf('Max height: %.2f meters\n', h_max);
    fprintf('Horizontal distance: %.1f meters\n', x_distance);
else
    % Convert the results to feet if the original input was in meters
    fprintf('\nConverted to feet:\n');
    fprintf('Flight time: %.2f seconds\n', flight_time);
    fprintf('Max height: %.2f feet\n', h_max * m_to_ft);
    fprintf('Horizontal distance: %.1f feet\n', x_distance * m_to_ft);
end
