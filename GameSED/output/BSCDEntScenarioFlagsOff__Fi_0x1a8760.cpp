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

// Function: BSCDEntScenarioFlagsOff__Fi
// Address: 0x1a8760 - 0x1a8804
void BSCDEntScenarioFlagsOff__Fi_0x1a8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntScenarioFlagsOff__Fi_0x1a8760");
#endif

    switch (ctx->pc) {
        case 0x1a87f8u: goto label_1a87f8;
        default: break;
    }

    ctx->pc = 0x1a8760u;

    // 0x1a8760: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x1a8764: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a876c: 0x28830c00  slti        $v1, $a0, 0xC00
    ctx->pc = 0x1a876cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a8770: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x1a8770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x1a8774: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x1a8774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x1a8778: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a8778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a877c: 0x28820c40  slti        $v0, $a0, 0xC40
    ctx->pc = 0x1a877cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3136) ? 1 : 0);
    // 0x1a8780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8784: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8784u;
    {
        const bool branch_taken_0x1a8784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8784u;
        // 0x1a8788: 0x3086001f  andi        $a2, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8784) {
            ctx->pc = 0x1A87A8u;
            goto label_1a87a8;
        }
    }
    ctx->pc = 0x1A878Cu;
    // 0x1a878c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8790: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a8790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8794: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x1a8794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1a8798: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1a8798u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1a879c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a879cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a87a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A87A0u;
    {
        const bool branch_taken_0x1a87a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A0u;
        // 0x1a87a4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87a0) {
            ctx->pc = 0x1A87F8u;
            goto label_1a87f8;
        }
    }
    ctx->pc = 0x1A87A8u;
label_1a87a8:
    // 0x1a87a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A87A8u;
    {
        const bool branch_taken_0x1a87a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A8u;
        // 0x1a87ac: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87a8) {
            ctx->pc = 0x1A87E8u;
            goto label_1a87e8;
        }
    }
    ctx->pc = 0x1A87B0u;
    // 0x1a87b0: 0x2482f400  addiu       $v0, $a0, -0xC00
    ctx->pc = 0x1a87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964224));
    // 0x1a87b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a87b8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x1a87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a87bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a87bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a87c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a87c4: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1a87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a87c8: 0x278190e0  addiu       $at, $gp, -0x6F20
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a87cc: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1a87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a87d0: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x1a87d0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1a87d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a87d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1a87d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1a87dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A87DCu;
    {
        const bool branch_taken_0x1a87dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87DCu;
        // 0x1a87e0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87dc) {
            ctx->pc = 0x1A87F8u;
            goto label_1a87f8;
        }
    }
    ctx->pc = 0x1A87E4u;
    // 0x1a87e4: 0x0  nop
    ctx->pc = 0x1a87e4u;
    // NOP
label_1a87e8:
    // 0x1a87e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a87e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87ec: 0x24a593d8  addiu       $a1, $a1, -0x6C28
    ctx->pc = 0x1a87ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
    // 0x1a87f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A87F0u;
    SET_GPR_U32(ctx, 31, 0x1A87F8u);
    ctx->pc = 0x1A87F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A87F0u;
    // 0x1a87f4: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A87F0u, 0x1A87F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A87F8u;
label_1a87f8:
    // 0x1a87f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a87f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a87fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A87FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87FCu;
        // 0x1a8800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A87FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8804u;
}
