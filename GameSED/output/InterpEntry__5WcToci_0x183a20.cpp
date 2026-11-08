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

// Function: InterpEntry__5WcToci
// Address: 0x183a20 - 0x183ac0
void InterpEntry__5WcToci_0x183a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InterpEntry__5WcToci_0x183a20");
#endif

    switch (ctx->pc) {
        case 0x183a5cu: goto label_183a5c;
        case 0x183a70u: goto label_183a70;
        case 0x183aa8u: goto label_183aa8;
        default: break;
    }

    ctx->pc = 0x183a20u;

    // 0x183a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x183a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x183a24: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x183a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x183a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a2c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x183a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x183a30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x183a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a34: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x183a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x183a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a3c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x183a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x183a40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x183a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x183a44: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x183a44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183a48: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183A48u;
    {
        const bool branch_taken_0x183a48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x183A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A48u;
        // 0x183a4c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a48) {
            ctx->pc = 0x183A70u;
            goto label_183a70;
        }
    }
    ctx->pc = 0x183A50u;
    // 0x183a50: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x183a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x183a54: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x183A54u;
    SET_GPR_U32(ctx, 31, 0x183A5Cu);
    ctx->pc = 0x183A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A54u;
    // 0x183a58: 0x24847e28  addiu       $a0, $a0, 0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x183A54u, 0x183A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A5Cu;
label_183a5c:
    // 0x183a5c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x183a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x183a60: 0x24a57e38  addiu       $a1, $a1, 0x7E38
    ctx->pc = 0x183a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32312));
    // 0x183a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a68: 0xc068186  jal         func_1A0618
    ctx->pc = 0x183A68u;
    SET_GPR_U32(ctx, 31, 0x183A70u);
    ctx->pc = 0x183A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A68u;
    // 0x183a6c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x183A68u, 0x183A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A70u;
label_183a70:
    // 0x183a70: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x183a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x183a74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x183a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a78: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x183a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x183a7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x183a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a80: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x183a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x183a84: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x183a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x183a88: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x183a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x183a8c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x183a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x183a90: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x183a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x183a94: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x183a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x183a98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x183a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x183a9c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x183a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x183aa0: 0xc069626  jal         func_1A5898
    ctx->pc = 0x183AA0u;
    SET_GPR_U32(ctx, 31, 0x183AA8u);
    ctx->pc = 0x183AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AA0u;
    // 0x183aa4: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x183AA0u, 0x183AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AA8u;
label_183aa8:
    // 0x183aa8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x183aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183aac: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x183aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x183ab0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x183ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183ab4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x183ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x183AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AB8u;
        // 0x183abc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AC0u;
}
