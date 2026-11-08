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

// Function: entry_001c84f0
// Address: 0x1c84f0 - 0x1c8524
void entry_001c84f0_0x1c84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c84f0_0x1c84f0");
#endif

    ctx->pc = 0x1c84f0u;

    // 0x1c84f0: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1c84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c84f4: 0xeb1006  srlv        $v0, $t3, $a3
    ctx->pc = 0x1c84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c84f8: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1c84f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c84fc: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1c84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c8500: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c8500u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c8504: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1c8504u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c8508: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1c8508u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c850c: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x1c850cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c8510: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c8510u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c8514: 0x312cffff  andi        $t4, $t1, 0xFFFF
    ctx->pc = 0x1c8514u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c8518: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1c8518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c851c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C851Cu;
    {
        const bool branch_taken_0x1c851c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c851c) {
            ctx->pc = 0x1C8520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C851Cu;
            // 0x1c8520: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8524u;
            return;
        }
    }
    ctx->pc = 0x1C8524u;
}
