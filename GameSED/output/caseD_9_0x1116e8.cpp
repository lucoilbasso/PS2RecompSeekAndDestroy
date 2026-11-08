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

// Function: caseD_9
// Address: 0x1116e8 - 0x111718
void caseD_9_0x1116e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1116e8");
#endif

    switch (ctx->pc) {
        case 0x111704u: goto label_111704;
        case 0x111710u: goto label_111710;
        default: break;
    }

    ctx->pc = 0x1116e8u;

    // 0x1116e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1116e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1116ec: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1116ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1116f0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1116f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1116f4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1116F4u;
    {
        const bool branch_taken_0x1116f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1116F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116F4u;
        // 0x1116f8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116f4) {
            ctx->pc = 0x111718u;
            return;
        }
    }
    ctx->pc = 0x1116FCu;
    // 0x1116fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1116FCu;
    SET_GPR_U32(ctx, 31, 0x111704u);
    ctx->pc = 0x111700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116FCu;
    // 0x111700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1116FCu, 0x111704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111704u;
label_111704:
    // 0x111704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111708: 0xc05328a  jal         func_14CA28
    ctx->pc = 0x111708u;
    SET_GPR_U32(ctx, 31, 0x111710u);
    ctx->pc = 0x11170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111708u;
    // 0x11170c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA28u, 0x111708u, 0x111710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111710u;
label_111710:
    // 0x111710: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x111710u;
    {
        const bool branch_taken_0x111710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111710u;
        // 0x111714: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111710) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111718u;
}
