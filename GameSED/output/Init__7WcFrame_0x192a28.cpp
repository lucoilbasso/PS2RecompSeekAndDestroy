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

// Function: Init__7WcFrame
// Address: 0x192a28 - 0x192aa0
void Init__7WcFrame_0x192a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcFrame_0x192a28");
#endif

    switch (ctx->pc) {
        case 0x192a4cu: goto label_192a4c;
        case 0x192a54u: goto label_192a54;
        case 0x192a7cu: goto label_192a7c;
        case 0x192a8cu: goto label_192a8c;
        default: break;
    }

    ctx->pc = 0x192a28u;

    // 0x192a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192a2c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x192a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x192a30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x192a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x192a34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192a3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x192a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192a40: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x192a40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x192a44: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x192A44u;
    SET_GPR_U32(ctx, 31, 0x192A4Cu);
    ctx->pc = 0x192A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A44u;
    // 0x192a48: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x192A44u, 0x192A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A4Cu;
label_192a4c:
    // 0x192a4c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x192A4Cu;
    SET_GPR_U32(ctx, 31, 0x192A54u);
    ctx->pc = 0x192A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A4Cu;
    // 0x192a50: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x192A4Cu, 0x192A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A54u;
label_192a54:
    // 0x192a54: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x192a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x192a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x192a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a60: 0x24a50330  addiu       $a1, $a1, 0x330
    ctx->pc = 0x192a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 816));
    // 0x192a64: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x192a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192a68: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x192a68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x192a6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x192a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x192a70: 0xa7a00002  sh          $zero, 0x2($sp)
    ctx->pc = 0x192a70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x192a74: 0xc062cb0  jal         func_18B2C0
    ctx->pc = 0x192A74u;
    SET_GPR_U32(ctx, 31, 0x192A7Cu);
    ctx->pc = 0x192A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A74u;
    // 0x192a78: 0xa7a00000  sh          $zero, 0x0($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x192A74u, 0x192A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A7Cu;
label_192a7c:
    // 0x192a7c: 0x24020276  addiu       $v0, $zero, 0x276
    ctx->pc = 0x192a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x192a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a84: 0xc064d90  jal         func_193640
    ctx->pc = 0x192A84u;
    SET_GPR_U32(ctx, 31, 0x192A8Cu);
    ctx->pc = 0x192A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A84u;
    // 0x192a88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193640u, 0x192A84u, 0x192A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A8Cu;
label_192a8c:
    // 0x192a8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x192a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x192a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192a94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a98: 0x3e00008  jr          $ra
    ctx->pc = 0x192A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A98u;
        // 0x192a9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192AA0u;
}
