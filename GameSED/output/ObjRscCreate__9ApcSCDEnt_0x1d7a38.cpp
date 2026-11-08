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

// Function: ObjRscCreate__9ApcSCDEnt
// Address: 0x1d7a38 - 0x1d7ab4
void ObjRscCreate__9ApcSCDEnt_0x1d7a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ObjRscCreate__9ApcSCDEnt_0x1d7a38");
#endif

    switch (ctx->pc) {
        case 0x1d7a68u: goto label_1d7a68;
        case 0x1d7a70u: goto label_1d7a70;
        case 0x1d7a8cu: goto label_1d7a8c;
        case 0x1d7a98u: goto label_1d7a98;
        default: break;
    }

    ctx->pc = 0x1d7a38u;

    // 0x1d7a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7a40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d7a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d7a4c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1d7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d7a50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7a54: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1d7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1d7a58: 0x8e320040  lw          $s2, 0x40($s1)
    ctx->pc = 0x1d7a58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1d7a5c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d7a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d7a60: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D7A60u;
    SET_GPR_U32(ctx, 31, 0x1D7A68u);
    ctx->pc = 0x1D7A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A60u;
    // 0x1d7a64: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D7A60u, 0x1D7A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A68u;
label_1d7a68:
    // 0x1d7a68: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D7A68u;
    SET_GPR_U32(ctx, 31, 0x1D7A70u);
    ctx->pc = 0x1D7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A68u;
    // 0x1d7a6c: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D7A68u, 0x1D7A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A70u;
label_1d7a70:
    // 0x1d7a70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d7a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a78: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d7a7c: 0x2442e620  addiu       $v0, $v0, -0x19E0
    ctx->pc = 0x1d7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
    // 0x1d7a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a84: 0xc040152  jal         func_100548
    ctx->pc = 0x1D7A84u;
    SET_GPR_U32(ctx, 31, 0x1D7A8Cu);
    ctx->pc = 0x1D7A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A84u;
    // 0x1d7a88: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100548u, 0x1D7A84u, 0x1D7A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A8Cu;
label_1d7a8c:
    // 0x1d7a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a90: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D7A90u;
    SET_GPR_U32(ctx, 31, 0x1D7A98u);
    ctx->pc = 0x1D7A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A90u;
    // 0x1d7a94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D7A90u, 0x1D7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A98u;
label_1d7a98:
    // 0x1d7a98: 0xae300044  sw          $s0, 0x44($s1)
    ctx->pc = 0x1d7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
    // 0x1d7a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7aa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7aa8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AACu;
        // 0x1d7ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7AB4u;
}
