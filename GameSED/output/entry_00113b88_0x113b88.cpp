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

// Function: entry_00113b88
// Address: 0x113b88 - 0x113b94
void entry_00113b88_0x113b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113b88_0x113b88");
#endif

    ctx->pc = 0x113b88u;

    // 0x113b88: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x113b8c: 0x2445c090  addiu       $a1, $v0, -0x3F70
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951056));
    // 0x113b90: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x113b94u;
}
