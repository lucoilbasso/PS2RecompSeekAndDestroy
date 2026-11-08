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

// Function: entry_0019b480
// Address: 0x19b480 - 0x19b4b8
void entry_0019b480_0x19b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b480_0x19b480");
#endif

    ctx->pc = 0x19b480u;

    // 0x19b480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b484: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x19b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x19b488: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x19b488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x19b48c: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x19b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x19b490: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x19b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x19b494: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x19b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x19b498: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x19b498u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19b49c: 0xe7ad0024  swc1        $f13, 0x24($sp)
    ctx->pc = 0x19b49cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19b4a0: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x19b4a0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19b4a4: 0xe7af002c  swc1        $f15, 0x2C($sp)
    ctx->pc = 0x19b4a4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19b4a8: 0xe7b00030  swc1        $f16, 0x30($sp)
    ctx->pc = 0x19b4a8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19b4ac: 0xe7b10034  swc1        $f17, 0x34($sp)
    ctx->pc = 0x19b4acu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x19b4b0: 0xe7b20038  swc1        $f18, 0x38($sp)
    ctx->pc = 0x19b4b0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x19b4b4: 0xe7b3003c  swc1        $f19, 0x3C($sp)
    ctx->pc = 0x19b4b4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x19b4b8u;
}
