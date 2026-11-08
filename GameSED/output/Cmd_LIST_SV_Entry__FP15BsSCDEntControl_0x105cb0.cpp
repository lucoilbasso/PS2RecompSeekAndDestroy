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

// Function: Cmd_LIST_SV_Entry__FP15BsSCDEntControl
// Address: 0x105cb0 - 0x105d34
void Cmd_LIST_SV_Entry__FP15BsSCDEntControl_0x105cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIST_SV_Entry__FP15BsSCDEntControl_0x105cb0");
#endif

    switch (ctx->pc) {
        case 0x105cccu: goto label_105ccc;
        case 0x105cf0u: goto label_105cf0;
        case 0x105d04u: goto label_105d04;
        case 0x105d0cu: goto label_105d0c;
        default: break;
    }

    ctx->pc = 0x105cb0u;

    // 0x105cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105cb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105cb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105cc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105cc4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105CC4u;
    SET_GPR_U32(ctx, 31, 0x105CCCu);
    ctx->pc = 0x105CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CC4u;
    // 0x105cc8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105CC4u, 0x105CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CCCu;
label_105ccc:
    // 0x105ccc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cd0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x105cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x105cd4: 0x2e220401  sltiu       $v0, $s1, 0x401
    ctx->pc = 0x105cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x105cd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105CDCu;
    {
        const bool branch_taken_0x105cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CDCu;
        // 0x105ce0: 0x24843818  addiu       $a0, $a0, 0x3818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cdc) {
            ctx->pc = 0x105D04u;
            goto label_105d04;
        }
    }
    ctx->pc = 0x105CE4u;
    // 0x105ce4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x105ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105ce8: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x105CE8u;
    SET_GPR_U32(ctx, 31, 0x105CF0u);
    ctx->pc = 0x105CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CE8u;
    // 0x105cec: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x105CE8u, 0x105CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CF0u;
label_105cf0:
    // 0x105cf0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x105cf4: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x105cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x105cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cfc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x105CFCu;
    SET_GPR_U32(ctx, 31, 0x105D04u);
    ctx->pc = 0x105D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105CFCu;
    // 0x105d00: 0x24a5d098  addiu       $a1, $a1, -0x2F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x105CFCu, 0x105D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D04u;
label_105d04:
    // 0x105d04: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x105D04u;
    SET_GPR_U32(ctx, 31, 0x105D0Cu);
    ctx->pc = 0x105D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105D04u;
    // 0x105d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x105D04u, 0x105D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D0Cu;
label_105d0c:
    // 0x105d0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x105d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x105d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105d18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105d1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105d20: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x105d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x105d24: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x105d28: 0xac22dc00  sw          $v0, -0x2400($at)
    ctx->pc = 0x105d28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958080), GPR_U32(ctx, 2));
    // 0x105d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x105D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D2Cu;
        // 0x105d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D34u;
}
