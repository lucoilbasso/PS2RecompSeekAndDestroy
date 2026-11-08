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

// Function: caseD_b
// Address: 0x1360b8 - 0x1360e8
void caseD_b_0x1360b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1360b8");
#endif

    ctx->pc = 0x1360b8u;

    // 0x1360b8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1360b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1360bc: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1360bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1360c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1360c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1360c4: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x1360c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1360c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1360c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1360cc: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x1360ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x1360d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1360d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1360d4: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1360d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1360d8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1360d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1360dc: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x1360dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x1360e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1360E0u;
    {
        const bool branch_taken_0x1360e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360E0u;
        // 0x1360e4: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360e0) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x1360E8u;
}
