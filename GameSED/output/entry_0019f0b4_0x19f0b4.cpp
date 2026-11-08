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

// Function: entry_0019f0b4
// Address: 0x19f0b4 - 0x19f0c0
void entry_0019f0b4_0x19f0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f0b4_0x19f0b4");
#endif

    ctx->pc = 0x19f0b4u;

    // 0x19f0b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F0B4u;
    {
        const bool branch_taken_0x19f0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0B4u;
        // 0x19f0b8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0b4) {
            ctx->pc = 0x19F0C0u;
            return;
        }
    }
    ctx->pc = 0x19F0BCu;
    // 0x19f0bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f0c0u;
}
