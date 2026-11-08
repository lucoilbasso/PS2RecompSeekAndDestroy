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

// Function: entry_001a5ff4
// Address: 0x1a5ff4 - 0x1a6000
void entry_001a5ff4_0x1a5ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5ff4_0x1a5ff4");
#endif

    ctx->pc = 0x1a5ff4u;

    // 0x1a5ff4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5FF4u;
    {
        const bool branch_taken_0x1a5ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF4u;
        // 0x1a5ff8: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff4) {
            ctx->pc = 0x1A6010u;
            return;
        }
    }
    ctx->pc = 0x1A5FFCu;
    // 0x1a5ffc: 0x0  nop
    ctx->pc = 0x1a5ffcu;
    // NOP
    ctx->pc = 0x1a6000u;
}
