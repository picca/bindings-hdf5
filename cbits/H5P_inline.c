#include <H5Ppublic.h>
#include <bindings.cmacros.h>

BC_INLINE_(H5P_ROOT,                        hid_t)
BC_INLINE_(H5P_OBJECT_CREATE,               hid_t)
BC_INLINE_(H5P_FILE_CREATE,                 hid_t)
BC_INLINE_(H5P_FILE_ACCESS,                 hid_t)
BC_INLINE_(H5P_DATASET_CREATE,              hid_t)
BC_INLINE_(H5P_DATASET_ACCESS,              hid_t)
BC_INLINE_(H5P_DATASET_XFER,                hid_t)
BC_INLINE_(H5P_FILE_MOUNT,                  hid_t)
BC_INLINE_(H5P_GROUP_CREATE,                hid_t)
BC_INLINE_(H5P_GROUP_ACCESS,                hid_t)
BC_INLINE_(H5P_DATATYPE_CREATE,             hid_t)
BC_INLINE_(H5P_DATATYPE_ACCESS,             hid_t)
BC_INLINE_(H5P_STRING_CREATE,               hid_t)
BC_INLINE_(H5P_ATTRIBUTE_CREATE,            hid_t)
BC_INLINE_(H5P_OBJECT_COPY,                 hid_t)
BC_INLINE_(H5P_LINK_CREATE,                 hid_t)
BC_INLINE_(H5P_LINK_ACCESS,                 hid_t)

BC_INLINE_(H5P_FILE_CREATE_DEFAULT,         hid_t)
BC_INLINE_(H5P_FILE_ACCESS_DEFAULT,         hid_t)
BC_INLINE_(H5P_DATASET_CREATE_DEFAULT,      hid_t)
BC_INLINE_(H5P_DATASET_ACCESS_DEFAULT,      hid_t)
BC_INLINE_(H5P_DATASET_XFER_DEFAULT,        hid_t)
BC_INLINE_(H5P_FILE_MOUNT_DEFAULT,          hid_t)
BC_INLINE_(H5P_GROUP_CREATE_DEFAULT,        hid_t)
BC_INLINE_(H5P_GROUP_ACCESS_DEFAULT,        hid_t)
BC_INLINE_(H5P_DATATYPE_CREATE_DEFAULT,     hid_t)
BC_INLINE_(H5P_DATATYPE_ACCESS_DEFAULT,     hid_t)
BC_INLINE_(H5P_ATTRIBUTE_CREATE_DEFAULT,    hid_t)
BC_INLINE_(H5P_OBJECT_COPY_DEFAULT,         hid_t)
BC_INLINE_(H5P_LINK_CREATE_DEFAULT,         hid_t)
BC_INLINE_(H5P_LINK_ACCESS_DEFAULT,         hid_t)

#if H5_VERSION_GE(1,10,0)
BC_INLINE_(H5P_ATTRIBUTE_ACCESS,            hid_t)
BC_INLINE_(H5P_ATTRIBUTE_ACCESS_DEFAULT,    hid_t)
#endif
