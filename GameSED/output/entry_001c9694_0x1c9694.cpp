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

// Function: entry_001c9694
// Address: 0x1c9694 - 0x1c96d8
void entry_001c9694_0x1c9694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9694_0x1c9694");
#endif

    ctx->pc = 0x1c9694u;

    // 0x1c9694: 0x1012  mflo        $v0
    ctx->pc = 0x1c9694u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9698: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9698u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c969c: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1c969cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c96a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c96a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c96a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c96a8: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c96a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c96ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C96ACu;
    {
        const bool branch_taken_0x1c96ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96ACu;
        // 0x1c96b0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96ac) {
            ctx->pc = 0x1C96D8u;
            return;
        }
    }
    ctx->pc = 0x1C96B4u;
    // 0x1c96b4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c96b8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1c96b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c96bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C96BCu;
    {
        const bool branch_taken_0x1c96bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96BCu;
        // 0x1c96c0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96bc) {
            ctx->pc = 0x1C96D8u;
            return;
        }
    }
    ctx->pc = 0x1C96C4u;
    // 0x1c96c4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c96c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c96c8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1c96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c96cc: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c96ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c96d0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c96d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1c96d4: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1c96d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->pc = 0x1c96d8u;
}
