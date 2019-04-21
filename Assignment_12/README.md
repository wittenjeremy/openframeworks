## About
My Weather API translation is now working perfectly. I've tried it during different weather scenarios and as a result, different audio files play. The YouTube video shows Bushwick when the windspeed was greater than 1 mile per hour, the temperature was 55 degrees, there was no rain, no clouds, and no storm. As a result of these conditions, the second audio file "BellDrums.wav" plays.


## Screenshots
[Online consensus](https://stackoverflow.com/questions/11804820/embed-a-youtube-video) says Youtube videos cannot be embedded in Github. So my screenshot links to YouTube.
[![alt text](https://github.com/wittenjeremy/openframeworks/blob/master/Image%20files/Weatherscreenshot.png)](https://www.youtube.com/watch?v=GyJEt7Z_V7Y)
Audio samples taken from F. Deakin and N. Franglen

## Settings
# 1) A clear, sunny day: 
Wind is less than 5mph, no clouds, temperature between 50 and 70 degrees, no rain, no storm within 5 miles

# 2) A clear day with some wind: 
Wind is more than 5mph, no clouds, temperature between 50 and 70 degrees, no rain, no storm within 5 miles

# 3) A cloudy day with wind: 
Wind is more than 5mph, clouds, temperature between 50 and 70 degrees, no rain, no storm within 5 miles

# 4) A cloudy, windy day that is either hot or cold: 
Wind is more than 5mph, clouds, temperature either below 50 or above 70 degrees, no rain, no storm within 5 miles

# 5) A rainy, windy day that is either hot or cold: 
Wind is more than 5mph, clouds, temperature either below 50 or above 70 degrees, rain, no storm within 5 miles

# 6) A cold or hot day with a storm: 
Wind is more than 5mph, clouds, temperature either below 50 or above 70 degrees, rain, a storm is between 0 and 5 miles away
