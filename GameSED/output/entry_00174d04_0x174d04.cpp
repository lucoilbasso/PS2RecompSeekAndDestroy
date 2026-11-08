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

// Function: entry_00174d04
// Address: 0x174d04 - 0x174d20
void entry_00174d04_0x174d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d04_0x174d04");
#endif

    switch (ctx->pc) {
        case 0x174d10u: goto label_174d10;
        default: break;
    }

    ctx->pc = 0x174d04u;

    // 0x174d04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x174d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d08: 0xc073d56  jal         func_1CF558
    ctx->pc = 0x174D08u;
    SET_GPR_U32(ctx, 31, 0x174D10u);
    ctx->pc = 0x174D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D08u;
    // 0x174d0c: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF558u, 0x174D08u, 0x174D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D10u;
label_174d10:
    // 0x174d10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174D10u;
    {
        const bool branch_taken_0x174d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D10u;
        // 0x174d14: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d10) {
            ctx->pc = 0x174D20u;
            return;
        }
    }
    ctx->pc = 0x174D18u;
    // 0x174d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174D18u;
    {
        const bool branch_taken_0x174d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D18u;
        // 0x174d1c: 0x2447d498  addiu       $a3, $v0, -0x2B68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d18) {
            ctx->pc = 0x174D28u;
            return;
        }
    }
    ctx->pc = 0x174D20u;
}
