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

// Function: entry_00183df8
// Address: 0x183df8 - 0x183e00
void entry_00183df8_0x183df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183df8_0x183df8");
#endif

    ctx->pc = 0x183df8u;

    // 0x183df8: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183DF8u;
    {
        const bool branch_taken_0x183df8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DF8u;
        // 0x183dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183df8) {
            ctx->pc = 0x183E1Cu;
            return;
        }
    }
    ctx->pc = 0x183E00u;
}
