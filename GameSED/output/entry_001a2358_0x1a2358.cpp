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

// Function: entry_001a2358
// Address: 0x1a2358 - 0x1a237c
void entry_001a2358_0x1a2358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2358_0x1a2358");
#endif

    switch (ctx->pc) {
        case 0x1a2378u: goto label_1a2378;
        default: break;
    }

    ctx->pc = 0x1a2358u;

    // 0x1a2358: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2358u;
    {
        const bool branch_taken_0x1a2358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2358u;
        // 0x1a235c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2358) {
            ctx->pc = 0x1A237Cu;
            return;
        }
    }
    ctx->pc = 0x1A2360u;
    // 0x1a2360: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1a2360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a2364: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a2364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a2368: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2368u;
    {
        const bool branch_taken_0x1a2368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2368) {
            ctx->pc = 0x1A237Cu;
            return;
        }
    }
    ctx->pc = 0x1A2370u;
    // 0x1a2370: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A2370u;
    SET_GPR_U32(ctx, 31, 0x1A2378u);
    ctx->pc = 0x1A2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2370u;
    // 0x1a2374: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A2370u, 0x1A2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2378u;
label_1a2378:
    // 0x1a2378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a237cu;
}
