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

// Function: entry_0017e4d8
// Address: 0x17e4d8 - 0x17e4ec
void entry_0017e4d8_0x17e4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e4d8_0x17e4d8");
#endif

    ctx->pc = 0x17e4d8u;

    // 0x17e4d8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17e4dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E4DCu;
    {
        const bool branch_taken_0x17e4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e4dc) {
            ctx->pc = 0x17E4ECu;
            return;
        }
    }
    ctx->pc = 0x17E4E4u;
    // 0x17e4e4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17E4E4u;
    SET_GPR_U32(ctx, 31, 0x17E4ECu);
    ctx->pc = 0x17E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4E4u;
    // 0x17e4e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17E4E4u, 0x17E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4ECu;
}
