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

// Function: entry_001318cc
// Address: 0x1318cc - 0x1318d4
void entry_001318cc_0x1318cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318cc_0x1318cc");
#endif

    ctx->pc = 0x1318ccu;

    // 0x1318cc: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1318CCu;
    {
        const bool branch_taken_0x1318cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1318cc) {
            ctx->pc = 0x1318D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1318CCu;
            // 0x1318d0: 0xaed00054  sw          $s0, 0x54($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1318D4u;
            return;
        }
    }
    ctx->pc = 0x1318D4u;
}
