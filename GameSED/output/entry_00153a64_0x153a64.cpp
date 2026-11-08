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

// Function: entry_00153a64
// Address: 0x153a64 - 0x153ad8
void entry_00153a64_0x153a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153a64_0x153a64");
#endif

    switch (ctx->pc) {
        case 0x153a8cu: goto label_153a8c;
        case 0x153a9cu: goto label_153a9c;
        default: break;
    }

    ctx->pc = 0x153a64u;

    // 0x153a64: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x153a64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x153a68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x153a6c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x153A6Cu;
    {
        const bool branch_taken_0x153a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A6Cu;
        // 0x153a70: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a6c) {
            ctx->pc = 0x153AD8u;
            return;
        }
    }
    ctx->pc = 0x153A74u;
    // 0x153a74: 0x8e220680  lw          $v0, 0x680($s1)
    ctx->pc = 0x153a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
    // 0x153a78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x153a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x153a7c: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x153A7Cu;
    {
        const bool branch_taken_0x153a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x153a7c) {
            ctx->pc = 0x153A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153A7Cu;
            // 0x153a80: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153ADCu;
            return;
        }
    }
    ctx->pc = 0x153A84u;
    // 0x153a84: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x153A84u;
    SET_GPR_U32(ctx, 31, 0x153A8Cu);
    ctx->pc = 0x153A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A84u;
    // 0x153a88: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x153A84u, 0x153A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A8Cu;
label_153a8c:
    // 0x153a8c: 0xc78182cc  lwc1        $f1, -0x7D34($gp)
    ctx->pc = 0x153a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153a90: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x153a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x153a94: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x153A94u;
    SET_GPR_U32(ctx, 31, 0x153A9Cu);
    ctx->pc = 0x153A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A94u;
    // 0x153a98: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x153A94u, 0x153A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A9Cu;
label_153a9c:
    // 0x153a9c: 0xc78182d0  lwc1        $f1, -0x7D30($gp)
    ctx->pc = 0x153a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153aa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x153aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x153aa4: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x153aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x153aa8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x153aa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153aac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x153aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x153ab0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x153ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x153ab4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x153ab4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x153ab8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x153ab8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x153abc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x153abcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x153ac0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x153ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x153ac4: 0x26260830  addiu       $a2, $s1, 0x830
    ctx->pc = 0x153ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
    // 0x153ac8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x153ac8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153acc: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x153accu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153ad0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x153ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x153ad4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x153ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x153ad8u;
}
