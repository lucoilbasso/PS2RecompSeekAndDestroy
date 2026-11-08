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

// Function: entry_001a2b9c
// Address: 0x1a2b9c - 0x1a2ba8
void entry_001a2b9c_0x1a2b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2b9c_0x1a2b9c");
#endif

    ctx->pc = 0x1a2b9cu;

    // 0x1a2b9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a2b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a2ba0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A2BA0u;
    {
        const bool branch_taken_0x1a2ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA0u;
        // 0x1a2ba4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ba0) {
            ctx->pc = 0x1A2BD0u;
            return;
        }
    }
    ctx->pc = 0x1A2BA8u;
}
