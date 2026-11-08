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

// Function: entry_001421f8
// Address: 0x1421f8 - 0x142218
void entry_001421f8_0x1421f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001421f8_0x1421f8");
#endif

    ctx->pc = 0x1421f8u;

    // 0x1421f8: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1421f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1421fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1421fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x142200: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x142200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142204: 0xc783815c  lwc1        $f3, -0x7EA4($gp)
    ctx->pc = 0x142204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142208: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x142208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14220c: 0xc7808160  lwc1        $f0, -0x7EA0($gp)
    ctx->pc = 0x14220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142210: 0xc7818164  lwc1        $f1, -0x7E9C($gp)
    ctx->pc = 0x142210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142214: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x142214u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    ctx->pc = 0x142218u;
}
