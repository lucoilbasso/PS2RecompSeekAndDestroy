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

// Function: SequenceCtrlPop__10WcSequence
// Address: 0x199aa8 - 0x199af4
void SequenceCtrlPop__10WcSequence_0x199aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SequenceCtrlPop__10WcSequence_0x199aa8");
#endif

    switch (ctx->pc) {
        case 0x199ad8u: goto label_199ad8;
        default: break;
    }

    ctx->pc = 0x199aa8u;

    // 0x199aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ab4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x199ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x199ab8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x199ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x199abc: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x199abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x199ac0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199AC0u;
    {
        const bool branch_taken_0x199ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199ac0) {
            ctx->pc = 0x199AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199AC0u;
            // 0x199ac4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199ADCu;
            goto label_199adc;
        }
    }
    ctx->pc = 0x199AC8u;
    // 0x199ac8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x199ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x199acc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x199ad0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x199AD0u;
    SET_GPR_U32(ctx, 31, 0x199AD8u);
    ctx->pc = 0x199AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199AD0u;
    // 0x199ad4: 0x24a58478  addiu       $a1, $a1, -0x7B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x199AD0u, 0x199AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AD8u;
label_199ad8:
    // 0x199ad8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x199ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_199adc:
    // 0x199adc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x199adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199ae0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199ae4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x199ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x199ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199aec: 0x3e00008  jr          $ra
    ctx->pc = 0x199AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AECu;
        // 0x199af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199AF4u;
}
