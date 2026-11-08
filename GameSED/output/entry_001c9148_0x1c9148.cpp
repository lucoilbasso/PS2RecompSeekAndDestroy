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

// Function: entry_001c9148
// Address: 0x1c9148 - 0x1c917c
void entry_001c9148_0x1c9148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9148_0x1c9148");
#endif

    ctx->pc = 0x1c9148u;

    // 0x1c9148: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c914c: 0xeb1006  srlv        $v0, $t3, $a3
    ctx->pc = 0x1c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c9150: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1c9150u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9154: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1c9154u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c9158: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c9158u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c915c: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1c915cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9160: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1c9160u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c9164: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x1c9164u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c9168: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c9168u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c916c: 0x312cffff  andi        $t4, $t1, 0xFFFF
    ctx->pc = 0x1c916cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c9170: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1c9170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9174: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9174u;
    {
        const bool branch_taken_0x1c9174 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9174) {
            ctx->pc = 0x1C9178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9174u;
            // 0x1c9178: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C917Cu;
            return;
        }
    }
    ctx->pc = 0x1C917Cu;
}
