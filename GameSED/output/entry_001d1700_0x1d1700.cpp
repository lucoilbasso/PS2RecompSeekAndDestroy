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

// Function: entry_001d1700
// Address: 0x1d1700 - 0x1d1740
void entry_001d1700_0x1d1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1700_0x1d1700");
#endif

    switch (ctx->pc) {
        case 0x1d1728u: goto label_1d1728;
        default: break;
    }

    ctx->pc = 0x1d1700u;

    // 0x1d1700: 0x36f70100  ori         $s7, $s7, 0x100
    ctx->pc = 0x1d1700u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)256);
    // 0x1d1704: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x1d1704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1d1708: 0xdfa501f8  ld          $a1, 0x1F8($sp)
    ctx->pc = 0x1d1708u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d170c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d170cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1710: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d1710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1714: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x1d1714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d1718: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x1d1718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x1d171c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d171cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1720: 0xc074a4e  jal         func_1D2938
    ctx->pc = 0x1D1720u;
    SET_GPR_U32(ctx, 31, 0x1D1728u);
    ctx->pc = 0x1D1724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1720u;
    // 0x1d1724: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2938u, 0x1D1720u, 0x1D1728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1728u;
label_1d1728:
    // 0x1d1728: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d1728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d172c: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x1d172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1d1730: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1730u;
    {
        const bool branch_taken_0x1d1730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1730u;
        // 0x1d1734: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1730) {
            ctx->pc = 0x1D1740u;
            return;
        }
    }
    ctx->pc = 0x1D1738u;
    // 0x1d1738: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1738u;
    {
        const bool branch_taken_0x1d1738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1738u;
        // 0x1d173c: 0x8fa701dc  lw          $a3, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1738) {
            ctx->pc = 0x1D1770u;
            return;
        }
    }
    ctx->pc = 0x1D1740u;
}
