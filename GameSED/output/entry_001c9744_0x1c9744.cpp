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

// Function: entry_001c9744
// Address: 0x1c9744 - 0x1c9780
void entry_001c9744_0x1c9744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9744_0x1c9744");
#endif

    ctx->pc = 0x1c9744u;

    // 0x1c9744: 0x1012  mflo        $v0
    ctx->pc = 0x1c9744u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9748: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9748u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c974c: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1c974cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c9750: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9754: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c9754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9758: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c9758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c975c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C975Cu;
    {
        const bool branch_taken_0x1c975c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c975c) {
            ctx->pc = 0x1C9780u;
            return;
        }
    }
    ctx->pc = 0x1C9764u;
    // 0x1c9764: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c9764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c9768: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1c9768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c976c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C976Cu;
    {
        const bool branch_taken_0x1c976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C976Cu;
        // 0x1c9770: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c976c) {
            ctx->pc = 0x1C9780u;
            return;
        }
    }
    ctx->pc = 0x1C9774u;
    // 0x1c9774: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c9778: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c9778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c977c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c977cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->pc = 0x1c9780u;
}
