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

// Function: entry_0012cbe4
// Address: 0x12cbe4 - 0x12cc08
void entry_0012cbe4_0x12cbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cbe4_0x12cbe4");
#endif

    ctx->pc = 0x12cbe4u;

    // 0x12cbe4: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x12cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cbe8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x12cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cbec: 0xc6020134  lwc1        $f2, 0x134($s0)
    ctx->pc = 0x12cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cbf0: 0xc6030138  lwc1        $f3, 0x138($s0)
    ctx->pc = 0x12cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12cbf4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12cbf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12cbf8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12cbf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x12cbfc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x12cbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x12cc00: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x12CC00u;
    {
        const bool branch_taken_0x12cc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC00u;
        // 0x12cc04: 0xe6010130  swc1        $f1, 0x130($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc00) {
            ctx->pc = 0x12CD5Cu;
            return;
        }
    }
    ctx->pc = 0x12CC08u;
}
