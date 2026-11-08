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

// Function: entry_001c963c
// Address: 0x1c963c - 0x1c9680
void entry_001c963c_0x1c963c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c963c_0x1c963c");
#endif

    ctx->pc = 0x1c963cu;

    // 0x1c963c: 0x1012  mflo        $v0
    ctx->pc = 0x1c963cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9640: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9640u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9644: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1c9644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c9648: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c964c: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1c964cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9650: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1c9650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9654: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9654u;
    {
        const bool branch_taken_0x1c9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9654u;
        // 0x1c9658: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9654) {
            ctx->pc = 0x1C9680u;
            return;
        }
    }
    ctx->pc = 0x1C965Cu;
    // 0x1c965c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1c965cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c9660: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1c9660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9664: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9664u;
    {
        const bool branch_taken_0x1c9664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9664) {
            ctx->pc = 0x1C9668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9664u;
            // 0x1c9668: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9684u;
            return;
        }
    }
    ctx->pc = 0x1C966Cu;
    // 0x1c966c: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1c966cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9670: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c9674: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c9674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c9678: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c9678u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1c967c: 0x0  nop
    ctx->pc = 0x1c967cu;
    // NOP
    ctx->pc = 0x1c9680u;
}
