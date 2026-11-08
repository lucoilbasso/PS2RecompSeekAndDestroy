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

// Function: entry_00140398
// Address: 0x140398 - 0x1403e0
void entry_00140398_0x140398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140398_0x140398");
#endif

    ctx->pc = 0x140398u;

    // 0x140398: 0xc781814c  lwc1        $f1, -0x7EB4($gp)
    ctx->pc = 0x140398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14039c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1403a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1403a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1403a4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1403a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1403a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1403a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1403ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1403acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1403b0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1403b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1403b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1403b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1403b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1403b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1403bc: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1403bcu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1403c0: 0x46020d69  min.s       $f21, $f1, $f2
    ctx->pc = 0x1403c0u;
    ctx->f[21] = std::min(ctx->f[1], ctx->f[2]);
    // 0x1403c4: 0xc7808150  lwc1        $f0, -0x7EB0($gp)
    ctx->pc = 0x1403c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1403c8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1403c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1403cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1403ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1403d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1403d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1403d4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1403d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1403d8: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x1403d8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x1403dc: 0x46010529  min.s       $f20, $f0, $f1
    ctx->pc = 0x1403dcu;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1403e0u;
}
