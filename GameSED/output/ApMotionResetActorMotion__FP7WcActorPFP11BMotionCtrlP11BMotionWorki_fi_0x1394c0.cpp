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

// Function: ApMotionResetActorMotion__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fi
// Address: 0x1394c0 - 0x1395a0
void ApMotionResetActorMotion__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fi_0x1394c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionResetActorMotion__FP7WcActorPFP11BMotionCtrlP11BMotionWorki_fi_0x1394c0");
#endif

    switch (ctx->pc) {
        case 0x139504u: goto label_139504;
        case 0x13956cu: goto label_13956c;
        default: break;
    }

    ctx->pc = 0x1394c0u;

    // 0x1394c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1394c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1394c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1394c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1394c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1394c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1394cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1394ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1394d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1394d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1394d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1394d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1394dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1394dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1394e0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1394e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1394e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1394e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1394e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1394e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1394ec: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x1394ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1394f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1394f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1394f4: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1394F4u;
    {
        const bool branch_taken_0x1394f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1394F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1394F4u;
        // 0x1394f8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394f4) {
            ctx->pc = 0x139580u;
            goto label_139580;
        }
    }
    ctx->pc = 0x1394FCu;
    // 0x1394fc: 0xc061a46  jal         func_186918
    ctx->pc = 0x1394FCu;
    SET_GPR_U32(ctx, 31, 0x139504u);
    ctx->pc = 0x139500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1394FCu;
    // 0x139500: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1394FCu, 0x139504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139504u;
label_139504:
    // 0x139504: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x139504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139508: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x139508u;
    {
        const bool branch_taken_0x139508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139508u;
        // 0x13950c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139508) {
            ctx->pc = 0x139534u;
            goto label_139534;
        }
    }
    ctx->pc = 0x139510u;
    // 0x139510: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x139510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x139514: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x139514u;
    {
        const bool branch_taken_0x139514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x139518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139514u;
        // 0x139518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139514) {
            ctx->pc = 0x139534u;
            goto label_139534;
        }
    }
    ctx->pc = 0x13951Cu;
    // 0x13951c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13951Cu;
    {
        const bool branch_taken_0x13951c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13951Cu;
        // 0x139520: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13951c) {
            ctx->pc = 0x139534u;
            goto label_139534;
        }
    }
    ctx->pc = 0x139524u;
    // 0x139524: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x139524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x139528: 0x54520002  bnel        $v0, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x139528u;
    {
        const bool branch_taken_0x139528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x139528) {
            ctx->pc = 0x13952Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139528u;
            // 0x13952c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139534u;
            goto label_139534;
        }
    }
    ctx->pc = 0x139530u;
    // 0x139530: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x139530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_139534:
    // 0x139534: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x139534u;
    {
        const bool branch_taken_0x139534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139534u;
        // 0x139538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139534) {
            ctx->pc = 0x139584u;
            goto label_139584;
        }
    }
    ctx->pc = 0x13953Cu;
    // 0x13953c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13953Cu;
    {
        const bool branch_taken_0x13953c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13953c) {
            ctx->pc = 0x139540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13953Cu;
            // 0x139540: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139558u;
            goto label_139558;
        }
    }
    ctx->pc = 0x139544u;
    // 0x139544: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x139544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x139548: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13954c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x139550: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x139550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x139554: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x139554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_139558:
    // 0x139558: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x139558u;
    {
        const bool branch_taken_0x139558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139558) {
            ctx->pc = 0x13955Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139558u;
            // 0x13955c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139570u;
            goto label_139570;
        }
    }
    ctx->pc = 0x139560u;
    // 0x139560: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x139560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x139564: 0xc061a00  jal         func_186800
    ctx->pc = 0x139564u;
    SET_GPR_U32(ctx, 31, 0x13956Cu);
    ctx->pc = 0x139568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139564u;
    // 0x139568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186800u, 0x139564u, 0x13956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13956Cu;
label_13956c:
    // 0x13956c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13956cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_139570:
    // 0x139570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139574: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x139574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x139578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x139578u;
    {
        const bool branch_taken_0x139578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139578u;
        // 0x13957c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139578) {
            ctx->pc = 0x139584u;
            goto label_139584;
        }
    }
    ctx->pc = 0x139580u;
label_139580:
    // 0x139580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139584:
    // 0x139584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13958c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13958cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x139590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139598: 0x3e00008  jr          $ra
    ctx->pc = 0x139598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139598u;
        // 0x13959c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1395A0u;
}
