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

// Function: entry_001a20c0
// Address: 0x1a20c0 - 0x1a20e8
void entry_001a20c0_0x1a20c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a20c0_0x1a20c0");
#endif

    switch (ctx->pc) {
        case 0x1a20e4u: goto label_1a20e4;
        default: break;
    }

    ctx->pc = 0x1a20c0u;

    // 0x1a20c0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a20c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A20C4u;
    {
        const bool branch_taken_0x1a20c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20C4u;
        // 0x1a20c8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20c4) {
            ctx->pc = 0x1A20E8u;
            return;
        }
    }
    ctx->pc = 0x1A20CCu;
    // 0x1a20cc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1a20ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a20d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a20d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a20d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A20D4u;
    {
        const bool branch_taken_0x1a20d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a20d4) {
            ctx->pc = 0x1A20D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A20D4u;
            // 0x1a20d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A20ECu;
            return;
        }
    }
    ctx->pc = 0x1A20DCu;
    // 0x1a20dc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A20DCu;
    SET_GPR_U32(ctx, 31, 0x1A20E4u);
    ctx->pc = 0x1A20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20DCu;
    // 0x1a20e0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A20DCu, 0x1A20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20E4u;
label_1a20e4:
    // 0x1a20e4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1a20e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a20e8u;
}
