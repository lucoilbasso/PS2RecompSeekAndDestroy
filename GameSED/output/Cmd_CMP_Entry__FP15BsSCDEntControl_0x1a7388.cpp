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

// Function: Cmd_CMP_Entry__FP15BsSCDEntControl
// Address: 0x1a7388 - 0x1a745c
void Cmd_CMP_Entry__FP15BsSCDEntControl_0x1a7388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CMP_Entry__FP15BsSCDEntControl_0x1a7388");
#endif

    switch (ctx->pc) {
        case 0x1a73a4u: goto label_1a73a4;
        case 0x1a73dcu: goto label_1a73dc;
        case 0x1a7430u: goto label_1a7430;
        default: break;
    }

    ctx->pc = 0x1a7388u;

    // 0x1a7388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a738c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7390: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7398: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a739c: 0xc069c90  jal         func_1A7240
    ctx->pc = 0x1A739Cu;
    SET_GPR_U32(ctx, 31, 0x1A73A4u);
    ctx->pc = 0x1A73A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A739Cu;
    // 0x1a73a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7240u, 0x1A739Cu, 0x1A73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73A4u;
label_1a73a4:
    // 0x1a73a4: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1a73a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a73a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a73a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a73acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a73b0: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a73b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a73b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a73b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a73b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73bc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a73bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a73c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a73c4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a73c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a73c8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a73c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a73cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A73CCu;
    {
        const bool branch_taken_0x1a73cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73CCu;
        // 0x1a73d0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73cc) {
            ctx->pc = 0x1A73E8u;
            goto label_1a73e8;
        }
    }
    ctx->pc = 0x1A73D4u;
    // 0x1a73d4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A73D4u;
    SET_GPR_U32(ctx, 31, 0x1A73DCu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A73D4u, 0x1A73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73DCu;
label_1a73dc:
    // 0x1a73dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A73DCu;
    {
        const bool branch_taken_0x1a73dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73DCu;
        // 0x1a73e0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73dc) {
            ctx->pc = 0x1A73ECu;
            goto label_1a73ec;
        }
    }
    ctx->pc = 0x1A73E4u;
    // 0x1a73e4: 0x0  nop
    ctx->pc = 0x1a73e4u;
    // NOP
label_1a73e8:
    // 0x1a73e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a73e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a73ec:
    // 0x1a73ec: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A73ECu;
    {
        const bool branch_taken_0x1a73ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73ECu;
        // 0x1a73f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73ec) {
            ctx->pc = 0x1A7444u;
            goto label_1a7444;
        }
    }
    ctx->pc = 0x1A73F4u;
    // 0x1a73f4: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A73F4u;
    {
        const bool branch_taken_0x1a73f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a73f4) {
            ctx->pc = 0x1A73F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A73F4u;
            // 0x1a73f8: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7410u;
            goto label_1a7410;
        }
    }
    ctx->pc = 0x1A73FCu;
    // 0x1a73fc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a7400: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7404: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A7404u;
    {
        const bool branch_taken_0x1a7404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7404u;
        // 0x1a7408: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7404) {
            ctx->pc = 0x1A7444u;
            goto label_1a7444;
        }
    }
    ctx->pc = 0x1A740Cu;
    // 0x1a740c: 0x0  nop
    ctx->pc = 0x1a740cu;
    // NOP
label_1a7410:
    // 0x1a7410: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1a7410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a7414: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a7414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7418: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7418u;
    {
        const bool branch_taken_0x1a7418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7418u;
        // 0x1a741c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7418) {
            ctx->pc = 0x1A7430u;
            goto label_1a7430;
        }
    }
    ctx->pc = 0x1A7420u;
    // 0x1a7420: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7424: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7428: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7428u;
    SET_GPR_U32(ctx, 31, 0x1A7430u);
    ctx->pc = 0x1A742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7428u;
    // 0x1a742c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7428u, 0x1A7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7430u;
label_1a7430:
    // 0x1a7430: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a7430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a7434: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a7438: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a743c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7440: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a7440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1a7444:
    // 0x1a7444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a744c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a744cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7450: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a7450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7454: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7454u;
        // 0x1a7458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A745Cu;
}
