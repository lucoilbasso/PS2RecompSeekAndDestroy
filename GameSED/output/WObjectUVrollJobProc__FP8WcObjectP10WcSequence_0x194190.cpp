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

// Function: WObjectUVrollJobProc__FP8WcObjectP10WcSequence
// Address: 0x194190 - 0x19427c
void WObjectUVrollJobProc__FP8WcObjectP10WcSequence_0x194190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectUVrollJobProc__FP8WcObjectP10WcSequence_0x194190");
#endif

    switch (ctx->pc) {
        case 0x194258u: goto label_194258;
        default: break;
    }

    ctx->pc = 0x194190u;

    // 0x194190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x194194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x194194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19419c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1941a0: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x1941a4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1941A4u;
    {
        const bool branch_taken_0x1941a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1941A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941A4u;
        // 0x1941a8: 0x26040178  addiu       $a0, $s0, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941a4) {
            ctx->pc = 0x19426Cu;
            goto label_19426c;
        }
    }
    ctx->pc = 0x1941ACu;
    // 0x1941ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1941acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1941b0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x1941b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1941b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1941b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1941b8: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1941B8u;
    {
        const bool branch_taken_0x1941b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1941b8) {
            ctx->pc = 0x1941BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1941B8u;
            // 0x1941bc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194238u;
            goto label_194238;
        }
    }
    ctx->pc = 0x1941C0u;
    // 0x1941c0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1941c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1941c4: 0x2606017c  addiu       $a2, $s0, 0x17C
    ctx->pc = 0x1941c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
    // 0x1941c8: 0x96050174  lhu         $a1, 0x174($s0)
    ctx->pc = 0x1941c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1941cc: 0x96040176  lhu         $a0, 0x176($s0)
    ctx->pc = 0x1941ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 374)));
    // 0x1941d0: 0x9602017a  lhu         $v0, 0x17A($s0)
    ctx->pc = 0x1941d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 378)));
    // 0x1941d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1941d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1941d8: 0x30657fff  andi        $a1, $v1, 0x7FFF
    ctx->pc = 0x1941d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1941dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1941dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1941e0: 0xa6050174  sh          $a1, 0x174($s0)
    ctx->pc = 0x1941e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 372), (uint16_t)GPR_U32(ctx, 5));
    // 0x1941e4: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x1941e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1941e8: 0xa6040176  sh          $a0, 0x176($s0)
    ctx->pc = 0x1941e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 374), (uint16_t)GPR_U32(ctx, 4));
    // 0x1941ec: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1941ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1941f0: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x1941f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1941f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1941f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1941f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1941F8u;
    {
        const bool branch_taken_0x1941f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941F8u;
        // 0x1941fc: 0x26030180  addiu       $v1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941f8) {
            ctx->pc = 0x194214u;
            goto label_194214;
        }
    }
    ctx->pc = 0x194200u;
    // 0x194200: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x194200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194204: 0x9603017e  lhu         $v1, 0x17E($s0)
    ctx->pc = 0x194204u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 382)));
    // 0x194208: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x194208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x19420c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x19420cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x194210: 0x26030180  addiu       $v1, $s0, 0x180
    ctx->pc = 0x194210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_194214:
    // 0x194214: 0x70851488  pextlw      $v0, $a0, $a1
    ctx->pc = 0x194214u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x194218: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x194218u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19421c: 0x4b84213f  vitof15.xy  $vf4, $vf4
    ctx->pc = 0x19421cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x194220: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x194220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194224: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x194224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x194228: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x194228u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 2), _MM_SHUFFLE(0,3,2,1)));
    // 0x19422c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x19422cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x194230: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x194230u;
    {
        const bool branch_taken_0x194230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194230u;
        // 0x194234: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194230) {
            ctx->pc = 0x194270u;
            goto label_194270;
        }
    }
    ctx->pc = 0x194238u;
label_194238:
    // 0x194238: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x194238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19423c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x194240: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x194240u;
    {
        const bool branch_taken_0x194240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194240) {
            ctx->pc = 0x194244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194240u;
            // 0x194244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194270u;
            goto label_194270;
        }
    }
    ctx->pc = 0x194248u;
    // 0x194248: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x194248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x19424c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194250: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x194250u;
    SET_GPR_U32(ctx, 31, 0x194258u);
    ctx->pc = 0x194254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194250u;
    // 0x194254: 0x2484de38  addiu       $a0, $a0, -0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x194250u, 0x194258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194258u;
label_194258:
    // 0x194258: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x194258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x19425c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x194260: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x194260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x194264: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x194264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x194268: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x194268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_19426c:
    // 0x19426c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19426cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194270:
    // 0x194270: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x194270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x194274: 0x3e00008  jr          $ra
    ctx->pc = 0x194274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194274u;
        // 0x194278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19427Cu;
}
