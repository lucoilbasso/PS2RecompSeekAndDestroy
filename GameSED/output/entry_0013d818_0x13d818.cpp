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

// Function: entry_0013d818
// Address: 0x13d818 - 0x13d868
void entry_0013d818_0x13d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d818_0x13d818");
#endif

    ctx->pc = 0x13d818u;

    // 0x13d818: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x13d818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x13d81c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x13d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x13d820: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x13d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x13d824: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x13d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x13d828: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x13d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x13d82c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x13d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x13d830: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13d830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13d834: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x13d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x13d838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d83c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x13d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x13d840: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13d840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d844: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x13d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x13d848: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13d848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d84c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x13d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x13d850: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x13d850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13d854: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x13d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x13d858: 0x2457eb70  addiu       $s7, $v0, -0x1490
    ctx->pc = 0x13d858u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x13d85c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x13d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x13d860: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x13d860u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
    // 0x13d864: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x13d864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x13d868u;
}
