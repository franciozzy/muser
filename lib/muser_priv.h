#include "muser.h"

int
muser_pci_hdr_access(lm_ctx_t * const lm_ctx, size_t * const count,
		     loff_t * const pos, const bool write,
		     unsigned char *const buf);

