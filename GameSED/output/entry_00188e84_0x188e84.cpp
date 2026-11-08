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

// Function: entry_00188e84
// Address: 0x188e84 - 0x188e8c
void entry_00188e84_0x188e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e84_0x188e84");
#endif

    ctx->pc = 0x188e84u;

    // 0x188e84: 0x5640ff66  bnel        $s2, $zero, . + 4 + (-0x9A << 2)
    ctx->pc = 0x188E84u;
    {
        const bool branch_taken_0x188e84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x188e84) {
            ctx->pc = 0x188E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E84u;
            // 0x188e88: 0x26540020  addiu       $s4, $s2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C20u;
            return;
        }
    }
    ctx->pc = 0x188E8Cu;
}
