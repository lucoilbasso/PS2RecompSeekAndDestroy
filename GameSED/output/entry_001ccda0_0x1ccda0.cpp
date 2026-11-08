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

// Function: entry_001ccda0
// Address: 0x1ccda0 - 0x1ccdb0
void entry_001ccda0_0x1ccda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccda0_0x1ccda0");
#endif

    ctx->pc = 0x1ccda0u;

    // 0x1ccda0: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CCDA0u;
    {
        const bool branch_taken_0x1ccda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccda0) {
            ctx->pc = 0x1CCDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCDA0u;
            // 0x1ccda4: 0x24830018  addiu       $v1, $a0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD88u;
            return;
        }
    }
    ctx->pc = 0x1CCDA8u;
    // 0x1ccda8: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCDA8u;
    {
        const bool branch_taken_0x1ccda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDA8u;
        // 0x1ccdac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccda8) {
            ctx->pc = 0x1CCDC4u;
            return;
        }
    }
    ctx->pc = 0x1CCDB0u;
}
