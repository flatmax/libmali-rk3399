# libmail-rk3399

The ARM Mali GPU user space drivers for Rockchip RK3399.

## Why do we need a GBM wrapper?

```
[02:08:23.027] Command line: weston --tty 2
[02:08:23.027] OS: Linux, 4.4.179, #1 SMP Thu Nov 7 08:32:22 AEDT 2019, aarch64
[02:08:23.028] Starting with no config file.
[02:08:23.028] Output repaint window is 7 ms maximum.
[02:08:23.029] Loading module '/usr/lib/libweston-5/drm-backend.so'
[02:08:23.077] Failed to load module: /usr/lib/libweston-5/drm-backend.so: undefined symbol: gbm_bo_get_offset
[02:08:23.077] fatal: failed to create compositor backend
```

## This software can be used with the buildroot external repo for the Nano Pi Neo4 and M4 or other rk3399 based SoCs :

https://github.com/flatmax/NanoPi.Neo4.buildroot.external
