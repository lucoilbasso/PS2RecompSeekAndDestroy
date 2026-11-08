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

// Function: Clear__9ApcObjRsc
// Address: 0x1d6810 - 0x1d6884
void Clear__9ApcObjRsc_0x1d6810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9ApcObjRsc_0x1d6810");
#endif

    ctx->pc = 0x1d6810u;

    // 0x1d6810: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x1d6810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1d6814: 0x24830058  addiu       $v1, $a0, 0x58
    ctx->pc = 0x1d6814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1d6818: 0x24850068  addiu       $a1, $a0, 0x68
    ctx->pc = 0x1d6818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x1d681c: 0x24860060  addiu       $a2, $a0, 0x60
    ctx->pc = 0x1d681cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1d6820: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1d6820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1d6824: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1d6824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1d6828: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1d6828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1d682c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1d682cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1d6830: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1d6830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1d6834: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1d6834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1d6838: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1d6838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1d683c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1d683cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1d6840: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d6840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d6844: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d6844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d6848: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d6848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d684c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d684cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d6850: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d6850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1d6854: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1d6854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1d6858: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d6858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1d685c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1d685cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1d6860: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1d6860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1d6864: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1d6864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x1d6868: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1d6868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1d686c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1d686cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1d6870: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1d6870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1d6874: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1d6874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1d6878: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1d6878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1d687c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D687Cu;
        // 0x1d6880: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D687Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6884u;
}
