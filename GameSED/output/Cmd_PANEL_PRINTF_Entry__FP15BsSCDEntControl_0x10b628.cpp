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

// Function: Cmd_PANEL_PRINTF_Entry__FP15BsSCDEntControl
// Address: 0x10b628 - 0x10b710
void Cmd_PANEL_PRINTF_Entry__FP15BsSCDEntControl_0x10b628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_PRINTF_Entry__FP15BsSCDEntControl_0x10b628");
#endif

    switch (ctx->pc) {
        case 0x10b658u: goto label_10b658;
        case 0x10b68cu: goto label_10b68c;
        case 0x10b6a8u: goto label_10b6a8;
        case 0x10b6b0u: goto label_10b6b0;
        case 0x10b6e8u: goto label_10b6e8;
        case 0x10b6f4u: goto label_10b6f4;
        default: break;
    }

    ctx->pc = 0x10b628u;

    // 0x10b628: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b62c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b630: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10b630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10b634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b638: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x10b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x10b63c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b640: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10b644: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x10b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x10b648: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10b64c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b650: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B650u;
    SET_GPR_U32(ctx, 31, 0x10B658u);
    ctx->pc = 0x10B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B650u;
    // 0x10b654: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B650u, 0x10B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B658u;
label_10b658:
    // 0x10b658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b65c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B65Cu;
    {
        const bool branch_taken_0x10b65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B65Cu;
        // 0x10b660: 0x24030166  addiu       $v1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b65c) {
            ctx->pc = 0x10B674u;
            goto label_10b674;
        }
    }
    ctx->pc = 0x10B664u;
    // 0x10b664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b668: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b66c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B66Cu;
    {
        const bool branch_taken_0x10b66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B66Cu;
        // 0x10b670: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b66c) {
            ctx->pc = 0x10B678u;
            goto label_10b678;
        }
    }
    ctx->pc = 0x10B674u;
label_10b674:
    // 0x10b674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b678:
    // 0x10b678: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x10b67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b680: 0x24a5f5d0  addiu       $a1, $a1, -0xA30
    ctx->pc = 0x10b680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964688));
    // 0x10b684: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10B684u;
    SET_GPR_U32(ctx, 31, 0x10B68Cu);
    ctx->pc = 0x10B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B684u;
    // 0x10b688: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10B684u, 0x10B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B68Cu;
label_10b68c:
    // 0x10b68c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b690: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10b690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10b694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b698: 0x5044000b  beql        $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10B698u;
    {
        const bool branch_taken_0x10b698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10b698) {
            ctx->pc = 0x10B69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B698u;
            // 0x10b69c: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B6C8u;
            goto label_10b6c8;
        }
    }
    ctx->pc = 0x10B6A0u;
    // 0x10b6a0: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x10b6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x10b6a4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x10b6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10b6a8:
    // 0x10b6a8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x10B6A8u;
    SET_GPR_U32(ctx, 31, 0x10B6B0u);
    ctx->pc = 0x10B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6A8u;
    // 0x10b6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x10B6A8u, 0x10B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6B0u;
label_10b6b0:
    // 0x10b6b0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b6b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x10b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x10b6b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b6bc: 0x1452fffa  bne         $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B6BCu;
    {
        const bool branch_taken_0x10b6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6BCu;
        // 0x10b6c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6bc) {
            ctx->pc = 0x10B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b6a8;
        }
    }
    ctx->pc = 0x10B6C4u;
    // 0x10b6c4: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x10b6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
label_10b6c8:
    // 0x10b6c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10b6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b6cc: 0x2610f610  addiu       $s0, $s0, -0x9F0
    ctx->pc = 0x10b6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964752));
    // 0x10b6d0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x10b6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10b6d4: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x10b6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b6d8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x10b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x10b6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6e0: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x10B6E0u;
    SET_GPR_U32(ctx, 31, 0x10B6E8u);
    ctx->pc = 0x10B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6E0u;
    // 0x10b6e4: 0x24a5f5d0  addiu       $a1, $a1, -0xA30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x10B6E0u, 0x10B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6E8u;
label_10b6e8:
    // 0x10b6e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6ec: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x10B6ECu;
    SET_GPR_U32(ctx, 31, 0x10B6F4u);
    ctx->pc = 0x10B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6ECu;
    // 0x10b6f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x10B6ECu, 0x10B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6F4u;
label_10b6f4:
    // 0x10b6f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10b6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b6f8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x10b6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10b6fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10b6fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b700: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x10b700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10b704: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10b704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b708: 0x3e00008  jr          $ra
    ctx->pc = 0x10B708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B708u;
        // 0x10b70c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B710u;
}
