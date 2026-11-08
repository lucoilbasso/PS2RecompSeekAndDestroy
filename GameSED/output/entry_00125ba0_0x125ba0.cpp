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

// Function: entry_00125ba0
// Address: 0x125ba0 - 0x125bd0
void entry_00125ba0_0x125ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125ba0_0x125ba0");
#endif

    ctx->pc = 0x125ba0u;

    // 0x125ba0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x125ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x125ba4: 0xc79480e8  lwc1        $f20, -0x7F18($gp)
    ctx->pc = 0x125ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x125ba8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x125bac: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x125bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x125bb0: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x125bb0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x125bb4: 0x26f70ad0  addiu       $s7, $s7, 0xAD0
    ctx->pc = 0x125bb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2768));
    // 0x125bb8: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x125bb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x125bbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125bc0: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x125bc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x125bc4: 0x26b40170  addiu       $s4, $s5, 0x170
    ctx->pc = 0x125bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
    // 0x125bc8: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x125bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x125bcc: 0x0  nop
    ctx->pc = 0x125bccu;
    // NOP
    ctx->pc = 0x125bd0u;
}
