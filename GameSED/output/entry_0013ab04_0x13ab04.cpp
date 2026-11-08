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

// Function: entry_0013ab04
// Address: 0x13ab04 - 0x13ab1c
void entry_0013ab04_0x13ab04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ab04_0x13ab04");
#endif

    ctx->pc = 0x13ab04u;

    // 0x13ab04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ab08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AB08u;
    {
        const bool branch_taken_0x13ab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB08u;
        // 0x13ab0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab08) {
            ctx->pc = 0x13AB1Cu;
            return;
        }
    }
    ctx->pc = 0x13AB10u;
    // 0x13ab10: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13ab14: 0xc061a00  jal         func_186800
    ctx->pc = 0x13AB14u;
    SET_GPR_U32(ctx, 31, 0x13AB1Cu);
    ctx->pc = 0x13AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB14u;
    // 0x13ab18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186800u, 0x13AB14u, 0x13AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB1Cu;
}
