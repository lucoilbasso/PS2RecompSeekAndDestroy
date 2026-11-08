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

// Function: entry_001afbe8
// Address: 0x1afbe8 - 0x1afbf4
void entry_001afbe8_0x1afbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbe8_0x1afbe8");
#endif

    ctx->pc = 0x1afbe8u;

    // 0x1afbe8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFBE8u;
    {
        const bool branch_taken_0x1afbe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBE8u;
        // 0x1afbec: 0xae50a96c  sw          $s0, -0x5694($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294945132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbe8) {
            ctx->pc = 0x1AFBF4u;
            return;
        }
    }
    ctx->pc = 0x1AFBF0u;
    // 0x1afbf0: 0x42000038  ei
    ctx->pc = 0x1afbf0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x1afbf4u;
}
