@echo off
set triplets=x64-windows x86-windows

for %%t in (%triplets%) do (
	vcpkg install --x-wait-for-lock --triplet %%t --x-install-root=vcpkg_installed
)

pause
