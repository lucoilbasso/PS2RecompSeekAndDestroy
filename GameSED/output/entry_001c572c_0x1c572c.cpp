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

// Function: entry_001c572c
// Address: 0x1c572c - 0x1c5774
void entry_001c572c_0x1c572c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c572c_0x1c572c");
#endif

    switch (ctx->pc) {
        case 0x1c5734u: goto label_1c5734;
        case 0x1c575cu: goto label_1c575c;
        default: break;
    }

    ctx->pc = 0x1c572cu;

    // 0x1c572c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1C572Cu;
    SET_GPR_U32(ctx, 31, 0x1C5734u);
    ctx->pc = 0x1C5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C572Cu;
    // 0x1c5730: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1C572Cu, 0x1C5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5734u;
label_1c5734:
    // 0x1c5734: 0x26090400  addiu       $t1, $s0, 0x400
    ctx->pc = 0x1c5734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x1c5738: 0x2684ee40  addiu       $a0, $s4, -0x11C0
    ctx->pc = 0x1c5738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1c573c: 0x2667eec0  addiu       $a3, $s3, -0x1140
    ctx->pc = 0x1c573cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962880));
    // 0x1c5740: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c5740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c5744: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c5744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c5748: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c574c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c574cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c5750: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c5750u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5754: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5754u;
    SET_GPR_U32(ctx, 31, 0x1C575Cu);
    ctx->pc = 0x1C5758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5754u;
    // 0x1c5758: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5754u, 0x1C575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C575Cu;
label_1c575c:
    // 0x1c575c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c575cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5760: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5760u;
    {
        const bool branch_taken_0x1c5760 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5760u;
        // 0x1c5764: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5760) {
            ctx->pc = 0x1C5774u;
            return;
        }
    }
    ctx->pc = 0x1C5768u;
    // 0x1c5768: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c5768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c576c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C576Cu;
    {
        const bool branch_taken_0x1c576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C576Cu;
        // 0x1c5770: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c576c) {
            ctx->pc = 0x1C577Cu;
            return;
        }
    }
    ctx->pc = 0x1C5774u;
}
