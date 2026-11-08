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

// Function: entry_00171eec
// Address: 0x171eec - 0x171f00
void entry_00171eec_0x171eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171eec_0x171eec");
#endif

    ctx->pc = 0x171eecu;

    // 0x171eec: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x171eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x171ef0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x171ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x171ef4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x171ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x171ef8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x171ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x171efc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->pc = 0x171f00u;
}
