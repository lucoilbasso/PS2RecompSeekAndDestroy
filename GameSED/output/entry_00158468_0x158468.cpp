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

// Function: entry_00158468
// Address: 0x158468 - 0x158474
void entry_00158468_0x158468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158468_0x158468");
#endif

    ctx->pc = 0x158468u;

    // 0x158468: 0x25240400  addiu       $a0, $t1, 0x400
    ctx->pc = 0x158468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x15846c: 0x252303d0  addiu       $v1, $t1, 0x3D0
    ctx->pc = 0x15846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 976));
    // 0x158470: 0x252203b0  addiu       $v0, $t1, 0x3B0
    ctx->pc = 0x158470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 944));
    ctx->pc = 0x158474u;
}
