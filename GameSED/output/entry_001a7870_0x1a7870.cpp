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

// Function: entry_001a7870
// Address: 0x1a7870 - 0x1a78a0
void entry_001a7870_0x1a7870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7870_0x1a7870");
#endif

    switch (ctx->pc) {
        case 0x1a7898u: goto label_1a7898;
        default: break;
    }

    ctx->pc = 0x1a7870u;

    // 0x1a7870: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7874: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7878: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a787c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7880: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7884: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a7884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7888: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7888u;
    {
        const bool branch_taken_0x1a7888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7888u;
        // 0x1a788c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7888) {
            ctx->pc = 0x1A78A0u;
            return;
        }
    }
    ctx->pc = 0x1A7890u;
    // 0x1a7890: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7890u;
    SET_GPR_U32(ctx, 31, 0x1A7898u);
    ctx->pc = 0x1A7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7890u;
    // 0x1a7894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7890u, 0x1A7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7898u;
label_1a7898:
    // 0x1a7898: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7898u;
    {
        const bool branch_taken_0x1a7898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7898u;
        // 0x1a789c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7898) {
            ctx->pc = 0x1A78A4u;
            return;
        }
    }
    ctx->pc = 0x1A78A0u;
}
