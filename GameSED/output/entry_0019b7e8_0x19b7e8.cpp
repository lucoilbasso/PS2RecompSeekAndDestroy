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

// Function: entry_0019b7e8
// Address: 0x19b7e8 - 0x19b7f4
void entry_0019b7e8_0x19b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b7e8_0x19b7e8");
#endif

    ctx->pc = 0x19b7e8u;

    // 0x19b7e8: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x19b7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19b7ec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19B7ECu;
    {
        const bool branch_taken_0x19b7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7ECu;
        // 0x19b7f0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7ec) {
            ctx->pc = 0x19B790u;
            return;
        }
    }
    ctx->pc = 0x19B7F4u;
}
