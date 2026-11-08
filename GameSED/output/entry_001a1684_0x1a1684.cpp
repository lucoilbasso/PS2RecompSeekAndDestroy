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

// Function: entry_001a1684
// Address: 0x1a1684 - 0x1a1688
void entry_001a1684_0x1a1684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1684_0x1a1684");
#endif

    ctx->pc = 0x1a1684u;

    // 0x1a1684: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1a1684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1a1688u;
}
