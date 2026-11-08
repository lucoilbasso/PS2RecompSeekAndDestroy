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

// Function: Cmd_STAGE_BG_Entry__FP15BsSCDEntControl
// Address: 0x148f48 - 0x148fbc
void Cmd_STAGE_BG_Entry__FP15BsSCDEntControl_0x148f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_BG_Entry__FP15BsSCDEntControl_0x148f48");
#endif

    switch (ctx->pc) {
        case 0x148f74u: goto label_148f74;
        case 0x148f7cu: goto label_148f7c;
        case 0x148f8cu: goto label_148f8c;
        case 0x148f98u: goto label_148f98;
        default: break;
    }

    ctx->pc = 0x148f48u;

    // 0x148f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x148f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x148f58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x148f58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x148f60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x148f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x148f64: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x148f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x148f68: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x148f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x148f6c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x148F6Cu;
    SET_GPR_U32(ctx, 31, 0x148F74u);
    ctx->pc = 0x148F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F6Cu;
    // 0x148f70: 0x8c710018  lw          $s1, 0x18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x148F6Cu, 0x148F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F74u;
label_148f74:
    // 0x148f74: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x148F74u;
    SET_GPR_U32(ctx, 31, 0x148F7Cu);
    ctx->pc = 0x148F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F74u;
    // 0x148f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x148F74u, 0x148F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F7Cu;
label_148f7c:
    // 0x148f7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148F7Cu;
    {
        const bool branch_taken_0x148f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F7Cu;
        // 0x148f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f7c) {
            ctx->pc = 0x148F90u;
            goto label_148f90;
        }
    }
    ctx->pc = 0x148F84u;
    // 0x148f84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x148F84u;
    SET_GPR_U32(ctx, 31, 0x148F8Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x148F84u, 0x148F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F8Cu;
label_148f8c:
    // 0x148f8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x148f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_148f90:
    // 0x148f90: 0xc05196c  jal         func_1465B0
    ctx->pc = 0x148F90u;
    SET_GPR_U32(ctx, 31, 0x148F98u);
    ctx->pc = 0x148F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F90u;
    // 0x148f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1465B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1465B0u, 0x148F90u, 0x148F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F98u;
label_148f98:
    // 0x148f98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x148f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x148f9c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x148f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x148fa0: 0xac22020c  sw          $v0, 0x20C($at)
    ctx->pc = 0x148fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 524), GPR_U32(ctx, 2));
    // 0x148fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148fac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x148facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148fb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x148fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x148FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FB4u;
        // 0x148fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148FBCu;
}
