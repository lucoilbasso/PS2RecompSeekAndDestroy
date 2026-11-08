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

// Function: entry_001861c4
// Address: 0x1861c4 - 0x1861d0
void entry_001861c4_0x1861c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001861c4_0x1861c4");
#endif

    ctx->pc = 0x1861c4u;

    // 0x1861c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1861C4u;
    {
        const bool branch_taken_0x1861c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861C4u;
        // 0x1861c8: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861c4) {
            ctx->pc = 0x1861F8u;
            return;
        }
    }
    ctx->pc = 0x1861CCu;
    // 0x1861cc: 0x0  nop
    ctx->pc = 0x1861ccu;
    // NOP
    ctx->pc = 0x1861d0u;
}
