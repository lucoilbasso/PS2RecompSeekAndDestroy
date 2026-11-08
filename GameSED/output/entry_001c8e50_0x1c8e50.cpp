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

// Function: entry_001c8e50
// Address: 0x1c8e50 - 0x1c8e88
void entry_001c8e50_0x1c8e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8e50_0x1c8e50");
#endif

    ctx->pc = 0x1c8e50u;

    // 0x1c8e50: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x1c8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1c8e54: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c8e58: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1c8e58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e5c: 0x470019  multu       $v0, $a3
    ctx->pc = 0x1c8e5cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c8e60: 0x3010  mfhi        $a2
    ctx->pc = 0x1c8e60u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1c8e64: 0x4012  mflo        $t0
    ctx->pc = 0x1c8e64u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1c8e68: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x1c8e68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c8e6c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E6Cu;
    {
        const bool branch_taken_0x1c8e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E6Cu;
        // 0x1c8e70: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e6c) {
            ctx->pc = 0x1C8E88u;
            return;
        }
    }
    ctx->pc = 0x1C8E74u;
    // 0x1c8e74: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8E74u;
    {
        const bool branch_taken_0x1c8e74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x1C8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E74u;
        // 0x1c8e78: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e74) {
            ctx->pc = 0x1C8E98u;
            return;
        }
    }
    ctx->pc = 0x1C8E7Cu;
    // 0x1c8e7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E7Cu;
    {
        const bool branch_taken_0x1c8e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E7Cu;
        // 0x1c8e80: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e7c) {
            ctx->pc = 0x1C8E98u;
            return;
        }
    }
    ctx->pc = 0x1C8E84u;
    // 0x1c8e84: 0x0  nop
    ctx->pc = 0x1c8e84u;
    // NOP
    ctx->pc = 0x1c8e88u;
}
