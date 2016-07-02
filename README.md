# log.c
a tiny logging module for c based on [log.lua](https://github.com/rxi/log.lua)  
![image](https://cloud.githubusercontent.com/assets/9454576/16541850/4d03dc36-4056-11e6-8a3b-f0c6b713a591.png)
## installation
drop the [log.h](https://github.com/EmekaNkurumeh/log.c/blob/master/log.h) into an existing project and include it
```c
#include "log.h"
```

## usage
```c
  TRACE("this is a %s message\n", "trace", ...);
  DEBUG("this is a %s message\n", "debug", ...);
  INFO("this is a %s message\n", "info", ...);
  WARN("this is a %s message\n", "warn", ...);
  ERROR("this is a %s message\n", "error", ...);
  FATAL("this is a %s message\n", "fatal", ...);
```


## license
this library is free software; you can redistribute it and/or modify it under
the terms of the MIT license. See [LICENSE](LICENSE) for details
