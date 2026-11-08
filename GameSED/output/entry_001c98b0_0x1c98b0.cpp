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

// Function: entry_001c98b0
// Address: 0x1c98b0 - 0x1c98ec
void entry_001c98b0_0x1c98b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c98b0_0x1c98b0");
#endif

    ctx->pc = 0x1c98b0u;

    // 0x1c98b0: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x1c98b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c98b4: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x1c98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c98b8: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x1c98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c98bc: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x1c98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c98c0: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c98c0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c98c4: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x1c98c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c98c8: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1c98c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c98cc: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c98ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c98d0: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x1c98d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c98d4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c98d8: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1c98d8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c98dc: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c98dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c98e0: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1c98e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c98e4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C98E4u;
    {
        const bool branch_taken_0x1c98e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c98e4) {
            ctx->pc = 0x1C98E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C98E4u;
            // 0x1c98e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C98ECu;
            return;
        }
    }
    ctx->pc = 0x1C98ECu;
}
