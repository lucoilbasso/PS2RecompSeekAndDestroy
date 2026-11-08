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

// Function: entry_00167398
// Address: 0x167398 - 0x1673a0
void entry_00167398_0x167398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167398_0x167398");
#endif

    ctx->pc = 0x167398u;

    // 0x167398: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167398u;
    {
        const bool branch_taken_0x167398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167398u;
        // 0x16739c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167398) {
            ctx->pc = 0x1673B0u;
            return;
        }
    }
    ctx->pc = 0x1673A0u;
}
