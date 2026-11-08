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

// Function: entry_001c9998
// Address: 0x1c9998 - 0x1c99d0
void entry_001c9998_0x1c9998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9998_0x1c9998");
#endif

    ctx->pc = 0x1c9998u;

    // 0x1c9998: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x1c9998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1c999c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c99a0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1c99a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99a4: 0x470019  multu       $v0, $a3
    ctx->pc = 0x1c99a4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c99a8: 0x3010  mfhi        $a2
    ctx->pc = 0x1c99a8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1c99ac: 0x4012  mflo        $t0
    ctx->pc = 0x1c99acu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1c99b0: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x1c99b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c99b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C99B4u;
    {
        const bool branch_taken_0x1c99b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99B4u;
        // 0x1c99b8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99b4) {
            ctx->pc = 0x1C99D0u;
            return;
        }
    }
    ctx->pc = 0x1C99BCu;
    // 0x1c99bc: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C99BCu;
    {
        const bool branch_taken_0x1c99bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x1C99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99BCu;
        // 0x1c99c0: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99bc) {
            ctx->pc = 0x1C99E0u;
            return;
        }
    }
    ctx->pc = 0x1C99C4u;
    // 0x1c99c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C99C4u;
    {
        const bool branch_taken_0x1c99c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99C4u;
        // 0x1c99c8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99c4) {
            ctx->pc = 0x1C99E0u;
            return;
        }
    }
    ctx->pc = 0x1C99CCu;
    // 0x1c99cc: 0x0  nop
    ctx->pc = 0x1c99ccu;
    // NOP
    ctx->pc = 0x1c99d0u;
}
