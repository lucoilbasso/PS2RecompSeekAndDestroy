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

// Function: caseD_2
// Address: 0x15ab50 - 0x15ab58
void caseD_2_0x15ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x15ab50");
#endif

    ctx->pc = 0x15ab50u;

    // 0x15ab50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15AB50u;
    {
        const bool branch_taken_0x15ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB50u;
        // 0x15ab54: 0xc5000028  lwc1        $f0, 0x28($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab50) {
            ctx->pc = 0x15AB78u;
            return;
        }
    }
    ctx->pc = 0x15AB58u;
}
