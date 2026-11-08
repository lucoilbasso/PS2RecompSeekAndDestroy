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

// Function: caseD_2d
// Address: 0x1cb9c8 - 0x1cb9d8
void caseD_2d_0x1cb9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2d_0x1cb9c8");
#endif

    ctx->pc = 0x1cb9c8u;

    // 0x1cb9c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cb9cc: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1cb9d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1cb9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1cb9d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1cb9d8u;
}
