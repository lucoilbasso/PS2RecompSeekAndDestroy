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

// Function: entry_001a53a8
// Address: 0x1a53a8 - 0x1a53b0
void entry_001a53a8_0x1a53a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a53a8_0x1a53a8");
#endif

    ctx->pc = 0x1a53a8u;

    // 0x1a53a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A53A8u;
    {
        const bool branch_taken_0x1a53a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53A8u;
        // 0x1a53ac: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53a8) {
            ctx->pc = 0x1A53B4u;
            return;
        }
    }
    ctx->pc = 0x1A53B0u;
}
