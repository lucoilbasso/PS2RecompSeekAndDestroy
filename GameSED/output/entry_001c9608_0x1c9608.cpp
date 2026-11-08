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

// Function: entry_001c9608
// Address: 0x1c9608 - 0x1c963c
void entry_001c9608_0x1c9608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9608_0x1c9608");
#endif

    ctx->pc = 0x1c9608u;

    // 0x1c9608: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1c9608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c960c: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x1c960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c9610: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9614: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1c9614u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c9618: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c9618u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c961c: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c961cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9620: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1c9620u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c9624: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1c9624u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c9628: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c9628u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c962c: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x1c962cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1c9630: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1c9630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9634: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9634u;
    {
        const bool branch_taken_0x1c9634 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9634) {
            ctx->pc = 0x1C9638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9634u;
            // 0x1c9638: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C963Cu;
            return;
        }
    }
    ctx->pc = 0x1C963Cu;
}
