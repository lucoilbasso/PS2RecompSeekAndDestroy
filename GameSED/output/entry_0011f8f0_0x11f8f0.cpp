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

// Function: entry_0011f8f0
// Address: 0x11f8f0 - 0x11f8fc
void entry_0011f8f0_0x11f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f8f0_0x11f8f0");
#endif

    ctx->pc = 0x11f8f0u;

    // 0x11f8f0: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x11f8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x11f8f4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x11F8F4u;
    {
        const bool branch_taken_0x11f8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F4u;
        // 0x11f8f8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f4) {
            ctx->pc = 0x11F808u;
            return;
        }
    }
    ctx->pc = 0x11F8FCu;
}
