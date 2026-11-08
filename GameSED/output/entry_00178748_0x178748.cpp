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

// Function: entry_00178748
// Address: 0x178748 - 0x17877c
void entry_00178748_0x178748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178748_0x178748");
#endif

    switch (ctx->pc) {
        case 0x178768u: goto label_178768;
        default: break;
    }

    ctx->pc = 0x178748u;

    // 0x178748: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17874c: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x17874cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x178750: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178754: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x178754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x178758: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x178758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
    // 0x17875c: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x17875cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x178760: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x178760u;
    SET_GPR_U32(ctx, 31, 0x178768u);
    ctx->pc = 0x178764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178760u;
    // 0x178764: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x178760u, 0x178768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178768u;
label_178768:
    // 0x178768: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x178768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17876c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178770: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x178770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x178774: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178774u;
    {
        const bool branch_taken_0x178774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x178778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178774u;
        // 0x178778: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178774) {
            ctx->pc = 0x178788u;
            return;
        }
    }
    ctx->pc = 0x17877Cu;
}
