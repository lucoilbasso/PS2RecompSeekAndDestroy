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

// Function: Cmd_LOAD_WALLMAP_Entry__FP15BsSCDEntControl
// Address: 0x144630 - 0x1446ec
void Cmd_LOAD_WALLMAP_Entry__FP15BsSCDEntControl_0x144630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_WALLMAP_Entry__FP15BsSCDEntControl_0x144630");
#endif

    switch (ctx->pc) {
        case 0x144668u: goto label_144668;
        case 0x144674u: goto label_144674;
        case 0x144690u: goto label_144690;
        case 0x1446a0u: goto label_1446a0;
        case 0x1446b0u: goto label_1446b0;
        case 0x1446b8u: goto label_1446b8;
        case 0x1446c4u: goto label_1446c4;
        case 0x1446ccu: goto label_1446cc;
        default: break;
    }

    ctx->pc = 0x144630u;

    // 0x144630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x144630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x144634: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x144634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144638: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x144638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x14463c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x14463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x144640: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x144640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x144644: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x144644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x144648: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x144648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14464c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x14464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x144650: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x144650u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x144654: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x144654u;
    {
        const bool branch_taken_0x144654 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x144658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144654u;
        // 0x144658: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144654) {
            ctx->pc = 0x144698u;
            goto label_144698;
        }
    }
    ctx->pc = 0x14465Cu;
    // 0x14465c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x14465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x144660: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144660u;
    SET_GPR_U32(ctx, 31, 0x144668u);
    ctx->pc = 0x144664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144660u;
    // 0x144664: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144660u, 0x144668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144668u;
label_144668:
    // 0x144668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14466c: 0xc060a02  jal         func_182808
    ctx->pc = 0x14466Cu;
    SET_GPR_U32(ctx, 31, 0x144674u);
    ctx->pc = 0x144670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14466Cu;
    // 0x144670: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x14466Cu, 0x144674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144674u;
label_144674:
    // 0x144674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14467c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x14467cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x144680: 0x26050007  addiu       $a1, $s0, 0x7
    ctx->pc = 0x144680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x144684: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144688: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144688u;
    SET_GPR_U32(ctx, 31, 0x144690u);
    ctx->pc = 0x14468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144688u;
    // 0x14468c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144688u, 0x144690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144690u;
label_144690:
    // 0x144690: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x144690u;
    {
        const bool branch_taken_0x144690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144690) {
            ctx->pc = 0x1446BCu;
            goto label_1446bc;
        }
    }
    ctx->pc = 0x144698u;
label_144698:
    // 0x144698: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144698u;
    SET_GPR_U32(ctx, 31, 0x1446A0u);
    ctx->pc = 0x14469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144698u;
    // 0x14469c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144698u, 0x1446A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446A0u;
label_1446a0:
    // 0x1446a0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1446a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1446a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1446a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446a8: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1446A8u;
    SET_GPR_U32(ctx, 31, 0x1446B0u);
    ctx->pc = 0x1446ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446A8u;
    // 0x1446ac: 0x24a5d2c8  addiu       $a1, $a1, -0x2D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1446A8u, 0x1446B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446B0u;
label_1446b0:
    // 0x1446b0: 0xc060a02  jal         func_182808
    ctx->pc = 0x1446B0u;
    SET_GPR_U32(ctx, 31, 0x1446B8u);
    ctx->pc = 0x1446B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446B0u;
    // 0x1446b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182808u, 0x1446B0u, 0x1446B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446B8u;
label_1446b8:
    // 0x1446b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1446b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1446bc:
    // 0x1446bc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1446BCu;
    SET_GPR_U32(ctx, 31, 0x1446C4u);
    ctx->pc = 0x1446C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446BCu;
    // 0x1446c0: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1446BCu, 0x1446C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446C4u;
label_1446c4:
    // 0x1446c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1446C4u;
    SET_GPR_U32(ctx, 31, 0x1446CCu);
    ctx->pc = 0x1446C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446C4u;
    // 0x1446c8: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1446C4u, 0x1446CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446CCu;
label_1446cc:
    // 0x1446cc: 0xae720070  sw          $s2, 0x70($s3)
    ctx->pc = 0x1446ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
    // 0x1446d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1446d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1446d4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1446d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1446d8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1446d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1446dc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1446dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1446e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1446e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1446e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1446E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1446E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446E4u;
        // 0x1446e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1446E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1446ECu;
}
