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

// Function: entry_00127610
// Address: 0x127610 - 0x127618
void entry_00127610_0x127610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127610_0x127610");
#endif

    ctx->pc = 0x127610u;

    // 0x127610: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x127610u;
    {
        const bool branch_taken_0x127610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127610u;
        // 0x127614: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127610) {
            ctx->pc = 0x127630u;
            return;
        }
    }
    ctx->pc = 0x127618u;
}
