/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_KMDFDriver,
    0x50735e1c,0xb0e3,0x44cb,0xb4,0x78,0x90,0xa2,0x4d,0x6c,0x94,0x06);
// {50735e1c-b0e3-44cb-b478-90a24d6c9406}
