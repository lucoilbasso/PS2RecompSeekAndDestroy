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

// Function: entry_001a37bc
// Address: 0x1a37bc - 0x1a3808
void entry_001a37bc_0x1a37bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a37bc_0x1a37bc");
#endif

    ctx->pc = 0x1a37bcu;

    // 0x1a37bc: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a37bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a37c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a37c4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1a37c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a37c8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a37c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a37cc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a37ccu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a37d0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1a37d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a37d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a37dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a37dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1a37e0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a37e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a37e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a37e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a37e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a37e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a37ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a37ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a37f0: 0x0  nop
    ctx->pc = 0x1a37f0u;
    // NOP
    // 0x1a37f4: 0x0  nop
    ctx->pc = 0x1a37f4u;
    // NOP
    // 0x1a37f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a37f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1a37fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A37FCu;
    {
        const bool branch_taken_0x1a37fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37FCu;
        // 0x1a3800: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37fc) {
            ctx->pc = 0x1A3810u;
            return;
        }
    }
    ctx->pc = 0x1A3804u;
    // 0x1a3804: 0x0  nop
    ctx->pc = 0x1a3804u;
    // NOP
    ctx->pc = 0x1a3808u;
}
