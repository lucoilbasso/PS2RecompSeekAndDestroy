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

// Function: entry_00121310
// Address: 0x121310 - 0x12132c
void entry_00121310_0x121310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121310_0x121310");
#endif

    ctx->pc = 0x121310u;

    // 0x121310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121318: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12131c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12131cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121320: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x121320u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x121324: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x121324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121328: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x121328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x12132cu;
}
