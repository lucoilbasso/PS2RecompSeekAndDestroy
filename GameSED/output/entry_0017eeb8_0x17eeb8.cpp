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

// Function: entry_0017eeb8
// Address: 0x17eeb8 - 0x17eec8
void entry_0017eeb8_0x17eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eeb8_0x17eeb8");
#endif

    ctx->pc = 0x17eeb8u;

    // 0x17eeb8: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EEB8u;
    {
        const bool branch_taken_0x17eeb8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEB8u;
        // 0x17eebc: 0x8e500024  lw          $s0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eeb8) {
            ctx->pc = 0x17EEE0u;
            return;
        }
    }
    ctx->pc = 0x17EEC0u;
    // 0x17eec0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x17eec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17eec8u;
}
