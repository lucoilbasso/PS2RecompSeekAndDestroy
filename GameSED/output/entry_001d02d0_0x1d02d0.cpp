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

// Function: entry_001d02d0
// Address: 0x1d02d0 - 0x1d0318
void entry_001d02d0_0x1d02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d02d0_0x1d02d0");
#endif

    ctx->pc = 0x1d02d0u;

    // 0x1d02d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d02d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d02d4: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x1d02d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
    // 0x1d02d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d02d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02dc: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x1d02dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x1d02e0: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1d02e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1d02e4: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x1d02e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x1d02e8: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x1d02e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x1d02ec: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x1d02ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x1d02f0: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x1d02f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x1d02f4: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x1d02f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x1d02f8: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x1d02f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d02fc: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x1d02fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1d0300: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x1d0300u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d0304: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x1d0304u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1d0308: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x1d0308u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d030c: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x1d030cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1d0310: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x1d0310u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d0314: 0xe7b30034  swc1        $f19, 0x34($sp)
    ctx->pc = 0x1d0314u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x1d0318u;
}
