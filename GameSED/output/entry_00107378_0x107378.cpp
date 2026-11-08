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

// Function: entry_00107378
// Address: 0x107378 - 0x107380
void entry_00107378_0x107378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107378_0x107378");
#endif

    ctx->pc = 0x107378u;

    // 0x107378: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x107378u;
    {
        const bool branch_taken_0x107378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107378u;
        // 0x10737c: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107378) {
            ctx->pc = 0x1073A0u;
            return;
        }
    }
    ctx->pc = 0x107380u;
}
