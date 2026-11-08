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

// Function: ApRsc3DLoad3DCom__FP8ApcRsc3Di
// Address: 0x1431a8 - 0x143264
void ApRsc3DLoad3DCom__FP8ApcRsc3Di_0x1431a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DLoad3DCom__FP8ApcRsc3Di_0x1431a8");
#endif

    switch (ctx->pc) {
        case 0x1431d8u: goto label_1431d8;
        case 0x1431f0u: goto label_1431f0;
        case 0x1431f8u: goto label_1431f8;
        case 0x143200u: goto label_143200;
        case 0x143208u: goto label_143208;
        case 0x143220u: goto label_143220;
        case 0x143228u: goto label_143228;
        case 0x143230u: goto label_143230;
        case 0x143248u: goto label_143248;
        default: break;
    }

    ctx->pc = 0x1431a8u;

    // 0x1431a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1431ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1431acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1431b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1431b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1431b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1431b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1431b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1431b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1431bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1431bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1431c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1431c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1431c4: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1431C4u;
    {
        const bool branch_taken_0x1431c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1431C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431C4u;
        // 0x1431c8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431c4) {
            ctx->pc = 0x143248u;
            goto label_143248;
        }
    }
    ctx->pc = 0x1431CCu;
    // 0x1431cc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1431ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1431d0: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1431D0u;
    SET_GPR_U32(ctx, 31, 0x1431D8u);
    ctx->pc = 0x1431D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431D0u;
    // 0x1431d4: 0x8c520388  lw          $s2, 0x388($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1431D0u, 0x1431D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431D8u;
label_1431d8:
    // 0x1431d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1431d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1431dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1431dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1431e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1431e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1431e4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1431e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1431e8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1431E8u;
    SET_GPR_U32(ctx, 31, 0x1431F0u);
    ctx->pc = 0x1431ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431E8u;
    // 0x1431ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1431E8u, 0x1431F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431F0u;
label_1431f0:
    // 0x1431f0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1431F0u;
    SET_GPR_U32(ctx, 31, 0x1431F8u);
    ctx->pc = 0x1431F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431F0u;
    // 0x1431f4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1431F0u, 0x1431F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431F8u;
label_1431f8:
    // 0x1431f8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1431F8u;
    SET_GPR_U32(ctx, 31, 0x143200u);
    ctx->pc = 0x1431FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431F8u;
    // 0x1431fc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1431F8u, 0x143200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143200u;
label_143200:
    // 0x143200: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x143200u;
    SET_GPR_U32(ctx, 31, 0x143208u);
    ctx->pc = 0x143204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143200u;
    // 0x143204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x143200u, 0x143208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143208u;
label_143208:
    // 0x143208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14320c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14320cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143210: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143214: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x143214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143218: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x143218u;
    SET_GPR_U32(ctx, 31, 0x143220u);
    ctx->pc = 0x14321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143218u;
    // 0x14321c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x143218u, 0x143220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143220u;
label_143220:
    // 0x143220: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x143220u;
    SET_GPR_U32(ctx, 31, 0x143228u);
    ctx->pc = 0x143224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143220u;
    // 0x143224: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x143220u, 0x143228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143228u;
label_143228:
    // 0x143228: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x143228u;
    SET_GPR_U32(ctx, 31, 0x143230u);
    ctx->pc = 0x14322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143228u;
    // 0x14322c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x143228u, 0x143230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143230u;
label_143230:
    // 0x143230: 0xae710024  sw          $s1, 0x24($s3)
    ctx->pc = 0x143230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 17));
    // 0x143234: 0xae700034  sw          $s0, 0x34($s3)
    ctx->pc = 0x143234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 16));
    // 0x143238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14323c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14323cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143240: 0xc05fe36  jal         func_17F8D8
    ctx->pc = 0x143240u;
    SET_GPR_U32(ctx, 31, 0x143248u);
    ctx->pc = 0x143244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143240u;
    // 0x143244: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8D8u, 0x143240u, 0x143248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143248u;
label_143248:
    // 0x143248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14324c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14324cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143250: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x143250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143254: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x143254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143258: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14325c: 0x3e00008  jr          $ra
    ctx->pc = 0x14325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14325Cu;
        // 0x143260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143264u;
}
