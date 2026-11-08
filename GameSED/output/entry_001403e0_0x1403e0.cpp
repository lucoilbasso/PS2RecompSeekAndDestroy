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

// Function: entry_001403e0
// Address: 0x1403e0 - 0x1403fc
void entry_001403e0_0x1403e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001403e0_0x1403e0");
#endif

    ctx->pc = 0x1403e0u;

    // 0x1403e0: 0xc64001a8  lwc1        $f0, 0x1A8($s2)
    ctx->pc = 0x1403e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403e4: 0xc64101a4  lwc1        $f1, 0x1A4($s2)
    ctx->pc = 0x1403e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1403e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1403e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1403ec: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1403ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1403f0: 0xe64001a8  swc1        $f0, 0x1A8($s2)
    ctx->pc = 0x1403f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
    // 0x1403f4: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1403F4u;
    {
        const bool branch_taken_0x1403f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1403F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403F4u;
        // 0x1403f8: 0xe64101a4  swc1        $f1, 0x1A4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403f4) {
            ctx->pc = 0x14042Cu;
            return;
        }
    }
    ctx->pc = 0x1403FCu;
}
