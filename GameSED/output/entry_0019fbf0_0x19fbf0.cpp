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

// Function: entry_0019fbf0
// Address: 0x19fbf0 - 0x19fc08
void entry_0019fbf0_0x19fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fbf0_0x19fbf0");
#endif

    ctx->pc = 0x19fbf0u;

    // 0x19fbf0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x19fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x19fbf4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x19fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19fbf8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fbfc: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x19fbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x19fc00: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x19FC00u;
    {
        const bool branch_taken_0x19fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc00) {
            ctx->pc = 0x19FC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC00u;
            // 0x19fc04: 0x671024  and         $v0, $v1, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBD8u;
            return;
        }
    }
    ctx->pc = 0x19FC08u;
}
