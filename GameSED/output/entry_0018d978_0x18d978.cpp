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

// Function: entry_0018d978
// Address: 0x18d978 - 0x18d988
void entry_0018d978_0x18d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d978_0x18d978");
#endif

    ctx->pc = 0x18d978u;

    // 0x18d978: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d97c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d980: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x18D980u;
    {
        const bool branch_taken_0x18d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D980u;
        // 0x18d984: 0xa3c20003  sb          $v0, 0x3($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d980) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D988u;
}
