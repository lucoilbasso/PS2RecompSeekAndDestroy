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

// Function: entry_0013f0bc
// Address: 0x13f0bc - 0x13f0e0
void entry_0013f0bc_0x13f0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f0bc_0x13f0bc");
#endif

    ctx->pc = 0x13f0bcu;

    // 0x13f0bc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13f0bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f0c0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x13f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x13f0c4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x13f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13f0c8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F0C8u;
    {
        const bool branch_taken_0x13f0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0C8u;
        // 0x13f0cc: 0x25050040  addiu       $a1, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0c8) {
            ctx->pc = 0x13F0E0u;
            return;
        }
    }
    ctx->pc = 0x13F0D0u;
    // 0x13f0d0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x13f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x13f0d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13F0D4u;
    {
        const bool branch_taken_0x13f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0D4u;
        // 0x13f0d8: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0d4) {
            ctx->pc = 0x13F0E4u;
            return;
        }
    }
    ctx->pc = 0x13F0DCu;
    // 0x13f0dc: 0x0  nop
    ctx->pc = 0x13f0dcu;
    // NOP
    ctx->pc = 0x13f0e0u;
}
