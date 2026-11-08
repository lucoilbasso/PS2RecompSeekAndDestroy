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

// Function: entry_00107368
// Address: 0x107368 - 0x107370
void entry_00107368_0x107368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107368_0x107368");
#endif

    ctx->pc = 0x107368u;

    // 0x107368: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x107368u;
    {
        const bool branch_taken_0x107368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107368u;
        // 0x10736c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107368) {
            ctx->pc = 0x1073A0u;
            return;
        }
    }
    ctx->pc = 0x107370u;
}
