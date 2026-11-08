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

// Function: entry_0011f3b8
// Address: 0x11f3b8 - 0x11f3c8
void entry_0011f3b8_0x11f3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f3b8_0x11f3b8");
#endif

    ctx->pc = 0x11f3b8u;

    // 0x11f3b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11f3bc: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x11f3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11f3c0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11F3C0u;
    {
        const bool branch_taken_0x11f3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3C0u;
        // 0x11f3c4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3c0) {
            ctx->pc = 0x11F348u;
            return;
        }
    }
    ctx->pc = 0x11F3C8u;
}
