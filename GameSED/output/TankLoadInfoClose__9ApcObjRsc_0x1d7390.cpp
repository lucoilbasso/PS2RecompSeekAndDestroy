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

// Function: TankLoadInfoClose__9ApcObjRsc
// Address: 0x1d7390 - 0x1d7458
void TankLoadInfoClose__9ApcObjRsc_0x1d7390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankLoadInfoClose__9ApcObjRsc_0x1d7390");
#endif

    switch (ctx->pc) {
        case 0x1d7390u: goto label_1d7390;
        case 0x1d7394u: goto label_1d7394;
        case 0x1d7398u: goto label_1d7398;
        case 0x1d739cu: goto label_1d739c;
        case 0x1d73a0u: goto label_1d73a0;
        case 0x1d73a4u: goto label_1d73a4;
        case 0x1d73a8u: goto label_1d73a8;
        case 0x1d73acu: goto label_1d73ac;
        case 0x1d73b0u: goto label_1d73b0;
        case 0x1d73b4u: goto label_1d73b4;
        case 0x1d73b8u: goto label_1d73b8;
        case 0x1d73bcu: goto label_1d73bc;
        case 0x1d73c0u: goto label_1d73c0;
        case 0x1d73c4u: goto label_1d73c4;
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73ccu: goto label_1d73cc;
        case 0x1d73d0u: goto label_1d73d0;
        case 0x1d73d4u: goto label_1d73d4;
        case 0x1d73d8u: goto label_1d73d8;
        case 0x1d73dcu: goto label_1d73dc;
        case 0x1d73e0u: goto label_1d73e0;
        case 0x1d73e4u: goto label_1d73e4;
        case 0x1d73e8u: goto label_1d73e8;
        case 0x1d73ecu: goto label_1d73ec;
        case 0x1d73f0u: goto label_1d73f0;
        case 0x1d73f4u: goto label_1d73f4;
        case 0x1d73f8u: goto label_1d73f8;
        case 0x1d73fcu: goto label_1d73fc;
        case 0x1d7400u: goto label_1d7400;
        case 0x1d7404u: goto label_1d7404;
        case 0x1d7408u: goto label_1d7408;
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7410u: goto label_1d7410;
        case 0x1d7414u: goto label_1d7414;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d741cu: goto label_1d741c;
        case 0x1d7420u: goto label_1d7420;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7428u: goto label_1d7428;
        case 0x1d742cu: goto label_1d742c;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d7434u: goto label_1d7434;
        case 0x1d7438u: goto label_1d7438;
        case 0x1d743cu: goto label_1d743c;
        case 0x1d7440u: goto label_1d7440;
        case 0x1d7444u: goto label_1d7444;
        case 0x1d7448u: goto label_1d7448;
        case 0x1d744cu: goto label_1d744c;
        case 0x1d7450u: goto label_1d7450;
        case 0x1d7454u: goto label_1d7454;
        default: break;
    }

    ctx->pc = 0x1d7390u;

label_1d7390:
    // 0x1d7390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7394:
    // 0x1d7394: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d7398:
    // 0x1d7398: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d7398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d739c:
    // 0x1d739c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d73a0:
    // 0x1d73a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d73a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d73a4:
    // 0x1d73a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d73a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d73a8:
    // 0x1d73a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d73a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d73ac:
    // 0x1d73ac: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1d73acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1d73b0:
    // 0x1d73b0: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
label_1d73b4:
    if (ctx->pc == 0x1D73B4u) {
        ctx->pc = 0x1D73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73B0u;
        // 0x1d73b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73B8u;
        goto label_1d73b8;
    }
    ctx->pc = 0x1D73B0u;
    {
        const bool branch_taken_0x1d73b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73B0u;
        // 0x1d73b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73b0) {
            ctx->pc = 0x1D7430u;
            goto label_1d7430;
        }
    }
    ctx->pc = 0x1D73B8u;
label_1d73b8:
    // 0x1d73b8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1d73b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1d73bc:
    // 0x1d73bc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1d73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1d73c0:
    // 0x1d73c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d73c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d73c4:
    // 0x1d73c4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1d73c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d73c8:
    // 0x1d73c8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1d73c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d73cc:
    // 0x1d73cc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d73d0:
    if (ctx->pc == 0x1D73D0u) {
        ctx->pc = 0x1D73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73CCu;
        // 0x1d73d0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73D4u;
        goto label_1d73d4;
    }
    ctx->pc = 0x1D73CCu;
    {
        const bool branch_taken_0x1d73cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73CCu;
        // 0x1d73d0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73cc) {
            ctx->pc = 0x1D73F0u;
            goto label_1d73f0;
        }
    }
    ctx->pc = 0x1D73D4u;
label_1d73d4:
    // 0x1d73d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d73d8:
    // 0x1d73d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d73d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d73dc:
    // 0x1d73dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d73e0:
    // 0x1d73e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d73e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d73e4:
    // 0x1d73e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d73e8:
    // 0x1d73e8: 0x60f809  jalr        $v1
label_1d73ec:
    if (ctx->pc == 0x1D73ECu) {
        ctx->pc = 0x1D73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E8u;
        // 0x1d73ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73F0u;
        goto label_1d73f0;
    }
    ctx->pc = 0x1D73E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D73F0u);
        ctx->pc = 0x1D73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E8u;
        // 0x1d73ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D73E8u, 0x1D73F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D73F0u;
label_1d73f0:
    // 0x1d73f0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1d73f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d73f4:
    // 0x1d73f4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d73f8:
    if (ctx->pc == 0x1D73F8u) {
        ctx->pc = 0x1D73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F4u;
        // 0x1d73f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73FCu;
        goto label_1d73fc;
    }
    ctx->pc = 0x1D73F4u;
    {
        const bool branch_taken_0x1d73f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F4u;
        // 0x1d73f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73f4) {
            ctx->pc = 0x1D7414u;
            goto label_1d7414;
        }
    }
    ctx->pc = 0x1D73FCu;
label_1d73fc:
    // 0x1d73fc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d7400:
    // 0x1d7400: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d7404:
    // 0x1d7404: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d7404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7408:
    // 0x1d7408: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d740c:
    // 0x1d740c: 0x60f809  jalr        $v1
label_1d7410:
    if (ctx->pc == 0x1D7410u) {
        ctx->pc = 0x1D7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D740Cu;
        // 0x1d7410: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7414u;
        goto label_1d7414;
    }
    ctx->pc = 0x1D740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D7414u);
        ctx->pc = 0x1D7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D740Cu;
        // 0x1d7410: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D740Cu, 0x1D7414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7414u;
label_1d7414:
    // 0x1d7414: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d7414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d7418:
    // 0x1d7418: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d7418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1d741c:
    // 0x1d741c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1d741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1d7420:
    // 0x1d7420: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d7420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d7424:
    // 0x1d7424: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d7424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7428:
    // 0x1d7428: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1d742c:
    if (ctx->pc == 0x1D742Cu) {
        ctx->pc = 0x1D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7428u;
        // 0x1d742c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7430u;
        goto label_1d7430;
    }
    ctx->pc = 0x1D7428u;
    {
        const bool branch_taken_0x1d7428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7428u;
        // 0x1d742c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7428) {
            ctx->pc = 0x1D73B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d73b8;
        }
    }
    ctx->pc = 0x1D7430u;
label_1d7430:
    // 0x1d7430: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x1d7430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1d7434:
    // 0x1d7434: 0xc067f04  jal         func_19FC10
label_1d7438:
    if (ctx->pc == 0x1D7438u) {
        ctx->pc = 0x1D7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7434u;
        // 0x1d7438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D743Cu;
        goto label_1d743c;
    }
    ctx->pc = 0x1D7434u;
    SET_GPR_U32(ctx, 31, 0x1D743Cu);
    ctx->pc = 0x1D7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7434u;
    // 0x1d7438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D7434u, 0x1D743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D743Cu;
label_1d743c:
    // 0x1d743c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d743cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7440:
    // 0x1d7440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d7444:
    // 0x1d7444: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7448:
    // 0x1d7448: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d744c:
    // 0x1d744c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d744cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7450:
    // 0x1d7450: 0x3e00008  jr          $ra
label_1d7454:
    if (ctx->pc == 0x1D7454u) {
        ctx->pc = 0x1D7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7450u;
        // 0x1d7454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7458u;
        goto label_fallthrough_0x1d7450;
    }
    ctx->pc = 0x1D7450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7450u;
        // 0x1d7454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7450:
    ctx->pc = 0x1D7458u;
}
