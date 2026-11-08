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

// Function: entry_00136808
// Address: 0x136808 - 0x1368b0
void entry_00136808_0x136808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136808_0x136808");
#endif

    switch (ctx->pc) {
        case 0x136814u: goto label_136814;
        case 0x13681cu: goto label_13681c;
        case 0x136830u: goto label_136830;
        case 0x13683cu: goto label_13683c;
        case 0x13684cu: goto label_13684c;
        case 0x13685cu: goto label_13685c;
        case 0x136878u: goto label_136878;
        case 0x136898u: goto label_136898;
        default: break;
    }

    ctx->pc = 0x136808u;

label_136808:
    // 0x136808: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x136808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13680c:
    // 0x13680c: 0xc0682b2  jal         func_1A0AC8
label_136810:
    if (ctx->pc == 0x136810u) {
        ctx->pc = 0x136810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13680Cu;
        // 0x136810: 0x8e9100dc  lw          $s1, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136814u;
        goto label_136814;
    }
    ctx->pc = 0x13680Cu;
    SET_GPR_U32(ctx, 31, 0x136814u);
    ctx->pc = 0x136810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13680Cu;
    // 0x136810: 0x8e9100dc  lw          $s1, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13680Cu, 0x136814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136814u;
label_136814:
    // 0x136814: 0xc0682b6  jal         func_1A0AD8
label_136818:
    if (ctx->pc == 0x136818u) {
        ctx->pc = 0x136818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136814u;
        // 0x136818: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13681Cu;
        goto label_13681c;
    }
    ctx->pc = 0x136814u;
    SET_GPR_U32(ctx, 31, 0x13681Cu);
    ctx->pc = 0x136818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136814u;
    // 0x136818: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x136814u, 0x13681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13681Cu;
label_13681c:
    // 0x13681c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136820:
    // 0x136820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x136820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136824:
    // 0x136824: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x136824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
label_136828:
    // 0x136828: 0xc062774  jal         func_189DD0
label_13682c:
    if (ctx->pc == 0x13682Cu) {
        ctx->pc = 0x13682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136828u;
        // 0x13682c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136830u;
        goto label_136830;
    }
    ctx->pc = 0x136828u;
    SET_GPR_U32(ctx, 31, 0x136830u);
    ctx->pc = 0x13682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136828u;
    // 0x13682c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189DD0u, 0x136828u, 0x136830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136830u;
label_136830:
    // 0x136830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136834:
    // 0x136834: 0xc06825c  jal         func_1A0970
label_136838:
    if (ctx->pc == 0x136838u) {
        ctx->pc = 0x136838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136834u;
        // 0x136838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13683Cu;
        goto label_13683c;
    }
    ctx->pc = 0x136834u;
    SET_GPR_U32(ctx, 31, 0x13683Cu);
    ctx->pc = 0x136838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136834u;
    // 0x136838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x136834u, 0x13683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13683Cu;
label_13683c:
    // 0x13683c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13683cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136840:
    // 0x136840: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x136840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_136844:
    // 0x136844: 0xc0618da  jal         func_186368
label_136848:
    if (ctx->pc == 0x136848u) {
        ctx->pc = 0x136848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136844u;
        // 0x136848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13684Cu;
        goto label_13684c;
    }
    ctx->pc = 0x136844u;
    SET_GPR_U32(ctx, 31, 0x13684Cu);
    ctx->pc = 0x136848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136844u;
    // 0x136848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x136844u, 0x13684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13684Cu;
label_13684c:
    // 0x13684c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13684cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136850:
    // 0x136850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136854:
    // 0x136854: 0xc0618f2  jal         func_1863C8
label_136858:
    if (ctx->pc == 0x136858u) {
        ctx->pc = 0x136858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136854u;
        // 0x136858: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13685Cu;
        goto label_13685c;
    }
    ctx->pc = 0x136854u;
    SET_GPR_U32(ctx, 31, 0x13685Cu);
    ctx->pc = 0x136858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136854u;
    // 0x136858: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x136854u, 0x13685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13685Cu;
label_13685c:
    // 0x13685c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_136860:
    // 0x136860: 0x264500d0  addiu       $a1, $s2, 0xD0
    ctx->pc = 0x136860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_136864:
    // 0x136864: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x136864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_136868:
    // 0x136868: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13686c:
    // 0x13686c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136870:
    // 0x136870: 0x60f809  jalr        $v1
label_136874:
    if (ctx->pc == 0x136874u) {
        ctx->pc = 0x136874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136870u;
        // 0x136874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136878u;
        goto label_136878;
    }
    ctx->pc = 0x136870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136878u);
        ctx->pc = 0x136874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136870u;
        // 0x136874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136870u, 0x136878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136878u;
label_136878:
    // 0x136878: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x136878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13687c:
    // 0x13687c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13687cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_136880:
    // 0x136880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136884:
    // 0x136884: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x136884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_136888:
    // 0x136888: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13688c:
    // 0x13688c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136890:
    // 0x136890: 0x60f809  jalr        $v1
label_136894:
    if (ctx->pc == 0x136894u) {
        ctx->pc = 0x136894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136890u;
        // 0x136894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136898u;
        goto label_136898;
    }
    ctx->pc = 0x136890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136898u);
        ctx->pc = 0x136894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136890u;
        // 0x136894: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136890u, 0x136898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136898u;
label_136898:
    // 0x136898: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x136898u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_13689c:
    // 0x13689c: 0x5660ffda  bnel        $s3, $zero, . + 4 + (-0x26 << 2)
label_1368a0:
    if (ctx->pc == 0x1368A0u) {
        ctx->pc = 0x1368A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13689Cu;
        // 0x1368a0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368A4u;
        goto label_1368a4;
    }
    ctx->pc = 0x13689Cu;
    {
        const bool branch_taken_0x13689c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13689c) {
            ctx->pc = 0x1368A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13689Cu;
            // 0x1368a0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136808;
        }
    }
    ctx->pc = 0x1368A4u;
label_1368a4:
    // 0x1368a4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1368a8:
    if (ctx->pc == 0x1368A8u) {
        ctx->pc = 0x1368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A4u;
        // 0x1368a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368ACu;
        goto label_1368ac;
    }
    ctx->pc = 0x1368A4u;
    {
        const bool branch_taken_0x1368a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A4u;
        // 0x1368a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368a4) {
            ctx->pc = 0x13692Cu;
            return;
        }
    }
    ctx->pc = 0x1368ACu;
label_1368ac:
    // 0x1368ac: 0x0  nop
    ctx->pc = 0x1368acu;
    // NOP
    ctx->pc = 0x1368b0u;
}
