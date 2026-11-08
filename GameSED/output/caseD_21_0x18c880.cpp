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

// Function: caseD_21
// Address: 0x18c880 - 0x18c8a8
void caseD_21_0x18c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_21_0x18c880");
#endif

    switch (ctx->pc) {
        case 0x18c898u: goto label_18c898;
        default: break;
    }

    ctx->pc = 0x18c880u;

    // 0x18c880: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x18c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c888: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x18c888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x18c88c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18c88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18c890: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C890u;
    SET_GPR_U32(ctx, 31, 0x18C898u);
    ctx->pc = 0x18C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C890u;
    // 0x18c894: 0x8c640044  lw          $a0, 0x44($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C890u, 0x18C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C898u;
label_18c898:
    // 0x18c898: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c89c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x18c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18c8a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18C8A0u;
    {
        const bool branch_taken_0x18c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8A0u;
        // 0x18c8a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8a0) {
            ctx->pc = 0x18C8E4u;
            return;
        }
    }
    ctx->pc = 0x18C8A8u;
}
