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

// Function: entry_001a1560
// Address: 0x1a1560 - 0x1a15a4
void entry_001a1560_0x1a1560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1560_0x1a1560");
#endif

    switch (ctx->pc) {
        case 0x1a1584u: goto label_1a1584;
        case 0x1a15a0u: goto label_1a15a0;
        default: break;
    }

    ctx->pc = 0x1a1560u;

label_1a1560:
    // 0x1a1560: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a1560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1568: 0x0  nop
    ctx->pc = 0x1a1568u;
    // NOP
    // 0x1a156c: 0x0  nop
    ctx->pc = 0x1a156cu;
    // NOP
    // 0x1a1570: 0x0  nop
    ctx->pc = 0x1a1570u;
    // NOP
    // 0x1a1574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1574u;
    {
        const bool branch_taken_0x1a1574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1574u;
        // 0x1a1578: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1574) {
            ctx->pc = 0x1A1560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1560;
        }
    }
    ctx->pc = 0x1A157Cu;
    // 0x1a157c: 0xc0683f0  jal         func_1A0FC0
    ctx->pc = 0x1A157Cu;
    SET_GPR_U32(ctx, 31, 0x1A1584u);
    ctx->pc = 0x1A1580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A157Cu;
    // 0x1a1580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FC0u, 0x1A157Cu, 0x1A1584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1584u;
label_1a1584:
    // 0x1a1584: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1584u;
    {
        const bool branch_taken_0x1a1584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1584) {
            ctx->pc = 0x1A1588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1584u;
            // 0x1a1588: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A15A4u;
            return;
        }
    }
    ctx->pc = 0x1A158Cu;
    // 0x1a158c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a158cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1594: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x1a1594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
    // 0x1a1598: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1598u;
    SET_GPR_U32(ctx, 31, 0x1A15A0u);
    ctx->pc = 0x1A159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1598u;
    // 0x1a159c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1598u, 0x1A15A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15A0u;
label_1a15a0:
    // 0x1a15a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1a15a4u;
}
