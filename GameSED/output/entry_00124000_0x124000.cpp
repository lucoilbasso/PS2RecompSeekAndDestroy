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

// Function: entry_00124000
// Address: 0x124000 - 0x124038
void entry_00124000_0x124000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124000_0x124000");
#endif

    ctx->pc = 0x124000u;

    // 0x124000: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x124000u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x124004: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x124004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x124008: 0x460c5280  add.s       $f10, $f10, $f12
    ctx->pc = 0x124008u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[12]);
    // 0x12400c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x12400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124010: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x124010u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x124014: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x124014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124018: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x124018u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x12401c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x12401cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x124020: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x124020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x124024: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x124024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x124028: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x124028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12402c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x12402cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x124030: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x124030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x124034: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x124034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->pc = 0x124038u;
}
