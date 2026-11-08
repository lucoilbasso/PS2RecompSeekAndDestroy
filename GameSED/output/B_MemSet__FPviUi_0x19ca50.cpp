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

// Function: B_MemSet__FPviUi
// Address: 0x19ca50 - 0x19ca84
void B_MemSet__FPviUi_0x19ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_MemSet__FPviUi_0x19ca50");
#endif

    switch (ctx->pc) {
        case 0x19ca60u: goto label_19ca60;
        default: break;
    }

    ctx->pc = 0x19ca50u;

    // 0x19ca50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19ca50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca54: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x19CA54u;
    {
        const bool branch_taken_0x19ca54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA54u;
        // 0x19ca58: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca54) {
            ctx->pc = 0x19CA7Cu;
            goto label_19ca7c;
        }
    }
    ctx->pc = 0x19CA5Cu;
    // 0x19ca5c: 0x0  nop
    ctx->pc = 0x19ca5cu;
    // NOP
label_19ca60:
    // 0x19ca60: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19ca64: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x19ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19ca68: 0x0  nop
    ctx->pc = 0x19ca68u;
    // NOP
    // 0x19ca6c: 0x0  nop
    ctx->pc = 0x19ca6cu;
    // NOP
    // 0x19ca70: 0x0  nop
    ctx->pc = 0x19ca70u;
    // NOP
    // 0x19ca74: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CA74u;
    {
        const bool branch_taken_0x19ca74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA74u;
        // 0x19ca78: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca74) {
            ctx->pc = 0x19CA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ca60;
        }
    }
    ctx->pc = 0x19CA7Cu;
label_19ca7c:
    // 0x19ca7c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CA84u;
}
