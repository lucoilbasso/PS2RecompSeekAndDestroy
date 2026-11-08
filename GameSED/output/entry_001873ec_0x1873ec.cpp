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

// Function: entry_001873ec
// Address: 0x1873ec - 0x187408
void entry_001873ec_0x1873ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001873ec_0x1873ec");
#endif

    ctx->pc = 0x1873ecu;

    // 0x1873ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1873ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1873f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1873f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1873f8: 0xc60c0154  lwc1        $f12, 0x154($s0)
    ctx->pc = 0x1873f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1873fc: 0x0  nop
    ctx->pc = 0x1873fcu;
    // NOP
    // 0x187400: 0x0  nop
    ctx->pc = 0x187400u;
    // NOP
    // 0x187404: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x187404u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    ctx->pc = 0x187408u;
}
