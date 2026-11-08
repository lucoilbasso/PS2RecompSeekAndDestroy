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

// Function: entry_001b4f48
// Address: 0x1b4f48 - 0x1b4f50
void entry_001b4f48_0x1b4f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4f48_0x1b4f48");
#endif

    ctx->pc = 0x1b4f48u;

    // 0x1b4f48: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b4f4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b4f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1b4f50u;
}
