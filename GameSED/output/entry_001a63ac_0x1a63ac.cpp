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

// Function: entry_001a63ac
// Address: 0x1a63ac - 0x1a63e8
void entry_001a63ac_0x1a63ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a63ac_0x1a63ac");
#endif

    switch (ctx->pc) {
        case 0x1a63e0u: goto label_1a63e0;
        default: break;
    }

    ctx->pc = 0x1a63acu;

    // 0x1a63ac: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a63acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a63b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a63b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a63b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a63b8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a63bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a63bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a63c0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a63c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a63c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a63c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a63cc: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a63ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a63d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A63D0u;
    {
        const bool branch_taken_0x1a63d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63D0u;
        // 0x1a63d4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63d0) {
            ctx->pc = 0x1A63E8u;
            return;
        }
    }
    ctx->pc = 0x1A63D8u;
    // 0x1a63d8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A63D8u;
    SET_GPR_U32(ctx, 31, 0x1A63E0u);
    ctx->pc = 0x1A63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63D8u;
    // 0x1a63dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A63D8u, 0x1A63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63E0u;
label_1a63e0:
    // 0x1a63e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A63E0u;
    {
        const bool branch_taken_0x1a63e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63E0u;
        // 0x1a63e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63e0) {
            ctx->pc = 0x1A63ECu;
            return;
        }
    }
    ctx->pc = 0x1A63E8u;
}
