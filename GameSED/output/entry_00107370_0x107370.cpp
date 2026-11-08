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

// Function: entry_00107370
// Address: 0x107370 - 0x107378
void entry_00107370_0x107370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107370_0x107370");
#endif

    ctx->pc = 0x107370u;

    // 0x107370: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107370u;
    {
        const bool branch_taken_0x107370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107370u;
        // 0x107374: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107370) {
            ctx->pc = 0x1073A0u;
            return;
        }
    }
    ctx->pc = 0x107378u;
}
