#include <bindings.h>
#include <H5FDcore.h>

-- |We would like to create a driver specifically for Windows
-- to utilize the Win32 API, and reduce the maintenence demands
-- for the other file drivers.  Our other motivation is that
-- the Windows system calls of the existing sec2 driver differ
-- from those on other platforms, and are not 64-bit compatible.
-- From the start, this will have the structure very similar
-- to our sec2 driver, but make system calls more similar to
-- our stdio driver.
module Bindings.HDF5.Raw.H5FD.Windows where
#strict_import

import System.IO.Unsafe (unsafePerformIO)

import Bindings.HDF5.Raw.H5
import Bindings.HDF5.Raw.H5I

#mangle_ident "H5FD_WINDOWS"
    = unsafePerformIO (#mangle_ident "H5FD_windows_init")

#if H5_VERSION_LE(1,8,7)

-- |Initialize this driver by registering the driver with the library.
--
-- > hid_t H5FD_windows_init(void);
#ccall H5FD_windows_init, IO <hid_t>

-- |Shut down the VFD.
--
-- > void H5FD_windows_term(void);
#ccall H5FD_windows_term, IO ()

#else

-- The code behind the windows VFD has been removed and the windows
-- VFD initialization has been redirected to the SEC2 driver.  The
-- "Windows" VFD was actually identical to the SEC2 driver code
-- (a planned Win32 API driver never happened) so this change
-- should be transparent to users.
#mangle_ident H5FD_windows_init :: IO HId_t
#mangle_ident H5FD_windows_init = #mangle_ident H5FD_sec2_init
#mangle_ident H5FD_windows_term :: IO ()
#mangle_ident H5FD_windows_term = #mangle_ident H5FD_sec2_term

#endif

-- |Modify the file access property list to use the H5FD_WINDOWS
-- driver.  There are no driver-specific properties.
--
-- > herr_t H5Pset_fapl_windows(hid_t fapl_id);
#ccall H5Pset_fapl_windows, <hid_t> -> IO <herr_t>

