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

// Function: entry_0014806c
// Address: 0x14806c - 0x148090
void entry_0014806c_0x14806c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014806c_0x14806c");
#endif

    ctx->pc = 0x14806cu;

    // 0x14806c: 0x18a5023  subu        $t2, $t4, $t2
    ctx->pc = 0x14806cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x148070: 0x29420008  slti        $v0, $t2, 0x8
    ctx->pc = 0x148070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x148074: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x148074u;
    {
        const bool branch_taken_0x148074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148074) {
            ctx->pc = 0x148078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148074u;
            // 0x148078: 0x10b4023  subu        $t0, $t0, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148090u;
            return;
        }
    }
    ctx->pc = 0x14807Cu;
    // 0x14807c: 0xa1300  sll         $v0, $t2, 12
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 12));
    // 0x148080: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x148080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x148084: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x148084u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x148088: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x148088u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x14808c: 0x10b4023  subu        $t0, $t0, $t3
    ctx->pc = 0x14808cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    ctx->pc = 0x148090u;
}
