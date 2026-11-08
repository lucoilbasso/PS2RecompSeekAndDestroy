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

// Function: ApMotionPartsForwardSetup__FP7WcActorP8WcEntity
// Address: 0x139c10 - 0x139ccc
void ApMotionPartsForwardSetup__FP7WcActorP8WcEntity_0x139c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionPartsForwardSetup__FP7WcActorP8WcEntity_0x139c10");
#endif

    switch (ctx->pc) {
        case 0x139c44u: goto label_139c44;
        case 0x139c58u: goto label_139c58;
        case 0x139c6cu: goto label_139c6c;
        default: break;
    }

    ctx->pc = 0x139c10u;

    // 0x139c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139c14: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x139c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139c1c: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x139c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x139c20: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x139c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    // 0x139c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x139c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x139c2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x139c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139c38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139c3c: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x139C3Cu;
    SET_GPR_U32(ctx, 31, 0x139C44u);
    ctx->pc = 0x139C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C3Cu;
    // 0x139c40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x139C3Cu, 0x139C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C44u;
label_139c44:
    // 0x139c44: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x139c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x139c48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x139c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139c4c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x139c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139c50: 0xc06164c  jal         func_185930
    ctx->pc = 0x139C50u;
    SET_GPR_U32(ctx, 31, 0x139C58u);
    ctx->pc = 0x139C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C50u;
    // 0x139c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x139C50u, 0x139C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C58u;
label_139c58:
    // 0x139c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c64: 0xc068866  jal         func_1A2198
    ctx->pc = 0x139C64u;
    SET_GPR_U32(ctx, 31, 0x139C6Cu);
    ctx->pc = 0x139C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C64u;
    // 0x139c68: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x139C64u, 0x139C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C6Cu;
label_139c6c:
    // 0x139c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x139c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c74: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x139c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x139c78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139c80: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x139c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x139c84: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139C84u;
    {
        const bool branch_taken_0x139c84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x139C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C84u;
        // 0x139c88: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c84) {
            ctx->pc = 0x139C94u;
            goto label_139c94;
        }
    }
    ctx->pc = 0x139C8Cu;
    // 0x139c8c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x139c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x139c90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x139c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139c94:
    // 0x139c94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x139c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x139c98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x139c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139c9c: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x139c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
    // 0x139ca0: 0xacd30018  sw          $s3, 0x18($a2)
    ctx->pc = 0x139ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 19));
    // 0x139ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139cb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x139cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139cb8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x139cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x139cbc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x139cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x139cc0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x139cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x139cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x139CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CC4u;
        // 0x139cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139CCCu;
}
