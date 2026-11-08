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

// Function: entry_0017f9ac
// Address: 0x17f9ac - 0x17f9b4
void entry_0017f9ac_0x17f9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f9ac_0x17f9ac");
#endif

    ctx->pc = 0x17f9acu;

    // 0x17f9ac: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F9ACu;
    {
        const bool branch_taken_0x17f9ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9ACu;
        // 0x17f9b0: 0x24660002  addiu       $a2, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9ac) {
            ctx->pc = 0x17F990u;
            return;
        }
    }
    ctx->pc = 0x17F9B4u;
}
