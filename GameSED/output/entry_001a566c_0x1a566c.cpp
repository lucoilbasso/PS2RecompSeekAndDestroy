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

// Function: entry_001a566c
// Address: 0x1a566c - 0x1a5674
void entry_001a566c_0x1a566c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a566c_0x1a566c");
#endif

    ctx->pc = 0x1a566cu;

    // 0x1a566c: 0x24463830  addiu       $a2, $v0, 0x3830
    ctx->pc = 0x1a566cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14384));
    // 0x1a5670: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1a5670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->pc = 0x1a5674u;
}
