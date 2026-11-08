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

// Function: Cmd_LOAD_CHAR_Entry__FP15BsSCDEntControl
// Address: 0x145e18 - 0x145e54
void Cmd_LOAD_CHAR_Entry__FP15BsSCDEntControl_0x145e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_CHAR_Entry__FP15BsSCDEntControl_0x145e18");
#endif

    switch (ctx->pc) {
        case 0x145e38u: goto label_145e38;
        case 0x145e48u: goto label_145e48;
        default: break;
    }

    ctx->pc = 0x145e18u;

    // 0x145e18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x145e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x145e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145e20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x145e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x145e24: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x145e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x145e28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145E28u;
    {
        const bool branch_taken_0x145e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x145e28) {
            ctx->pc = 0x145E40u;
            goto label_145e40;
        }
    }
    ctx->pc = 0x145E30u;
    // 0x145e30: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x145E30u;
    SET_GPR_U32(ctx, 31, 0x145E38u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x145E30u, 0x145E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E38u;
label_145e38:
    // 0x145e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145E38u;
    {
        const bool branch_taken_0x145e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E38u;
        // 0x145e3c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e38) {
            ctx->pc = 0x145E4Cu;
            goto label_145e4c;
        }
    }
    ctx->pc = 0x145E40u;
label_145e40:
    // 0x145e40: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x145E40u;
    SET_GPR_U32(ctx, 31, 0x145E48u);
    ctx->pc = 0x145E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E40u;
    // 0x145e44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x145E40u, 0x145E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E48u;
label_145e48:
    // 0x145e48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x145e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_145e4c:
    // 0x145e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x145E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E4Cu;
        // 0x145e50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145E54u;
}
