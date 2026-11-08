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

// Function: entry_00142124
// Address: 0x142124 - 0x14212c
void entry_00142124_0x142124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142124_0x142124");
#endif

    ctx->pc = 0x142124u;

    // 0x142124: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142124u;
    {
        const bool branch_taken_0x142124 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x142124) {
            ctx->pc = 0x142128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142124u;
            // 0x142128: 0xacb0014c  sw          $s0, 0x14C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14212Cu;
            return;
        }
    }
    ctx->pc = 0x14212Cu;
}
