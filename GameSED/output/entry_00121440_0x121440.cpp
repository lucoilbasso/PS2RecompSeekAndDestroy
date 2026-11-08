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

// Function: entry_00121440
// Address: 0x121440 - 0x121488
void entry_00121440_0x121440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121440_0x121440");
#endif

    ctx->pc = 0x121440u;

    // 0x121440: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x121440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x121444: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x121444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x121448: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x121448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x12144c: 0xc78280a8  lwc1        $f2, -0x7F58($gp)
    ctx->pc = 0x12144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121450: 0xc78180ac  lwc1        $f1, -0x7F54($gp)
    ctx->pc = 0x121450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121458: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x121458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12145c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12145cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121460: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x121460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x121464: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x121464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x121468: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x121468u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12146c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12146cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x121470: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x121470u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x121474: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x121474u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x121478: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x121478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12147c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12147cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121480: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x121480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x121484: 0x0  nop
    ctx->pc = 0x121484u;
    // NOP
    ctx->pc = 0x121488u;
}
