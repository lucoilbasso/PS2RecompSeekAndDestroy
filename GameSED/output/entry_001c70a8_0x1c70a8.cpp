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

// Function: entry_001c70a8
// Address: 0x1c70a8 - 0x1c70c0
void entry_001c70a8_0x1c70a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c70a8_0x1c70a8");
#endif

    ctx->pc = 0x1c70a8u;

    // 0x1c70a8: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x1c70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1c70ac: 0x4a00021  bltz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C70ACu;
    {
        const bool branch_taken_0x1c70ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1C70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70ACu;
        // 0x1c70b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70ac) {
            ctx->pc = 0x1C7134u;
            return;
        }
    }
    ctx->pc = 0x1C70B4u;
    // 0x1c70b4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c70b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c70b8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c70b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70bc: 0x0  nop
    ctx->pc = 0x1c70bcu;
    // NOP
    ctx->pc = 0x1c70c0u;
}
