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

// Function: entry_001c8b4c
// Address: 0x1c8b4c - 0x1c8b90
void entry_001c8b4c_0x1c8b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8b4c_0x1c8b4c");
#endif

    ctx->pc = 0x1c8b4cu;

    // 0x1c8b4c: 0x1012  mflo        $v0
    ctx->pc = 0x1c8b4cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8b50: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8b50u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8b54: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1c8b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8b58: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8b5c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c8b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8b60: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c8b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8b64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8B64u;
    {
        const bool branch_taken_0x1c8b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B64u;
        // 0x1c8b68: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b64) {
            ctx->pc = 0x1C8B90u;
            return;
        }
    }
    ctx->pc = 0x1C8B6Cu;
    // 0x1c8b6c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8b70: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1c8b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8b74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8B74u;
    {
        const bool branch_taken_0x1c8b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B74u;
        // 0x1c8b78: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b74) {
            ctx->pc = 0x1C8B90u;
            return;
        }
    }
    ctx->pc = 0x1C8B7Cu;
    // 0x1c8b7c: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c8b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8b80: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1c8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8b84: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c8b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c8b88: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c8b88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1c8b8c: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1c8b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->pc = 0x1c8b90u;
}
