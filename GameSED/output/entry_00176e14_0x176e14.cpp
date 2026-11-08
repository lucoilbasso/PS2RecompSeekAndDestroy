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

// Function: entry_00176e14
// Address: 0x176e14 - 0x176e38
void entry_00176e14_0x176e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176e14_0x176e14");
#endif

    ctx->pc = 0x176e14u;

    // 0x176e14: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x176e14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x176e18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x176e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176e1c: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x176e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x176e20: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x176e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x176e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x176e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x176e28: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x176e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x176e2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176e30: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x176e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x176e34: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x176e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x176e38u;
}
