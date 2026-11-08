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

// Function: WEntityLoadLocalPosition__FP8WcEntityP9FVector32T1
// Address: 0x1853d8 - 0x1854b4
void WEntityLoadLocalPosition__FP8WcEntityP9FVector32T1_0x1853d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityLoadLocalPosition__FP8WcEntityP9FVector32T1_0x1853d8");
#endif

    switch (ctx->pc) {
        case 0x185414u: goto label_185414;
        case 0x185444u: goto label_185444;
        default: break;
    }

    ctx->pc = 0x1853d8u;

    // 0x1853d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1853d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1853dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1853dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1853e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1853e4: 0x24680020  addiu       $t0, $v1, 0x20
    ctx->pc = 0x1853e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1853e8: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x1853e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1853ec: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1853ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1853f0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1853F0u;
    {
        const bool branch_taken_0x1853f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1853F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853F0u;
        // 0x1853f4: 0x246700e0  addiu       $a3, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853f0) {
            ctx->pc = 0x185450u;
            goto label_185450;
        }
    }
    ctx->pc = 0x1853F8u;
    // 0x1853f8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1853f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1853fc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1853FCu;
    {
        const bool branch_taken_0x1853fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1853fc) {
            ctx->pc = 0x185400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1853FCu;
            // 0x185400: 0x24620110  addiu       $v0, $v1, 0x110 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185420u;
            goto label_185420;
        }
    }
    ctx->pc = 0x185404u;
    // 0x185404: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x185404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x185408: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x185408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18540c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18540Cu;
    SET_GPR_U32(ctx, 31, 0x185414u);
    ctx->pc = 0x185410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18540Cu;
    // 0x185410: 0x24a57ea8  addiu       $a1, $a1, 0x7EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18540Cu, 0x185414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185414u;
label_185414:
    // 0x185414: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x185414u;
    {
        const bool branch_taken_0x185414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185414u;
        // 0x185418: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185414) {
            ctx->pc = 0x1854ACu;
            goto label_1854ac;
        }
    }
    ctx->pc = 0x18541Cu;
    // 0x18541c: 0x0  nop
    ctx->pc = 0x18541cu;
    // NOP
label_185420:
    // 0x185420: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x185420u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185424: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x185424u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185428: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x185428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18542c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x18542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x185430: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x185430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185434: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x185434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185438: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x185438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18543c: 0xc061468  jal         func_1851A0
    ctx->pc = 0x18543Cu;
    SET_GPR_U32(ctx, 31, 0x185444u);
    ctx->pc = 0x185440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18543Cu;
    // 0x185440: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x18543Cu, 0x185444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185444u;
label_185444:
    // 0x185444: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x185444u;
    {
        const bool branch_taken_0x185444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185444u;
        // 0x185448: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185444) {
            ctx->pc = 0x1854ACu;
            goto label_1854ac;
        }
    }
    ctx->pc = 0x18544Cu;
    // 0x18544c: 0x0  nop
    ctx->pc = 0x18544cu;
    // NOP
label_185450:
    // 0x185450: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x185450u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185454: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x185454u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x185458: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x185458u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18545c: 0x78e90010  lq          $t1, 0x10($a3)
    ctx->pc = 0x18545cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x185460: 0x78ea0020  lq          $t2, 0x20($a3)
    ctx->pc = 0x185460u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x185464: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x185464u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x185468: 0x4bc7422c  vsub.xyz    $vf8, $vf8, $vf7
    ctx->pc = 0x185468u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x18546c: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x18546cu;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x185470: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x185470u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x185474: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x185474u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x185478: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x185478u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x18547c: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x18547cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x185480: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x185480u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x185484: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x185484u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x185488: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x185488u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x18548c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x18548cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x185490: 0x48a92800  qmtc2.ni    $t1, $vf5
    ctx->pc = 0x185490u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x185494: 0x48aa3000  qmtc2.ni    $t2, $vf6
    ctx->pc = 0x185494u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x185498: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x185498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x18549c: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x18549cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1854a0: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x1854a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1854a4: 0xf8c80000  sqc2        $vf8, 0x0($a2)
    ctx->pc = 0x1854a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1854a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1854a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1854ac:
    // 0x1854ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1854ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1854B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854ACu;
        // 0x1854b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1854ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1854B4u;
}
