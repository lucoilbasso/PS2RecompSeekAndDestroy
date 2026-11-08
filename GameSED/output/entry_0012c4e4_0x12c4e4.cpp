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

// Function: entry_0012c4e4
// Address: 0x12c4e4 - 0x12c4ec
void entry_0012c4e4_0x12c4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4e4_0x12c4e4");
#endif

    ctx->pc = 0x12c4e4u;

    // 0x12c4e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12C4E4u;
    {
        const bool branch_taken_0x12c4e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4E4u;
        // 0x12c4e8: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4e4) {
            ctx->pc = 0x12C4F4u;
            return;
        }
    }
    ctx->pc = 0x12C4ECu;
}
