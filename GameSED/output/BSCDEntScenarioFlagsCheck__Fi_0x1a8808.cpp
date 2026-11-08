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

// Function: BSCDEntScenarioFlagsCheck__Fi
// Address: 0x1a8808 - 0x1a88a0
void BSCDEntScenarioFlagsCheck__Fi_0x1a8808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntScenarioFlagsCheck__Fi_0x1a8808");
#endif

    switch (ctx->pc) {
        case 0x1a8890u: goto label_1a8890;
        default: break;
    }

    ctx->pc = 0x1a8808u;

    // 0x1a8808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a880c: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1a880cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x1a8810: 0x28830c00  slti        $v1, $a0, 0xC00
    ctx->pc = 0x1a8810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a8814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8818: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x1a8818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a881c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8820: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8820u;
    {
        const bool branch_taken_0x1a8820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8820u;
        // 0x1a8824: 0x28850c40  slti        $a1, $a0, 0xC40 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8820) {
            ctx->pc = 0x1A8848u;
            goto label_1a8848;
        }
    }
    ctx->pc = 0x1A8828u;
    // 0x1a8828: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1a882c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a882cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a8830: 0x8c22fb30  lw          $v0, -0x4D0($at)
    ctx->pc = 0x1a8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966064)));
    // 0x1a8834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8838: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x1a8838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x1a883c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a8840: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A8840u;
    {
        const bool branch_taken_0x1a8840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8840u;
        // 0x1a8844: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8840) {
            ctx->pc = 0x1A8894u;
            goto label_1a8894;
        }
    }
    ctx->pc = 0x1A8848u;
label_1a8848:
    // 0x1a8848: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8848u;
    {
        const bool branch_taken_0x1a8848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8848u;
        // 0x1a884c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8848) {
            ctx->pc = 0x1A8880u;
            goto label_1a8880;
        }
    }
    ctx->pc = 0x1A8850u;
    // 0x1a8850: 0x2482f400  addiu       $v0, $a0, -0xC00
    ctx->pc = 0x1a8850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964224));
    // 0x1a8854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a8854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8858: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x1a8858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a885c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a8860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8864: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1a8864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a8868: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x1a8868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x1a886c: 0x8c4290e0  lw          $v0, -0x6F20($v0)
    ctx->pc = 0x1a886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938848)));
    // 0x1a8870: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1a8870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1a8874: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8874u;
    {
        const bool branch_taken_0x1a8874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8874u;
        // 0x1a8878: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8874) {
            ctx->pc = 0x1A8894u;
            goto label_1a8894;
        }
    }
    ctx->pc = 0x1A887Cu;
    // 0x1a887c: 0x0  nop
    ctx->pc = 0x1a887cu;
    // NOP
label_1a8880:
    // 0x1a8880: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a8880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8884: 0x24a593d8  addiu       $a1, $a1, -0x6C28
    ctx->pc = 0x1a8884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
    // 0x1a8888: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8888u;
    SET_GPR_U32(ctx, 31, 0x1A8890u);
    ctx->pc = 0x1A888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8888u;
    // 0x1a888c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8888u, 0x1A8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8890u;
label_1a8890:
    // 0x1a8890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8894:
    // 0x1a8894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8898: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8898u;
        // 0x1a889c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A88A0u;
}
