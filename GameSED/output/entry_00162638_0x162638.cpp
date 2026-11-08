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

// Function: entry_00162638
// Address: 0x162638 - 0x1626dc
void entry_00162638_0x162638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162638_0x162638");
#endif

    switch (ctx->pc) {
        case 0x162670u: goto label_162670;
        case 0x162678u: goto label_162678;
        case 0x162680u: goto label_162680;
        case 0x162688u: goto label_162688;
        case 0x1626a4u: goto label_1626a4;
        case 0x1626b0u: goto label_1626b0;
        default: break;
    }

    ctx->pc = 0x162638u;

    // 0x162638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x162638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16263c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x162640: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x162640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x162644: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x162644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162648: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x162648u;
    {
        const bool branch_taken_0x162648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162648) {
            ctx->pc = 0x16264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162648u;
            // 0x16264c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16279Cu;
            return;
        }
    }
    ctx->pc = 0x162650u;
    // 0x162650: 0x8e421a2c  lw          $v0, 0x1A2C($s2)
    ctx->pc = 0x162650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6700)));
    // 0x162654: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x162654u;
    {
        const bool branch_taken_0x162654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162654) {
            ctx->pc = 0x162658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162654u;
            // 0x162658: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16279Cu;
            return;
        }
    }
    ctx->pc = 0x16265Cu;
    // 0x16265c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x16265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x162660: 0x3c147000  lui         $s4, 0x7000
    ctx->pc = 0x162660u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28672 << 16));
    // 0x162664: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x162664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x162668: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162668u;
    SET_GPR_U32(ctx, 31, 0x162670u);
    ctx->pc = 0x16266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162668u;
    // 0x16266c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162668u, 0x162670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162670u;
label_162670:
    // 0x162670: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162670u;
    SET_GPR_U32(ctx, 31, 0x162678u);
    ctx->pc = 0x162674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162670u;
    // 0x162674: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162670u, 0x162678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162678u;
label_162678:
    // 0x162678: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162678u;
    SET_GPR_U32(ctx, 31, 0x162680u);
    ctx->pc = 0x16267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162678u;
    // 0x16267c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162678u, 0x162680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162680u;
label_162680:
    // 0x162680: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162680u;
    SET_GPR_U32(ctx, 31, 0x162688u);
    ctx->pc = 0x162684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162680u;
    // 0x162684: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162680u, 0x162688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162688u;
label_162688:
    // 0x162688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x162688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16268c: 0x8e5001b8  lw          $s0, 0x1B8($s2)
    ctx->pc = 0x16268cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x162690: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x162690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x162694: 0xae630094  sw          $v1, 0x94($s3)
    ctx->pc = 0x162694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 3));
    // 0x162698: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x162698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16269c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16269Cu;
    SET_GPR_U32(ctx, 31, 0x1626A4u);
    ctx->pc = 0x1626A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16269Cu;
    // 0x1626a0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16269Cu, 0x1626A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626A4u;
label_1626a4:
    // 0x1626a4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1626a8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1626A8u;
    SET_GPR_U32(ctx, 31, 0x1626B0u);
    ctx->pc = 0x1626ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626A8u;
    // 0x1626ac: 0x118980  sll         $s1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1626A8u, 0x1626B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626B0u;
label_1626b0:
    // 0x1626b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1626b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626b4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1626b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1626b8: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x1626b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x1626bc: 0x8e430c08  lw          $v1, 0xC08($s2)
    ctx->pc = 0x1626bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3080)));
    // 0x1626c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1626c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626c4: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x1626c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1626c8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1626c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1626cc: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1626CCu;
    {
        const bool branch_taken_0x1626cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1626D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626CCu;
        // 0x1626d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626cc) {
            ctx->pc = 0x1626DCu;
            return;
        }
    }
    ctx->pc = 0x1626D4u;
    // 0x1626d4: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1626d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1626d8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1626d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x1626dcu;
}
