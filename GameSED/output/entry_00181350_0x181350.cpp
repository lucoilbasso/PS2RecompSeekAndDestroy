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

// Function: entry_00181350
// Address: 0x181350 - 0x181384
void entry_00181350_0x181350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181350_0x181350");
#endif

    ctx->pc = 0x181350u;

    // 0x181350: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x181350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181354: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x181354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181358: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x181358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18135c: 0xade4001c  sw          $a0, 0x1C($t7)
    ctx->pc = 0x18135cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 4));
    // 0x181360: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x181360u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x181364: 0xade20020  sw          $v0, 0x20($t7)
    ctx->pc = 0x181364u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 2));
    // 0x181368: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x181368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x18136c: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x18136cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x181370: 0xe5e2000c  swc1        $f2, 0xC($t7)
    ctx->pc = 0x181370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x181374: 0xade50010  sw          $a1, 0x10($t7)
    ctx->pc = 0x181374u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 5));
    // 0x181378: 0xade60014  sw          $a2, 0x14($t7)
    ctx->pc = 0x181378u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 6));
    // 0x18137c: 0xadea0018  sw          $t2, 0x18($t7)
    ctx->pc = 0x18137cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 10));
    // 0x181380: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x181380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x181384u;
}
