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

// Function: __tf9ApcDisp3d
// Address: 0x1d7b68 - 0x1d7bb8
void ps2___tf9ApcDisp3d_0x1d7b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcDisp3d_0x1d7b68");
#endif

    switch (ctx->pc) {
        case 0x1d7b8cu: goto label_1d7b8c;
        case 0x1d7ba4u: goto label_1d7ba4;
        default: break;
    }

    ctx->pc = 0x1d7b68u;

    // 0x1d7b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7b6c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d7b70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7b74: 0x24500730  addiu       $s0, $v0, 0x730
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    // 0x1d7b78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410730u));
    // 0x1d7b7c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7B7Cu;
    {
        const bool branch_taken_0x1d7b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B7Cu;
        // 0x1d7b80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b7c) {
            ctx->pc = 0x1D7BA4u;
            goto label_1d7ba4;
        }
    }
    ctx->pc = 0x1D7B84u;
    // 0x1d7b84: 0xc07760e  jal         func_1DD838
    ctx->pc = 0x1D7B84u;
    SET_GPR_U32(ctx, 31, 0x1D7B8Cu);
    ctx->pc = 0x1DD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD838u, 0x1D7B84u, 0x1D7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B8Cu;
label_1d7b8c:
    // 0x1d7b8c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7b90: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d7b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d7b94: 0x24a53e38  addiu       $a1, $a1, 0x3E38
    ctx->pc = 0x1d7b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15928));
    // 0x1d7b98: 0x24c615e8  addiu       $a2, $a2, 0x15E8
    ctx->pc = 0x1d7b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5608));
    // 0x1d7b9c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7BA4u);
    ctx->pc = 0x1D7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B9Cu;
    // 0x1d7ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D7B9Cu, 0x1D7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BA4u;
label_1d7ba4:
    // 0x1d7ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7bac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BB0u;
        // 0x1d7bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7BB8u;
}
