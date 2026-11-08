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

// Function: entry_00125824
// Address: 0x125824 - 0x125890
void entry_00125824_0x125824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125824_0x125824");
#endif

    ctx->pc = 0x125824u;

    // 0x125824: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x125824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x125828: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x125828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x12582c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x12582cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x125830: 0x24425d10  addiu       $v0, $v0, 0x5D10
    ctx->pc = 0x125830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23824));
    // 0x125834: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x125838: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x12583c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x12583cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x255D10u));
    // 0x125840: 0x24635d20  addiu       $v1, $v1, 0x5D20
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23840));
    // 0x125844: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x125844u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x255D18u));
    // 0x125848: 0x3c022022  lui         $v0, 0x2022
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8226 << 16));
    // 0x12584c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x12584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x125850: 0x24930ad0  addiu       $s3, $a0, 0xAD0
    ctx->pc = 0x125850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 2768));
    // 0x125854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125858: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x125858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12585c: 0x2447f640  addiu       $a3, $v0, -0x9C0
    ctx->pc = 0x12585cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x125860: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x125860u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x255D28u));
    // 0x125864: 0x24081999  addiu       $t0, $zero, 0x1999
    ctx->pc = 0x125864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6553));
    // 0x125868: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x125868u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x255D20u));
    // 0x12586c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x12586cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125870: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x125870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x125874: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x125874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125878: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x125878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12587c: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x12587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x125880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125884: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x125884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x125888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x125888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12588c: 0x0  nop
    ctx->pc = 0x12588cu;
    // NOP
    ctx->pc = 0x125890u;
}
