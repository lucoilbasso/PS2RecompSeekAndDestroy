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

// Function: entry_0015959c
// Address: 0x15959c - 0x159620
void entry_0015959c_0x15959c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015959c_0x15959c");
#endif

    switch (ctx->pc) {
        case 0x1595f4u: goto label_1595f4;
        default: break;
    }

    ctx->pc = 0x15959cu;

    // 0x15959c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1595a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1595a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1595a4: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x1595a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1595a8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1595a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1595ac: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1595acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1595b0: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1595b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1595b4: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1595b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1595b8: 0x26a503f0  addiu       $a1, $s5, 0x3F0
    ctx->pc = 0x1595b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1008));
    // 0x1595bc: 0x26a203c0  addiu       $v0, $s5, 0x3C0
    ctx->pc = 0x1595bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 960));
    // 0x1595c0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1595c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1595c4: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1595c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1595c8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1595c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1595cc: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1595ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1595d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1595d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1595d4: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x1595d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x1595d8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1595d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1595dc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1595DCu;
    {
        const bool branch_taken_0x1595dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1595dc) {
            ctx->pc = 0x1595E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1595DCu;
            // 0x1595e0: 0x26230070  addiu       $v1, $s1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159620u;
            return;
        }
    }
    ctx->pc = 0x1595E4u;
    // 0x1595e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1595e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1595e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595ec: 0xc061468  jal         func_1851A0
    ctx->pc = 0x1595ECu;
    SET_GPR_U32(ctx, 31, 0x1595F4u);
    ctx->pc = 0x1595F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595ECu;
    // 0x1595f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x1595ECu, 0x1595F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595F4u;
label_1595f4:
    // 0x1595f4: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x1595f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1595f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1595f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1595fc: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1595fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x159600: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x159600u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x159604: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x159604u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x159608: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x159608u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15960c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15960cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x159610: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x159610u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x159614: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x159614u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x159618: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x159618u;
    {
        const bool branch_taken_0x159618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159618u;
        // 0x15961c: 0x26a503e0  addiu       $a1, $s5, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159618) {
            ctx->pc = 0x159668u;
            return;
        }
    }
    ctx->pc = 0x159620u;
}
