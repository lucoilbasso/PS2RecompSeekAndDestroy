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

// Function: strFileClose
// Address: 0x174f00 - 0x174f54
void strFileClose_0x174f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strFileClose_0x174f00");
#endif

    switch (ctx->pc) {
        case 0x174f24u: goto label_174f24;
        case 0x174f2cu: goto label_174f2c;
        case 0x174f40u: goto label_174f40;
        default: break;
    }

    ctx->pc = 0x174f00u;

    // 0x174f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174f08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174f10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x174f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174f14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174F14u;
    {
        const bool branch_taken_0x174f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174f14) {
            ctx->pc = 0x174F38u;
            goto label_174f38;
        }
    }
    ctx->pc = 0x174F1Cu;
    // 0x174f1c: 0xc06ed70  jal         func_1BB5C0
    ctx->pc = 0x174F1Cu;
    SET_GPR_U32(ctx, 31, 0x174F24u);
    ctx->pc = 0x1BB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB5C0u, 0x174F1Cu, 0x174F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F24u;
label_174f24:
    // 0x174f24: 0xc06d60c  jal         func_1B5830
    ctx->pc = 0x174F24u;
    SET_GPR_U32(ctx, 31, 0x174F2Cu);
    ctx->pc = 0x174F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F24u;
    // 0x174f28: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5830u, 0x174F24u, 0x174F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F2Cu;
label_174f2c:
    // 0x174f2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x174F2Cu;
    {
        const bool branch_taken_0x174f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F2Cu;
        // 0x174f30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f2c) {
            ctx->pc = 0x174F44u;
            goto label_174f44;
        }
    }
    ctx->pc = 0x174F34u;
    // 0x174f34: 0x0  nop
    ctx->pc = 0x174f34u;
    // NOP
label_174f38:
    // 0x174f38: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x174F38u;
    SET_GPR_U32(ctx, 31, 0x174F40u);
    ctx->pc = 0x174F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F38u;
    // 0x174f3c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x174F38u, 0x174F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F40u;
label_174f40:
    // 0x174f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174f44:
    // 0x174f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174f48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x174F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F4Cu;
        // 0x174f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174F54u;
}
