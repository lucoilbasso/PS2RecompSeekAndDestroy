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

// Function: entry_00101144
// Address: 0x101144 - 0x101160
void entry_00101144_0x101144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101144_0x101144");
#endif

    ctx->pc = 0x101144u;

    // 0x101144: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x101144u;
    {
        const bool branch_taken_0x101144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101144u;
        // 0x101148: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101144) {
            ctx->pc = 0x101160u;
            return;
        }
    }
    ctx->pc = 0x10114Cu;
    // 0x10114c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101150: 0x24a519f8  addiu       $a1, $a1, 0x19F8
    ctx->pc = 0x101150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    // 0x101154: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x101154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x101158: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101158u;
    SET_GPR_U32(ctx, 31, 0x101160u);
    ctx->pc = 0x10115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101158u;
    // 0x10115c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101158u, 0x101160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101160u;
}
