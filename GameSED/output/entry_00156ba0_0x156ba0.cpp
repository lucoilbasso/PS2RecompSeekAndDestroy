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

// Function: entry_00156ba0
// Address: 0x156ba0 - 0x156ba4
void entry_00156ba0_0x156ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ba0_0x156ba0");
#endif

    ctx->pc = 0x156ba0u;

    // 0x156ba0: 0x244635e0  addiu       $a2, $v0, 0x35E0
    ctx->pc = 0x156ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    ctx->pc = 0x156ba4u;
}
