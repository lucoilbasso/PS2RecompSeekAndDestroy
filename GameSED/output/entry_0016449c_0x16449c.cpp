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

// Function: entry_0016449c
// Address: 0x16449c - 0x1644d0
void entry_0016449c_0x16449c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016449c_0x16449c");
#endif

    ctx->pc = 0x16449cu;

    // 0x16449c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1644a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1644a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1644a4: 0x481fff6  bgez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1644A4u;
    {
        const bool branch_taken_0x1644a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1644A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644A4u;
        // 0x1644a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644a4) {
            ctx->pc = 0x164480u;
            return;
        }
    }
    ctx->pc = 0x1644ACu;
    // 0x1644ac: 0x12c00023  beqz        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x1644ACu;
    {
        const bool branch_taken_0x1644ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1644ac) {
            ctx->pc = 0x16453Cu;
            return;
        }
    }
    ctx->pc = 0x1644B4u;
    // 0x1644b4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1644b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644b8: 0x26a611b0  addiu       $a2, $s5, 0x11B0
    ctx->pc = 0x1644b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4528));
    // 0x1644bc: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1644c0: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1644C0u;
    {
        const bool branch_taken_0x1644c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C0u;
        // 0x1644c4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644c0) {
            ctx->pc = 0x16453Cu;
            return;
        }
    }
    ctx->pc = 0x1644C8u;
    // 0x1644c8: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1644c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1644cc: 0x0  nop
    ctx->pc = 0x1644ccu;
    // NOP
    ctx->pc = 0x1644d0u;
}
