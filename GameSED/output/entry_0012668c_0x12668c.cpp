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

// Function: entry_0012668c
// Address: 0x12668c - 0x1266b0
void entry_0012668c_0x12668c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012668c_0x12668c");
#endif

    ctx->pc = 0x12668cu;

    // 0x12668c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x12668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x126690: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x126690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x126694: 0x3442a120  ori         $v0, $v0, 0xA120
    ctx->pc = 0x126694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
    // 0x126698: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x126698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x12669c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12669cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1266a0: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1266a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x1266a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1266a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266a8: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x1266a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x1266ac: 0x0  nop
    ctx->pc = 0x1266acu;
    // NOP
    ctx->pc = 0x1266b0u;
}
