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

// Function: Cmd_EXT_REGIST_Entry__FP15BsSCDEntControl
// Address: 0x1063c8 - 0x106484
void Cmd_EXT_REGIST_Entry__FP15BsSCDEntControl_0x1063c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXT_REGIST_Entry__FP15BsSCDEntControl_0x1063c8");
#endif

    switch (ctx->pc) {
        case 0x1063f0u: goto label_1063f0;
        case 0x1063fcu: goto label_1063fc;
        case 0x10643cu: goto label_10643c;
        case 0x106450u: goto label_106450;
        default: break;
    }

    ctx->pc = 0x1063c8u;

    // 0x1063c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1063c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1063cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1063ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1063d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1063d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1063d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1063d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1063d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1063d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1063dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1063dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1063e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1063e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1063e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1063e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1063e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1063E8u;
    SET_GPR_U32(ctx, 31, 0x1063F0u);
    ctx->pc = 0x1063ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1063E8u;
    // 0x1063ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1063E8u, 0x1063F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1063F0u;
label_1063f0:
    // 0x1063f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1063f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063f4: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1063F4u;
    SET_GPR_U32(ctx, 31, 0x1063FCu);
    ctx->pc = 0x1063F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1063F4u;
    // 0x1063f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1063F4u, 0x1063FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1063FCu;
label_1063fc:
    // 0x1063fc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1063fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x106400: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x106400u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106404: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x106404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x106408: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10640c: 0x2e100020  sltiu       $s0, $s0, 0x20
    ctx->pc = 0x10640cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x106410: 0x8e330020  lw          $s3, 0x20($s1)
    ctx->pc = 0x106410u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x106414: 0x24843818  addiu       $a0, $a0, 0x3818
    ctx->pc = 0x106414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    // 0x106418: 0x8e34002c  lw          $s4, 0x2C($s1)
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x10641c: 0x3c120026  lui         $s2, 0x26
    ctx->pc = 0x10641cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
    // 0x106420: 0x2652ed80  addiu       $s2, $s2, -0x1280
    ctx->pc = 0x106420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962560));
    // 0x106424: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x106424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x106428: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x106428u;
    {
        const bool branch_taken_0x106428 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106428u;
        // 0x10642c: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106428) {
            ctx->pc = 0x106450u;
            goto label_106450;
        }
    }
    ctx->pc = 0x106430u;
    // 0x106430: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x106430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x106434: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x106434u;
    SET_GPR_U32(ctx, 31, 0x10643Cu);
    ctx->pc = 0x106438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106434u;
    // 0x106438: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x106434u, 0x10643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10643Cu;
label_10643c:
    // 0x10643c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10643cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x106440: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x106440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x106444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106448: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106448u;
    SET_GPR_U32(ctx, 31, 0x106450u);
    ctx->pc = 0x10644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106448u;
    // 0x10644c: 0x24a53878  addiu       $a1, $a1, 0x3878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106448u, 0x106450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106450u;
label_106450:
    // 0x106450: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x106450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x106454: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x106454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x106458: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x106458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    // 0x10645c: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x10645cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x106460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10646c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10646cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106470: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x106470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106474: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x106474u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x106478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10647c: 0x3e00008  jr          $ra
    ctx->pc = 0x10647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10647Cu;
        // 0x106480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10647Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106484u;
}
