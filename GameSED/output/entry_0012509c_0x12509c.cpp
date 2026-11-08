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

// Function: entry_0012509c
// Address: 0x12509c - 0x125130
void entry_0012509c_0x12509c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012509c_0x12509c");
#endif

    ctx->pc = 0x12509cu;

    // 0x12509c: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x12509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x1250a0: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x1250a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x1250a4: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x1250a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x1250a8: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x1250a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x1250ac: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x1250acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x1250b0: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x1250b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x1250b4: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x1250b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x1250b8: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x1250b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x1250bc: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1250bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1250c0: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1250c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1250c4: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1250c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1250c8: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x1250c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
    // 0x1250cc: 0x8ea201bc  lw          $v0, 0x1BC($s5)
    ctx->pc = 0x1250ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 444)));
    // 0x1250d0: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x1250d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x1250d4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1250d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1250d8: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x1250d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x1250dc: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1250dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x1250e0: 0x12a001a8  beqz        $s5, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x1250E0u;
    {
        const bool branch_taken_0x1250e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E0u;
        // 0x1250e4: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250e0) {
            ctx->pc = 0x125784u;
            return;
        }
    }
    ctx->pc = 0x1250E8u;
    // 0x1250e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1250e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1250ec: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1250ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1250f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1250f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1250f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1250f8: 0x24847e40  addiu       $a0, $a0, 0x7E40
    ctx->pc = 0x1250f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32320));
    // 0x1250fc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1250fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x125100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125104: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x125104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x125108: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12510c: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x12510cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x125110: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x125110u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x1F7E40u));
    // 0x125114: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x125114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x125118: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x125118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12511c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x125120: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x125120u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x1F7E50u));
    // 0x125124: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x125124u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x125128: 0xc79780c8  lwc1        $f23, -0x7F38($gp)
    ctx->pc = 0x125128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12512c: 0x0  nop
    ctx->pc = 0x12512cu;
    // NOP
    ctx->pc = 0x125130u;
}
