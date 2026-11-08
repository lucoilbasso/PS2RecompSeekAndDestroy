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

// Function: entry_001597d0
// Address: 0x1597d0 - 0x159860
void entry_001597d0_0x1597d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001597d0_0x1597d0");
#endif

    switch (ctx->pc) {
        case 0x159800u: goto label_159800;
        case 0x159814u: goto label_159814;
        default: break;
    }

    ctx->pc = 0x1597d0u;

    // 0x1597d0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1597d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1597d4: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1597d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1597d8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1597d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1597dc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1597dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1597e0: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1597e0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1597e4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1597e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1597e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1597e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597ec: 0x8ea70014  lw          $a3, 0x14($s5)
    ctx->pc = 0x1597ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1597f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1597f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1597f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1597f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1597f8: 0xc060bd2  jal         func_182F48
    ctx->pc = 0x1597F8u;
    SET_GPR_U32(ctx, 31, 0x159800u);
    ctx->pc = 0x1597FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1597F8u;
    // 0x1597fc: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182F48u, 0x1597F8u, 0x159800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159800u;
label_159800:
    // 0x159800: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x159800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159804: 0x12c000b8  beqz        $s6, . + 4 + (0xB8 << 2)
    ctx->pc = 0x159804u;
    {
        const bool branch_taken_0x159804 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x159808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159804u;
        // 0x159808: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159804) {
            ctx->pc = 0x159AE8u;
            return;
        }
    }
    ctx->pc = 0x15980Cu;
    // 0x15980c: 0xc0609fe  jal         func_1827F8
    ctx->pc = 0x15980Cu;
    SET_GPR_U32(ctx, 31, 0x159814u);
    ctx->pc = 0x159810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15980Cu;
    // 0x159810: 0x8ef00160  lw          $s0, 0x160($s7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x15980Cu, 0x159814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159814u;
label_159814:
    // 0x159814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159818: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x159818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15981c: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x15981cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x159820: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x159820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x159824: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x159824u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x159828: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x159828u;
    {
        const bool branch_taken_0x159828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159828u;
        // 0x15982c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159828) {
            ctx->pc = 0x159860u;
            return;
        }
    }
    ctx->pc = 0x159830u;
    // 0x159830: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x159830u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159834: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x159834u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x159838: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x159838u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15983c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x15983cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x159840: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x159840u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x159844: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x159844u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x159848: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x159848u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15984c: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x15984cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x159850: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x159850u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x159854: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x159854u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x159858: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x159858u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x15985c: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x15985cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    ctx->pc = 0x159860u;
}
