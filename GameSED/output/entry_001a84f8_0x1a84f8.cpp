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

// Function: entry_001a84f8
// Address: 0x1a84f8 - 0x1a8500
void entry_001a84f8_0x1a84f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a84f8_0x1a84f8");
#endif

    ctx->pc = 0x1a84f8u;

    // 0x1a84f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A84F8u;
    {
        const bool branch_taken_0x1a84f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F8u;
        // 0x1a84fc: 0xaf809080  sw          $zero, -0x6F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f8) {
            ctx->pc = 0x1A850Cu;
            return;
        }
    }
    ctx->pc = 0x1A8500u;
}
