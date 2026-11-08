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

// Function: entry_0013d2e0
// Address: 0x13d2e0 - 0x13d308
void entry_0013d2e0_0x13d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d2e0_0x13d2e0");
#endif

    ctx->pc = 0x13d2e0u;

    // 0x13d2e0: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x13d2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13d2e4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13d2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13d2e8: 0x8f848a54  lw          $a0, -0x75AC($gp)
    ctx->pc = 0x13d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x13d2ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d2f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13d2f4: 0xacb00030  sw          $s0, 0x30($a1)
    ctx->pc = 0x13d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 16));
    // 0x13d2f8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13d2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13d2fc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x13d2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13d300: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13d300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13d304: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x13d304u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->pc = 0x13d308u;
}
