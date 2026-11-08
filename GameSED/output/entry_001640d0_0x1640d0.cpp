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

// Function: entry_001640d0
// Address: 0x1640d0 - 0x1640f0
void entry_001640d0_0x1640d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001640d0_0x1640d0");
#endif

    ctx->pc = 0x1640d0u;

    // 0x1640d0: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1640D0u;
    {
        const bool branch_taken_0x1640d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640D0u;
        // 0x1640d4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640d0) {
            ctx->pc = 0x164258u;
            return;
        }
    }
    ctx->pc = 0x1640D8u;
    // 0x1640d8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1640d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1640dc: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1640DCu;
    {
        const bool branch_taken_0x1640dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1640E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640DCu;
        // 0x1640e0: 0x2463ffee  addiu       $v1, $v1, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640dc) {
            ctx->pc = 0x1642E8u;
            return;
        }
    }
    ctx->pc = 0x1640E4u;
    // 0x1640e4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1640E4u;
    {
        const bool branch_taken_0x1640e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640E4u;
        // 0x1640e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640e4) {
            ctx->pc = 0x1642F8u;
            return;
        }
    }
    ctx->pc = 0x1640ECu;
    // 0x1640ec: 0x0  nop
    ctx->pc = 0x1640ecu;
    // NOP
    ctx->pc = 0x1640f0u;
}
