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

// Function: entry_001300a0
// Address: 0x1300a0 - 0x1300a8
void entry_001300a0_0x1300a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001300a0_0x1300a0");
#endif

    ctx->pc = 0x1300a0u;

    // 0x1300a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1300A0u;
    {
        const bool branch_taken_0x1300a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1300A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300A0u;
        // 0x1300a4: 0xc91821  addu        $v1, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300a0) {
            ctx->pc = 0x1300E8u;
            return;
        }
    }
    ctx->pc = 0x1300A8u;
}
