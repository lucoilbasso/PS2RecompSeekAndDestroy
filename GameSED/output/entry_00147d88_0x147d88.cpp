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

// Function: entry_00147d88
// Address: 0x147d88 - 0x147d8c
void entry_00147d88_0x147d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147d88_0x147d88");
#endif

    ctx->pc = 0x147d88u;

    // 0x147d88: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x147d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    ctx->pc = 0x147d8cu;
}
