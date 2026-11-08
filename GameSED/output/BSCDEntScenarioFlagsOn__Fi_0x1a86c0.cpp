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

// Function: BSCDEntScenarioFlagsOn__Fi
// Address: 0x1a86c0 - 0x1a875c
void BSCDEntScenarioFlagsOn__Fi_0x1a86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntScenarioFlagsOn__Fi_0x1a86c0");
#endif

    switch (ctx->pc) {
        case 0x1a8750u: goto label_1a8750;
        default: break;
    }

    ctx->pc = 0x1a86c0u;

    // 0x1a86c0: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1a86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x1a86c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a86c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a86c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a86cc: 0x28830c00  slti        $v1, $a0, 0xC00
    ctx->pc = 0x1a86ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a86d0: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x1a86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x1a86d4: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x1a86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x1a86d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a86d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a86dc: 0x28820c40  slti        $v0, $a0, 0xC40
    ctx->pc = 0x1a86dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3136) ? 1 : 0);
    // 0x1a86e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a86e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a86e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A86E4u;
    {
        const bool branch_taken_0x1a86e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86E4u;
        // 0x1a86e8: 0x3086001f  andi        $a2, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86e4) {
            ctx->pc = 0x1A8708u;
            goto label_1a8708;
        }
    }
    ctx->pc = 0x1A86ECu;
    // 0x1a86ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a86f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a86f4: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x1a86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1a86f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a86f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a86fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A86FCu;
    {
        const bool branch_taken_0x1a86fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86FCu;
        // 0x1a8700: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86fc) {
            ctx->pc = 0x1A8750u;
            goto label_1a8750;
        }
    }
    ctx->pc = 0x1A8704u;
    // 0x1a8704: 0x0  nop
    ctx->pc = 0x1a8704u;
    // NOP
label_1a8708:
    // 0x1a8708: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8708u;
    {
        const bool branch_taken_0x1a8708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8708u;
        // 0x1a870c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8708) {
            ctx->pc = 0x1A8740u;
            goto label_1a8740;
        }
    }
    ctx->pc = 0x1A8710u;
    // 0x1a8710: 0x2482f400  addiu       $v0, $a0, -0xC00
    ctx->pc = 0x1a8710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964224));
    // 0x1a8714: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a8714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8718: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x1a8718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a871c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a8720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8724: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1a8724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a8728: 0x278190e0  addiu       $at, $gp, -0x6F20
    ctx->pc = 0x1a8728u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a872c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1a872cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a8730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8734: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a8734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a8738: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8738u;
    {
        const bool branch_taken_0x1a8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8738u;
        // 0x1a873c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8738) {
            ctx->pc = 0x1A8750u;
            goto label_1a8750;
        }
    }
    ctx->pc = 0x1A8740u;
label_1a8740:
    // 0x1a8740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a8740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8744: 0x24a593d8  addiu       $a1, $a1, -0x6C28
    ctx->pc = 0x1a8744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
    // 0x1a8748: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A8748u;
    SET_GPR_U32(ctx, 31, 0x1A8750u);
    ctx->pc = 0x1A874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8748u;
    // 0x1a874c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A8748u, 0x1A8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8750u;
label_1a8750:
    // 0x1a8750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8754: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8754u;
        // 0x1a8758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A875Cu;
}
