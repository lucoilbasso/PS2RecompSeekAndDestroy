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

// Function: entry_001d0714
// Address: 0x1d0714 - 0x1d0754
void entry_001d0714_0x1d0714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0714_0x1d0714");
#endif

    ctx->pc = 0x1d0714u;

    // 0x1d0714: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d0714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d0718: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d0718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1d071c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1d071cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1d0720: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x1d0720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x1d0724: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x1d0724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x1d0728: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x1d0728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x1d072c: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x1d072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x1d0730: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x1d0730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x1d0734: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x1d0734u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1d0738: 0xe7ad007c  swc1        $f13, 0x7C($sp)
    ctx->pc = 0x1d0738u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1d073c: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x1d073cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d0740: 0xe7af0084  swc1        $f15, 0x84($sp)
    ctx->pc = 0x1d0740u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1d0744: 0xe7b00088  swc1        $f16, 0x88($sp)
    ctx->pc = 0x1d0744u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1d0748: 0xe7b1008c  swc1        $f17, 0x8C($sp)
    ctx->pc = 0x1d0748u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1d074c: 0xe7b20090  swc1        $f18, 0x90($sp)
    ctx->pc = 0x1d074cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d0750: 0xe7b30094  swc1        $f19, 0x94($sp)
    ctx->pc = 0x1d0750u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x1d0754u;
}
