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

// Function: entry_00121ec4
// Address: 0x121ec4 - 0x121ee8
void entry_00121ec4_0x121ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ec4_0x121ec4");
#endif

    ctx->pc = 0x121ec4u;

    // 0x121ec4: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x121ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121ec8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x121ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121ecc: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x121eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121ed0: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x121ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121ed4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121ed8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x121ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x121edc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x121edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121ee0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x121EE0u;
    {
        const bool branch_taken_0x121ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EE0u;
        // 0x121ee4: 0xe6010114  swc1        $f1, 0x114($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ee0) {
            ctx->pc = 0x121F08u;
            return;
        }
    }
    ctx->pc = 0x121EE8u;
}
