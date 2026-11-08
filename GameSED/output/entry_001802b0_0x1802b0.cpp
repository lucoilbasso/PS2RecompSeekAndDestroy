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

// Function: entry_001802b0
// Address: 0x1802b0 - 0x1802b8
void entry_001802b0_0x1802b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001802b0_0x1802b0");
#endif

    ctx->pc = 0x1802b0u;

    // 0x1802b0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1802b4: 0x24827f38  addiu       $v0, $a0, 0x7F38
    ctx->pc = 0x1802b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32568));
    ctx->pc = 0x1802b8u;
}
