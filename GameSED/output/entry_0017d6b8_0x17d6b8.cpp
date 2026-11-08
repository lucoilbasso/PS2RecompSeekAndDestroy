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

// Function: entry_0017d6b8
// Address: 0x17d6b8 - 0x17d6c4
void entry_0017d6b8_0x17d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d6b8_0x17d6b8");
#endif

    ctx->pc = 0x17d6b8u;

    // 0x17d6b8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17d6bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17D6BCu;
    {
        const bool branch_taken_0x17d6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6BCu;
        // 0x17d6c0: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6bc) {
            ctx->pc = 0x17D6A0u;
            return;
        }
    }
    ctx->pc = 0x17D6C4u;
}
