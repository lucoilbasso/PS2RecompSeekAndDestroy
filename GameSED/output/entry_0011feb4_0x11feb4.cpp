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

// Function: entry_0011feb4
// Address: 0x11feb4 - 0x11febc
void entry_0011feb4_0x11feb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011feb4_0x11feb4");
#endif

    ctx->pc = 0x11feb4u;

    // 0x11feb4: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x11FEB4u;
    {
        const bool branch_taken_0x11feb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEB4u;
        // 0x11feb8: 0xe4810098  swc1        $f1, 0x98($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11feb4) {
            ctx->pc = 0x11FE48u;
            return;
        }
    }
    ctx->pc = 0x11FEBCu;
}
