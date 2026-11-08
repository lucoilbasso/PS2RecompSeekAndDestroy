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

// Function: Cmd_FRAME_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x193428 - 0x1934a8
void Cmd_FRAME_MAKE_Entry__FP15BsSCDEntControl_0x193428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FRAME_MAKE_Entry__FP15BsSCDEntControl_0x193428");
#endif

    switch (ctx->pc) {
        case 0x193448u: goto label_193448;
        case 0x193454u: goto label_193454;
        case 0x19345cu: goto label_19345c;
        case 0x193474u: goto label_193474;
        case 0x193480u: goto label_193480;
        case 0x193490u: goto label_193490;
        default: break;
    }

    ctx->pc = 0x193428u;

    // 0x193428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19342c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193434: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x193434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x193438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19343c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x19343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x193440: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x193440u;
    SET_GPR_U32(ctx, 31, 0x193448u);
    ctx->pc = 0x193444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193440u;
    // 0x193444: 0x8c520044  lw          $s2, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x193440u, 0x193448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193448u;
label_193448:
    // 0x193448: 0x24040276  addiu       $a0, $zero, 0x276
    ctx->pc = 0x193448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x19344c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x19344Cu;
    SET_GPR_U32(ctx, 31, 0x193454u);
    ctx->pc = 0x193450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19344Cu;
    // 0x193450: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x19344Cu, 0x193454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193454u;
label_193454:
    // 0x193454: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x193454u;
    SET_GPR_U32(ctx, 31, 0x19345Cu);
    ctx->pc = 0x193458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193454u;
    // 0x193458: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x193454u, 0x19345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19345Cu;
label_19345c:
    // 0x19345c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19345cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193460: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x193460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x193464: 0x244205e0  addiu       $v0, $v0, 0x5E0
    ctx->pc = 0x193464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1504));
    // 0x193468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19346c: 0xc064a8a  jal         func_192A28
    ctx->pc = 0x19346Cu;
    SET_GPR_U32(ctx, 31, 0x193474u);
    ctx->pc = 0x193470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19346Cu;
    // 0x193470: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A28u, 0x19346Cu, 0x193474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193474u;
label_193474:
    // 0x193474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193478: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x193478u;
    SET_GPR_U32(ctx, 31, 0x193480u);
    ctx->pc = 0x19347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193478u;
    // 0x19347c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x193478u, 0x193480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193480u;
label_193480:
    // 0x193480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193488: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x193488u;
    SET_GPR_U32(ctx, 31, 0x193490u);
    ctx->pc = 0x19348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193488u;
    // 0x19348c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x193488u, 0x193490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193490u;
label_193490:
    // 0x193490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193498: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19349c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1934a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1934A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1934A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934A0u;
        // 0x1934a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1934A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1934A8u;
}
