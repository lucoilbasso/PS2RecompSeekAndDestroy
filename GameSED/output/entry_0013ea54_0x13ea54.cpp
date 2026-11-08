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

// Function: entry_0013ea54
// Address: 0x13ea54 - 0x13ea80
void entry_0013ea54_0x13ea54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ea54_0x13ea54");
#endif

    ctx->pc = 0x13ea54u;

    // 0x13ea54: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x13ea54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13ea58: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13ea5c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x13ea5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13ea60: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x13ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13ea64: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x13ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ea68: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ea6c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x13ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ea70: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x13ea70u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x13ea74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x13ea74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x13ea78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13ea7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ea80u;
}
