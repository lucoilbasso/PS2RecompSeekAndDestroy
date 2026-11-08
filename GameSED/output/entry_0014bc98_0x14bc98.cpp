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

// Function: entry_0014bc98
// Address: 0x14bc98 - 0x14bca0
void entry_0014bc98_0x14bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bc98_0x14bc98");
#endif

    ctx->pc = 0x14bc98u;

    // 0x14bc98: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BC98u;
    {
        const bool branch_taken_0x14bc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC98u;
        // 0x14bc9c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc98) {
            ctx->pc = 0x14BCACu;
            return;
        }
    }
    ctx->pc = 0x14BCA0u;
}
