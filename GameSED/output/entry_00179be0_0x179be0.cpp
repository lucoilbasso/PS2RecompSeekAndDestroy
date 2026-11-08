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

// Function: entry_00179be0
// Address: 0x179be0 - 0x179be8
void entry_00179be0_0x179be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179be0_0x179be0");
#endif

    ctx->pc = 0x179be0u;

    // 0x179be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179BE0u;
    {
        const bool branch_taken_0x179be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BE0u;
        // 0x179be4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179be0) {
            ctx->pc = 0x179BECu;
            return;
        }
    }
    ctx->pc = 0x179BE8u;
}
