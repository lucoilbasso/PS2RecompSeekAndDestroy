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

// Function: entry_001b3250
// Address: 0x1b3250 - 0x1b3258
void entry_001b3250_0x1b3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3250_0x1b3250");
#endif

    ctx->pc = 0x1b3250u;

    // 0x1b3250: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1b3250u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x1b3254: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b3254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1b3258u;
}
