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

// Function: entry_001372a0
// Address: 0x1372a0 - 0x1372b4
void entry_001372a0_0x1372a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001372a0_0x1372a0");
#endif

    ctx->pc = 0x1372a0u;

    // 0x1372a0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1372a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1372a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1372A4u;
    {
        const bool branch_taken_0x1372a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1372a4) {
            ctx->pc = 0x1372B4u;
            return;
        }
    }
    ctx->pc = 0x1372ACu;
    // 0x1372ac: 0xc061920  jal         func_186480
    ctx->pc = 0x1372ACu;
    SET_GPR_U32(ctx, 31, 0x1372B4u);
    ctx->pc = 0x1372B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1372ACu;
    // 0x1372b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1372ACu, 0x1372B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372B4u;
}
