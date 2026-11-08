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

// Function: ApRsc3DInqStageMIMePtr__FP8ApcRsc3Di
// Address: 0x145ab0 - 0x145b70
void ApRsc3DInqStageMIMePtr__FP8ApcRsc3Di_0x145ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DInqStageMIMePtr__FP8ApcRsc3Di_0x145ab0");
#endif

    switch (ctx->pc) {
        case 0x145af8u: goto label_145af8;
        case 0x145b0cu: goto label_145b0c;
        case 0x145b30u: goto label_145b30;
        case 0x145b44u: goto label_145b44;
        default: break;
    }

    ctx->pc = 0x145ab0u;

    // 0x145ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145ab4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x145ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x145ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ac0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x145ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x145ac4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x145ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ac8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x145ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x145acc: 0x34424d4d  ori         $v0, $v0, 0x4D4D
    ctx->pc = 0x145accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19789);
    // 0x145ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145ad8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x145ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x145adc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x145adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x145ae0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x145ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145ae4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x145AE4u;
    {
        const bool branch_taken_0x145ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AE4u;
        // 0x145ae8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ae4) {
            ctx->pc = 0x145B0Cu;
            goto label_145b0c;
        }
    }
    ctx->pc = 0x145AECu;
    // 0x145aec: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x145aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x145af0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x145AF0u;
    SET_GPR_U32(ctx, 31, 0x145AF8u);
    ctx->pc = 0x145AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145AF0u;
    // 0x145af4: 0x248469a0  addiu       $a0, $a0, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x145AF0u, 0x145AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145AF8u;
label_145af8:
    // 0x145af8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145afc: 0x24a569c0  addiu       $a1, $a1, 0x69C0
    ctx->pc = 0x145afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27072));
    // 0x145b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b04: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145B04u;
    SET_GPR_U32(ctx, 31, 0x145B0Cu);
    ctx->pc = 0x145B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B04u;
    // 0x145b08: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145B04u, 0x145B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B0Cu;
label_145b0c:
    // 0x145b0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x145b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145b10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x145b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x145b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145b18: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x145B18u;
    {
        const bool branch_taken_0x145b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B18u;
        // 0x145b1c: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b18) {
            ctx->pc = 0x145B48u;
            goto label_145b48;
        }
    }
    ctx->pc = 0x145B20u;
    // 0x145b20: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x145b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x145b24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x145b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b28: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x145B28u;
    SET_GPR_U32(ctx, 31, 0x145B30u);
    ctx->pc = 0x145B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B28u;
    // 0x145b2c: 0x248469d8  addiu       $a0, $a0, 0x69D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x145B28u, 0x145B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B30u;
label_145b30:
    // 0x145b30: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b38: 0x24a569c0  addiu       $a1, $a1, 0x69C0
    ctx->pc = 0x145b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27072));
    // 0x145b3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145B3Cu;
    SET_GPR_U32(ctx, 31, 0x145B44u);
    ctx->pc = 0x145B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B3Cu;
    // 0x145b40: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145B3Cu, 0x145B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B44u;
label_145b44:
    // 0x145b44: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x145b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_145b48:
    // 0x145b48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x145b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145b4c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x145b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x145b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145b54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x145b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x145b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145b5c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x145b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x145b60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x145b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x145b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145b68: 0x3e00008  jr          $ra
    ctx->pc = 0x145B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B68u;
        // 0x145b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145B70u;
}
