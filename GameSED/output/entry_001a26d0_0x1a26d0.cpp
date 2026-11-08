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

// Function: entry_001a26d0
// Address: 0x1a26d0 - 0x1a26e0
void entry_001a26d0_0x1a26d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a26d0_0x1a26d0");
#endif

    ctx->pc = 0x1a26d0u;

    // 0x1a26d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a26d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a26d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a26d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A26D8u;
    {
        const bool branch_taken_0x1a26d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26D8u;
        // 0x1a26dc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26d8) {
            ctx->pc = 0x1A2700u;
            return;
        }
    }
    ctx->pc = 0x1A26E0u;
}
