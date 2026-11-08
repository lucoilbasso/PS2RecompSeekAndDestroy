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

// Function: entry_0016efb0
// Address: 0x16efb0 - 0x16efb4
void entry_0016efb0_0x16efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016efb0_0x16efb0");
#endif

    ctx->pc = 0x16efb0u;

    // 0x16efb0: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x16efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->pc = 0x16efb4u;
}
