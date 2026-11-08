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

// Function: entry_00107df0
// Address: 0x107df0 - 0x107dfc
void entry_00107df0_0x107df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107df0_0x107df0");
#endif

    ctx->pc = 0x107df0u;

    // 0x107df0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x107df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107df4: 0x50a0005e  beql        $a1, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x107DF4u;
    {
        const bool branch_taken_0x107df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x107df4) {
            ctx->pc = 0x107DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107DF4u;
            // 0x107df8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F70u;
            return;
        }
    }
    ctx->pc = 0x107DFCu;
}
