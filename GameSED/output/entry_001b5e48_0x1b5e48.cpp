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

// Function: entry_001b5e48
// Address: 0x1b5e48 - 0x1b5e50
void entry_001b5e48_0x1b5e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5e48_0x1b5e48");
#endif

    ctx->pc = 0x1b5e48u;

    // 0x1b5e48: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1b5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b5e4c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b5e50u;
}
