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

// Function: entry_00185b80
// Address: 0x185b80 - 0x185b88
void entry_00185b80_0x185b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b80_0x185b80");
#endif

    ctx->pc = 0x185b80u;

    // 0x185b80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185B80u;
    {
        const bool branch_taken_0x185b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B80u;
        // 0x185b84: 0x260500d4  addiu       $a1, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b80) {
            ctx->pc = 0x185B90u;
            return;
        }
    }
    ctx->pc = 0x185B88u;
}
