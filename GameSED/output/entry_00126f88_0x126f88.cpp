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

// Function: entry_00126f88
// Address: 0x126f88 - 0x126ff8
void entry_00126f88_0x126f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126f88_0x126f88");
#endif

    ctx->pc = 0x126f88u;

    // 0x126f88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x126f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f8c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x126f8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126f90: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x126f90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126f94: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x126f94u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126f98: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x126f98u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126f9c: 0xfac40000  sqc2        $vf4, 0x0($s6)
    ctx->pc = 0x126f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126fa0: 0xfac50010  sqc2        $vf5, 0x10($s6)
    ctx->pc = 0x126fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x126fa4: 0xfac60020  sqc2        $vf6, 0x20($s6)
    ctx->pc = 0x126fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x126fa8: 0xfac70030  sqc2        $vf7, 0x30($s6)
    ctx->pc = 0x126fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x126fac: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x126facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x126fb0: 0x6f2021  addu        $a0, $v1, $t7
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x126fb4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x126fb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126fb8: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x126fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x126fbc: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x126fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x126fc0: 0x24c60e10  addiu       $a2, $a2, 0xE10
    ctx->pc = 0x126fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3600));
    // 0x126fc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x126fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x126fc8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x126fc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126fcc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x126fccu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x126fd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126fd4: 0x16e40008  bne         $s7, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126FD4u;
    {
        const bool branch_taken_0x126fd4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 4));
        ctx->pc = 0x126FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FD4u;
        // 0x126fd8: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fd4) {
            ctx->pc = 0x126FF8u;
            return;
        }
    }
    ctx->pc = 0x126FDCu;
    // 0x126fdc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x126fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126fe0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x126fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126fe4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x126fe4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x126fe8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x126fe8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x126fec: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x126fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x126ff0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x126ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x126ff4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x126ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x126ff8u;
}
