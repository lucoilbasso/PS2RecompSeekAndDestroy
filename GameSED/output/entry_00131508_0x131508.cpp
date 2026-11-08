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

// Function: entry_00131508
// Address: 0x131508 - 0x131518
void entry_00131508_0x131508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131508_0x131508");
#endif

    ctx->pc = 0x131508u;

    // 0x131508: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131508u;
    {
        const bool branch_taken_0x131508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x131508) {
            ctx->pc = 0x13150Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131508u;
            // 0x13150c: 0x8e100060  lw          $s0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13151Cu;
            return;
        }
    }
    ctx->pc = 0x131510u;
    // 0x131510: 0xc04c6c6  jal         func_131B18
    ctx->pc = 0x131510u;
    SET_GPR_U32(ctx, 31, 0x131518u);
    ctx->pc = 0x131514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131510u;
    // 0x131514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B18u, 0x131510u, 0x131518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131518u;
}
