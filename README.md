# school manager
## features
- timetable 
  - datatypes
    - database -> Postgresql
    - xml
    - json
- homework planer
  - google calendar sync
- exam planer 
  - google calendar sync 
- multi language support
  - en_us
  - de_de
  - more will be added soon
## build
### cmake
```
cmake -DCMAKE_PREFIX_PATH=/Qt/6.4.0/msvc2019_64 -S . -B build/
cd build/
make
cd ../bin/school-manager
```

executable will be in the bin/ subdirectory
### docker
Support will be added soon. 

