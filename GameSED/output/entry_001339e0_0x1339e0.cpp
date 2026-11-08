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

// Function: entry_001339e0
// Address: 0x1339e0 - 0x1339e8
void entry_001339e0_0x1339e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001339e0_0x1339e0");
#endif

    ctx->pc = 0x1339e0u;

    // 0x1339e0: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x1339E0u;
    {
        const bool branch_taken_0x1339e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339E0u;
        // 0x1339e4: 0xc4a04004  lwc1        $f0, 0x4004($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339e0) {
            ctx->pc = 0x134090u;
            return;
        }
    }
    ctx->pc = 0x1339E8u;
}
