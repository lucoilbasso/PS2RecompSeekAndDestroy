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

// Function: Cmd_CAMERA_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x1107c0 - 0x110814
void Cmd_CAMERA_MAKE_Entry__FP15BsSCDEntControl_0x1107c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CAMERA_MAKE_Entry__FP15BsSCDEntControl_0x1107c0");
#endif

    switch (ctx->pc) {
        case 0x1107dcu: goto label_1107dc;
        case 0x1107e4u: goto label_1107e4;
        case 0x110800u: goto label_110800;
        default: break;
    }

    ctx->pc = 0x1107c0u;

    // 0x1107c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1107c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1107c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1107c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1107c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1107c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1107cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1107ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1107d0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1107d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1107d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1107D4u;
    SET_GPR_U32(ctx, 31, 0x1107DCu);
    ctx->pc = 0x1107D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107D4u;
    // 0x1107d8: 0x8c510044  lw          $s1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1107D4u, 0x1107DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107DCu;
label_1107dc:
    // 0x1107dc: 0xc050654  jal         func_141950
    ctx->pc = 0x1107DCu;
    SET_GPR_U32(ctx, 31, 0x1107E4u);
    ctx->pc = 0x1107E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107DCu;
    // 0x1107e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141950u, 0x1107DCu, 0x1107E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107E4u;
label_1107e4:
    // 0x1107e4: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x1107e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1107e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1107e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1107ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1107f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107f4: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1107f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1107f8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x1107F8u;
    SET_GPR_U32(ctx, 31, 0x110800u);
    ctx->pc = 0x1107FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107F8u;
    // 0x1107fc: 0xac430150  sw          $v1, 0x150($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x1107F8u, 0x110800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110800u;
label_110800:
    // 0x110800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11080c: 0x3e00008  jr          $ra
    ctx->pc = 0x11080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11080Cu;
        // 0x110810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110814u;
}
