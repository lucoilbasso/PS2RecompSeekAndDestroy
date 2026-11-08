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

// Function: entry_001a2824
// Address: 0x1a2824 - 0x1a2880
void entry_001a2824_0x1a2824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2824_0x1a2824");
#endif

    ctx->pc = 0x1a2824u;

    // 0x1a2824: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A2824u;
    {
        const bool branch_taken_0x1a2824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2824) {
            ctx->pc = 0x1A28F8u;
            return;
        }
    }
    ctx->pc = 0x1A282Cu;
    // 0x1a282c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a282cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a2830: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a2834: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A2834u;
    {
        const bool branch_taken_0x1a2834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2834u;
        // 0x1a2838: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2834) {
            ctx->pc = 0x1A28F8u;
            return;
        }
    }
    ctx->pc = 0x1A283Cu;
    // 0x1a283c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1a283cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a2840: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1a2840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1a2844: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A2844u;
    {
        const bool branch_taken_0x1a2844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2844u;
        // 0x1a2848: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2844) {
            ctx->pc = 0x1A2880u;
            return;
        }
    }
    ctx->pc = 0x1A284Cu;
    // 0x1a284c: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a284cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a2850: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1a2850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a2854: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a2854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a2858: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1a2858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a285c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a285cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2860: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a2860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a2864: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x1a2864u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1a2868: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x1a2868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x1a286c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1a286cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1a2870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2878u;
    {
        const bool branch_taken_0x1a2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2878u;
        // 0x1a287c: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2878) {
            ctx->pc = 0x1A2888u;
            return;
        }
    }
    ctx->pc = 0x1A2880u;
}
