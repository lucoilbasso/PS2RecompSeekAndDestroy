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

// Function: B_StrLen__FPc
// Address: 0x19c768 - 0x19c79c
void B_StrLen__FPc_0x19c768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_StrLen__FPc_0x19c768");
#endif

    switch (ctx->pc) {
        case 0x19c778u: goto label_19c778;
        default: break;
    }

    ctx->pc = 0x19c768u;

    // 0x19c768: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x19c768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c76c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19c770: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C770u;
    {
        const bool branch_taken_0x19c770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C770u;
        // 0x19c774: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c770) {
            ctx->pc = 0x19C794u;
            goto label_19c794;
        }
    }
    ctx->pc = 0x19C778u;
label_19c778:
    // 0x19c778: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x19c778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c77c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19c780: 0x0  nop
    ctx->pc = 0x19c780u;
    // NOP
    // 0x19c784: 0x0  nop
    ctx->pc = 0x19c784u;
    // NOP
    // 0x19c788: 0x0  nop
    ctx->pc = 0x19c788u;
    // NOP
    // 0x19c78c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C78Cu;
    {
        const bool branch_taken_0x19c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C78Cu;
        // 0x19c790: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c78c) {
            ctx->pc = 0x19C778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c778;
        }
    }
    ctx->pc = 0x19C794u;
label_19c794:
    // 0x19c794: 0x3e00008  jr          $ra
    ctx->pc = 0x19C794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C794u;
        // 0x19c798: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C79Cu;
}
