#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0016efac
// Address: 0x16efac - 0x16efb0
void entry_0016efac_0x16efac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016efac_0x16efac");
#endif

    ctx->pc = 0x16efacu;

    // 0x16efac: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x16efacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x16efb0u;
}
