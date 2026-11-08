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

// Function: entry_0011f2ac
// Address: 0x11f2ac - 0x11f2b8
void entry_0011f2ac_0x11f2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f2ac_0x11f2ac");
#endif

    ctx->pc = 0x11f2acu;

    // 0x11f2ac: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x11f2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x11f2b0: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x11F2B0u;
    {
        const bool branch_taken_0x11f2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2B0u;
        // 0x11f2b4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2b0) {
            ctx->pc = 0x11F030u;
            return;
        }
    }
    ctx->pc = 0x11F2B8u;
}
