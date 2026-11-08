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

// Function: entry_001d07a0
// Address: 0x1d07a0 - 0x1d07e4
void entry_001d07a0_0x1d07a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d07a0_0x1d07a0");
#endif

    ctx->pc = 0x1d07a0u;

    // 0x1d07a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d07a4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1d07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1d07a8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1d07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1d07ac: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x1d07acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x1d07b0: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x1d07b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x1d07b4: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x1d07b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x1d07b8: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x1d07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x1d07bc: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x1d07bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x1d07c0: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1d07c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1d07c4: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x1d07c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1d07c8: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x1d07c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1d07cc: 0xe7af007c  swc1        $f15, 0x7C($sp)
    ctx->pc = 0x1d07ccu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1d07d0: 0xe7b00080  swc1        $f16, 0x80($sp)
    ctx->pc = 0x1d07d0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d07d4: 0xe7b10084  swc1        $f17, 0x84($sp)
    ctx->pc = 0x1d07d4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1d07d8: 0xe7b20088  swc1        $f18, 0x88($sp)
    ctx->pc = 0x1d07d8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1d07dc: 0xe7b3008c  swc1        $f19, 0x8C($sp)
    ctx->pc = 0x1d07dcu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1d07e0: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x1d07e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d07e4u;
}
