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

// Function: entry_001777e8
// Address: 0x1777e8 - 0x177800
void entry_001777e8_0x1777e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001777e8_0x1777e8");
#endif

    ctx->pc = 0x1777e8u;

    // 0x1777e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1777e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1777ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1777ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777f0: 0x244ae810  addiu       $t2, $v0, -0x17F0
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961168));
    // 0x1777f4: 0x24eb0004  addiu       $t3, $a3, 0x4
    ctx->pc = 0x1777f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1777f8: 0x240dff80  addiu       $t5, $zero, -0x80
    ctx->pc = 0x1777f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1777fc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1777fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177800u;
}
