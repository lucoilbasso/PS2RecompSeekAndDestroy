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

// Function: entry_001c8bfc
// Address: 0x1c8bfc - 0x1c8c38
void entry_001c8bfc_0x1c8bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8bfc_0x1c8bfc");
#endif

    ctx->pc = 0x1c8bfcu;

    // 0x1c8bfc: 0x1012  mflo        $v0
    ctx->pc = 0x1c8bfcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8c00: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8c00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8c04: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1c8c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8c08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8c0c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c8c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8c10: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c8c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8C14u;
    {
        const bool branch_taken_0x1c8c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c14) {
            ctx->pc = 0x1C8C38u;
            return;
        }
    }
    ctx->pc = 0x1C8C1Cu;
    // 0x1c8c1c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8c20: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1c8c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8c24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8C24u;
    {
        const bool branch_taken_0x1c8c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C24u;
        // 0x1c8c28: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c24) {
            ctx->pc = 0x1C8C38u;
            return;
        }
    }
    ctx->pc = 0x1C8C2Cu;
    // 0x1c8c2c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1c8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c8c30: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c8c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c8c34: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c8c34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->pc = 0x1c8c38u;
}
