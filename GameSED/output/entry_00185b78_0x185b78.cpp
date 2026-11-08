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

// Function: entry_00185b78
// Address: 0x185b78 - 0x185b80
void entry_00185b78_0x185b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b78_0x185b78");
#endif

    ctx->pc = 0x185b78u;

    // 0x185b78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x185B78u;
    {
        const bool branch_taken_0x185b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B78u;
        // 0x185b7c: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b78) {
            ctx->pc = 0x185B90u;
            return;
        }
    }
    ctx->pc = 0x185B80u;
}
