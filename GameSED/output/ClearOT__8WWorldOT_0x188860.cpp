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

// Function: ClearOT__8WWorldOT
// Address: 0x188860 - 0x1888a4
void ClearOT__8WWorldOT_0x188860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearOT__8WWorldOT_0x188860");
#endif

    switch (ctx->pc) {
        case 0x188880u: goto label_188880;
        default: break;
    }

    ctx->pc = 0x188860u;

    // 0x188860: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x188860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x188864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188868: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x188868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x18886c: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18886Cu;
    {
        const bool branch_taken_0x18886c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x188870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18886Cu;
        // 0x188870: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18886c) {
            ctx->pc = 0x18889Cu;
            goto label_18889c;
        }
    }
    ctx->pc = 0x188874u;
    // 0x188874: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x188874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x188878: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x188878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x18887c: 0x0  nop
    ctx->pc = 0x18887cu;
    // NOP
label_188880:
    // 0x188880: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x188880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x188884: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x188884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x188888: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x188888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18888c: 0x0  nop
    ctx->pc = 0x18888cu;
    // NOP
    // 0x188890: 0x0  nop
    ctx->pc = 0x188890u;
    // NOP
    // 0x188894: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x188894u;
    {
        const bool branch_taken_0x188894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188894u;
        // 0x188898: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188894) {
            ctx->pc = 0x188880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188880;
        }
    }
    ctx->pc = 0x18889Cu;
label_18889c:
    // 0x18889c: 0x3e00008  jr          $ra
    ctx->pc = 0x18889Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18889Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1888A4u;
}
