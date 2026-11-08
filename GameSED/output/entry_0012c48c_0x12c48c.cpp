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

// Function: entry_0012c48c
// Address: 0x12c48c - 0x12c494
void entry_0012c48c_0x12c48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c48c_0x12c48c");
#endif

    ctx->pc = 0x12c48cu;

    // 0x12c48c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12C48Cu;
    {
        const bool branch_taken_0x12c48c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C48Cu;
        // 0x12c490: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c48c) {
            ctx->pc = 0x12C498u;
            return;
        }
    }
    ctx->pc = 0x12C494u;
}
