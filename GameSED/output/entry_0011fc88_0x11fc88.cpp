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

// Function: entry_0011fc88
// Address: 0x11fc88 - 0x11fcb8
void entry_0011fc88_0x11fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fc88_0x11fc88");
#endif

    ctx->pc = 0x11fc88u;

    // 0x11fc88: 0x10a00045  beqz        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x11FC88u;
    {
        const bool branch_taken_0x11fc88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fc88) {
            ctx->pc = 0x11FDA0u;
            return;
        }
    }
    ctx->pc = 0x11FC90u;
    // 0x11fc90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11fc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11fc94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fc98: 0xc4a50070  lwc1        $f5, 0x70($a1)
    ctx->pc = 0x11fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11fc9c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11fc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fca0: 0xc4a20088  lwc1        $f2, 0x88($a1)
    ctx->pc = 0x11fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11fca4: 0xc4a10080  lwc1        $f1, 0x80($a1)
    ctx->pc = 0x11fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fca8: 0xc4a40090  lwc1        $f4, 0x90($a1)
    ctx->pc = 0x11fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11fcac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x11fcacu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x11fcb0: 0xc4a30098  lwc1        $f3, 0x98($a1)
    ctx->pc = 0x11fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11fcb4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11fcb4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    ctx->pc = 0x11fcb8u;
}
