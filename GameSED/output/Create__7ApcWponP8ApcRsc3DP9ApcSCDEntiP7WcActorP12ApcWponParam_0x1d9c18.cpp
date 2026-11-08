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

// Function: Create__7ApcWponP8ApcRsc3DP9ApcSCDEntiP7WcActorP12ApcWponParam
// Address: 0x1d9c18 - 0x1d9d08
void Create__7ApcWponP8ApcRsc3DP9ApcSCDEntiP7WcActorP12ApcWponParam_0x1d9c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__7ApcWponP8ApcRsc3DP9ApcSCDEntiP7WcActorP12ApcWponParam_0x1d9c18");
#endif

    switch (ctx->pc) {
        case 0x1d9c8cu: goto label_1d9c8c;
        case 0x1d9ca0u: goto label_1d9ca0;
        case 0x1d9ca8u: goto label_1d9ca8;
        case 0x1d9cd4u: goto label_1d9cd4;
        case 0x1d9ce0u: goto label_1d9ce0;
        default: break;
    }

    ctx->pc = 0x1d9c18u;

    // 0x1d9c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9c1c: 0x8f838b2c  lw          $v1, -0x74D4($gp)
    ctx->pc = 0x1d9c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1d9c20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9c24: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1d9c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9c2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d9c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9c34: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d9c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d9c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d9c3c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d9c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d9c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d9c44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d9c44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9c4c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1d9c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d9c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d9c54: 0x24042118  addiu       $a0, $zero, 0x2118
    ctx->pc = 0x1d9c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x1d9c58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d9c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d9c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d9c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c64: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1d9c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c68: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D9C68u;
    {
        const bool branch_taken_0x1d9c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C68u;
        // 0x1d9c6c: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c68) {
            ctx->pc = 0x1D9C98u;
            goto label_1d9c98;
        }
    }
    ctx->pc = 0x1D9C70u;
    // 0x1d9c70: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x1d9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1d9c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c78: 0x8c63026c  lw          $v1, 0x26C($v1)
    ctx->pc = 0x1d9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x1d9c7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d9c80: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x1d9c80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x1d9c84: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x1D9C84u;
    SET_GPR_U32(ctx, 31, 0x1D9C8Cu);
    ctx->pc = 0x1D9C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9C84u;
    // 0x1d9c88: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x1D9C84u, 0x1D9C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C8Cu;
label_1d9c8c:
    // 0x1d9c8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9c90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D9C90u;
    {
        const bool branch_taken_0x1d9c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C90u;
        // 0x1d9c94: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c90) {
            ctx->pc = 0x1D9CD4u;
            goto label_1d9cd4;
        }
    }
    ctx->pc = 0x1D9C98u;
label_1d9c98:
    // 0x1d9c98: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D9C98u;
    SET_GPR_U32(ctx, 31, 0x1D9CA0u);
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D9C98u, 0x1D9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CA0u;
label_1d9ca0:
    // 0x1d9ca0: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D9CA0u;
    SET_GPR_U32(ctx, 31, 0x1D9CA8u);
    ctx->pc = 0x1D9CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CA0u;
    // 0x1d9ca4: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D9CA0u, 0x1D9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CA8u;
label_1d9ca8:
    // 0x1d9ca8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1d9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1d9cac: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x1d9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x1d9cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cb4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1d9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1d9cb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d9cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cbc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d9cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cc0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d9cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cc4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1d9cc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cc8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1d9cc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ccc: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x1D9CCCu;
    SET_GPR_U32(ctx, 31, 0x1D9CD4u);
    ctx->pc = 0x1D9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CCCu;
    // 0x1d9cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x1D9CCCu, 0x1D9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CD4u;
label_1d9cd4:
    // 0x1d9cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cd8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1D9CD8u;
    SET_GPR_U32(ctx, 31, 0x1D9CE0u);
    ctx->pc = 0x1D9CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CD8u;
    // 0x1d9cdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1D9CD8u, 0x1D9CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CE0u;
label_1d9ce0:
    // 0x1d9ce0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d9ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9cec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9cf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9cf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9cf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d9cf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9cf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d9cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d9cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D00u;
        // 0x1d9d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D08u;
}
