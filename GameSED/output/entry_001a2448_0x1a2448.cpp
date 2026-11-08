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

// Function: entry_001a2448
// Address: 0x1a2448 - 0x1a2494
void entry_001a2448_0x1a2448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2448_0x1a2448");
#endif

    ctx->pc = 0x1a2448u;

    // 0x1a2448: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A2448u;
    {
        const bool branch_taken_0x1a2448 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2448u;
        // 0x1a244c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2448) {
            ctx->pc = 0x1A2494u;
            return;
        }
    }
    ctx->pc = 0x1A2450u;
    // 0x1a2450: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a2450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a2454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2458: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x1a2458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a245c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a2460: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a2460u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a2464: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a2464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a2468: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a2468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a246c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2470: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a2470u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1a2474: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a2474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2478: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1a2478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1a247c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a247cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2480: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a2484: 0x0  nop
    ctx->pc = 0x1a2484u;
    // NOP
    // 0x1a2488: 0x0  nop
    ctx->pc = 0x1a2488u;
    // NOP
    // 0x1a248c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a248cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1a2490: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1a2490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->pc = 0x1a2494u;
}
