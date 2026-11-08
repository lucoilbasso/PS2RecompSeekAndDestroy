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

// Function: ApRsc3DStageTextureSetup__FP8ApcRsc3D
// Address: 0x143ad8 - 0x143bd0
void ApRsc3DStageTextureSetup__FP8ApcRsc3D_0x143ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DStageTextureSetup__FP8ApcRsc3D_0x143ad8");
#endif

    switch (ctx->pc) {
        case 0x143b04u: goto label_143b04;
        case 0x143b0cu: goto label_143b0c;
        case 0x143b14u: goto label_143b14;
        case 0x143b34u: goto label_143b34;
        case 0x143b48u: goto label_143b48;
        case 0x143b60u: goto label_143b60;
        default: break;
    }

    ctx->pc = 0x143ad8u;

    // 0x143ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ae8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143aec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143af4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x143af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x143af8: 0x8e51005c  lw          $s1, 0x5C($s2)
    ctx->pc = 0x143af8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x143afc: 0xc05fa10  jal         func_17E840
    ctx->pc = 0x143AFCu;
    SET_GPR_U32(ctx, 31, 0x143B04u);
    ctx->pc = 0x143B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AFCu;
    // 0x143b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E840u, 0x143AFCu, 0x143B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B04u;
label_143b04:
    // 0x143b04: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x143B04u;
    SET_GPR_U32(ctx, 31, 0x143B0Cu);
    ctx->pc = 0x143B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B04u;
    // 0x143b08: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x143B04u, 0x143B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B0Cu;
label_143b0c:
    // 0x143b0c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x143B0Cu;
    SET_GPR_U32(ctx, 31, 0x143B14u);
    ctx->pc = 0x143B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B0Cu;
    // 0x143b10: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x143B0Cu, 0x143B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B14u;
label_143b14:
    // 0x143b14: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x143b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x143b18: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x143b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b1c: 0x2a0201f5  slti        $v0, $s0, 0x1F5
    ctx->pc = 0x143b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x143b20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143B20u;
    {
        const bool branch_taken_0x143b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B20u;
        // 0x143b24: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b20) {
            ctx->pc = 0x143B48u;
            goto label_143b48;
        }
    }
    ctx->pc = 0x143B28u;
    // 0x143b28: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x143b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x143b2c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x143B2Cu;
    SET_GPR_U32(ctx, 31, 0x143B34u);
    ctx->pc = 0x143B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B2Cu;
    // 0x143b30: 0x248469f0  addiu       $a0, $a0, 0x69F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x143B2Cu, 0x143B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B34u;
label_143b34:
    // 0x143b34: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x143b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x143b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b3c: 0x24a56a08  addiu       $a1, $a1, 0x6A08
    ctx->pc = 0x143b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27144));
    // 0x143b40: 0xc068186  jal         func_1A0618
    ctx->pc = 0x143B40u;
    SET_GPR_U32(ctx, 31, 0x143B48u);
    ctx->pc = 0x143B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B40u;
    // 0x143b44: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x143B40u, 0x143B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B48u;
label_143b48:
    // 0x143b48: 0x5a00001c  blezl       $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x143B48u;
    {
        const bool branch_taken_0x143b48 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x143b48) {
            ctx->pc = 0x143B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143B48u;
            // 0x143b4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143BBCu;
            goto label_143bbc;
        }
    }
    ctx->pc = 0x143B50u;
    // 0x143b50: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x143b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x143b54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x143b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b58: 0x2445c560  addiu       $a1, $v0, -0x3AA0
    ctx->pc = 0x143b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952288));
    // 0x143b5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x143b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143b60:
    // 0x143b60: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x143b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x143b64: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x143b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x143b68: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x143b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x143b6c: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x143b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x143b70: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x143b70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x143b74: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x143b74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x143b78: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x143b78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x143b7c: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x143b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x143b80: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x143b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x143b84: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x143b84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x143b88: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x143b88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x143b8c: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x143b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x143b90: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x143b90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x143b94: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x143b94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x143b98: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x143b98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x143b9c: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x143b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x143ba0: 0xdc820040  ld          $v0, 0x40($a0)
    ctx->pc = 0x143ba0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x143ba4: 0xfca20030  sd          $v0, 0x30($a1)
    ctx->pc = 0x143ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x143ba8: 0xdc830048  ld          $v1, 0x48($a0)
    ctx->pc = 0x143ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x143bac: 0xfca30038  sd          $v1, 0x38($a1)
    ctx->pc = 0x143bacu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 3));
    // 0x143bb0: 0x14c0ffeb  bnez        $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x143BB0u;
    {
        const bool branch_taken_0x143bb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x143BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BB0u;
        // 0x143bb4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bb0) {
            ctx->pc = 0x143B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143b60;
        }
    }
    ctx->pc = 0x143BB8u;
    // 0x143bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143bbc:
    // 0x143bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x143bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143bc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x143bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x143BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BC8u;
        // 0x143bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143BD0u;
}
