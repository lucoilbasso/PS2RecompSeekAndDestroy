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

// Function: entry_001b1720
// Address: 0x1b1720 - 0x1b1760
void entry_001b1720_0x1b1720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1720_0x1b1720");
#endif

    switch (ctx->pc) {
        case 0x1b1740u: goto label_1b1740;
        case 0x1b1750u: goto label_1b1750;
        case 0x1b1758u: goto label_1b1758;
        default: break;
    }

    ctx->pc = 0x1b1720u;

    // 0x1b1720: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1728: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1b1728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1b172c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1738: 0xc06df7e  jal         func_1B7DF8
    ctx->pc = 0x1B1738u;
    SET_GPR_U32(ctx, 31, 0x1B1740u);
    ctx->pc = 0x1B173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1738u;
    // 0x1b173c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF8u, 0x1B1738u, 0x1B1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1740u;
label_1b1740:
    // 0x1b1740: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1740u;
    {
        const bool branch_taken_0x1b1740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1740) {
            ctx->pc = 0x1B1760u;
            return;
        }
    }
    ctx->pc = 0x1B1748u;
    // 0x1b1748: 0xc06c4a4  jal         func_1B1290
    ctx->pc = 0x1B1748u;
    SET_GPR_U32(ctx, 31, 0x1B1750u);
    ctx->pc = 0x1B174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1748u;
    // 0x1b174c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1290u, 0x1B1748u, 0x1B1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1750u;
label_1b1750:
    // 0x1b1750: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B1750u;
    SET_GPR_U32(ctx, 31, 0x1B1758u);
    ctx->pc = 0x1B1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1750u;
    // 0x1b1754: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B1750u, 0x1B1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1758u;
label_1b1758:
    // 0x1b1758: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B1758u;
    {
        const bool branch_taken_0x1b1758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1758u;
        // 0x1b175c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1758) {
            ctx->pc = 0x1B17B4u;
            return;
        }
    }
    ctx->pc = 0x1B1760u;
}
