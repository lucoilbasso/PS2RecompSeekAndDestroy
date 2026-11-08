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

// Function: entry_0010f16c
// Address: 0x10f16c - 0x10f244
void entry_0010f16c_0x10f16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f16c_0x10f16c");
#endif

    switch (ctx->pc) {
        case 0x10f18cu: goto label_10f18c;
        case 0x10f1b8u: goto label_10f1b8;
        case 0x10f1c8u: goto label_10f1c8;
        case 0x10f1e4u: goto label_10f1e4;
        case 0x10f204u: goto label_10f204;
        case 0x10f224u: goto label_10f224;
        default: break;
    }

    ctx->pc = 0x10f16cu;

label_10f16c:
    // 0x10f16c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_10f170:
    // 0x10f170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f174:
    // 0x10f174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f178:
    // 0x10f178: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x10f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_10f17c:
    // 0x10f17c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f180:
    // 0x10f180: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f184:
    // 0x10f184: 0x60f809  jalr        $v1
label_10f188:
    if (ctx->pc == 0x10F188u) {
        ctx->pc = 0x10F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F184u;
        // 0x10f188: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F18Cu;
        goto label_10f18c;
    }
    ctx->pc = 0x10F184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F18Cu);
        ctx->pc = 0x10F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F184u;
        // 0x10f188: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F184u, 0x10F18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F18Cu;
label_10f18c:
    // 0x10f18c: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x10f18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
label_10f190:
    // 0x10f190: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x10f190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_10f194:
    // 0x10f194: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x10f194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_10f198:
    // 0x10f198: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x10f198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_10f19c:
    // 0x10f19c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x10f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_10f1a0:
    // 0x10f1a0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x10f1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10f1a4:
    // 0x10f1a4: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x10f1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_10f1a8:
    // 0x10f1a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10f1ac:
    // 0x10f1ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10f1b0:
    // 0x10f1b0: 0xc0618da  jal         func_186368
label_10f1b4:
    if (ctx->pc == 0x10F1B4u) {
        ctx->pc = 0x10F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1B0u;
        // 0x10f1b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1B8u;
        goto label_10f1b8;
    }
    ctx->pc = 0x10F1B0u;
    SET_GPR_U32(ctx, 31, 0x10F1B8u);
    ctx->pc = 0x10F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F1B0u;
    // 0x10f1b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x10F1B0u, 0x10F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1B8u;
label_10f1b8:
    // 0x10f1b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10f1bc:
    // 0x10f1bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f1c0:
    // 0x10f1c0: 0xc0618f2  jal         func_1863C8
label_10f1c4:
    if (ctx->pc == 0x10F1C4u) {
        ctx->pc = 0x10F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1C0u;
        // 0x10f1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1C8u;
        goto label_10f1c8;
    }
    ctx->pc = 0x10F1C0u;
    SET_GPR_U32(ctx, 31, 0x10F1C8u);
    ctx->pc = 0x10F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F1C0u;
    // 0x10f1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x10F1C0u, 0x10F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1C8u;
label_10f1c8:
    // 0x10f1c8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_10f1cc:
    // 0x10f1cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f1d0:
    // 0x10f1d0: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x10f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_10f1d4:
    // 0x10f1d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f1d8:
    // 0x10f1d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f1dc:
    // 0x10f1dc: 0x60f809  jalr        $v1
label_10f1e0:
    if (ctx->pc == 0x10F1E0u) {
        ctx->pc = 0x10F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1DCu;
        // 0x10f1e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F1E4u;
        goto label_10f1e4;
    }
    ctx->pc = 0x10F1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F1E4u);
        ctx->pc = 0x10F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1DCu;
        // 0x10f1e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1DCu, 0x10F1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F1E4u;
label_10f1e4:
    // 0x10f1e4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x10f1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_10f1e8:
    // 0x10f1e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f1ec:
    // 0x10f1ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_10f1f0:
    // 0x10f1f0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x10f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_10f1f4:
    // 0x10f1f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f1f8:
    // 0x10f1f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f1fc:
    // 0x10f1fc: 0x60f809  jalr        $v1
label_10f200:
    if (ctx->pc == 0x10F200u) {
        ctx->pc = 0x10F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1FCu;
        // 0x10f200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F204u;
        goto label_10f204;
    }
    ctx->pc = 0x10F1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F204u);
        ctx->pc = 0x10F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1FCu;
        // 0x10f200: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1FCu, 0x10F204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F204u;
label_10f204:
    // 0x10f204: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x10f204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10f208:
    // 0x10f208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10f208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f20c:
    // 0x10f20c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_10f210:
    // 0x10f210: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x10f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_10f214:
    // 0x10f214: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10f214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10f218:
    // 0x10f218: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10f21c:
    // 0x10f21c: 0x60f809  jalr        $v1
label_10f220:
    if (ctx->pc == 0x10F220u) {
        ctx->pc = 0x10F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F21Cu;
        // 0x10f220: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F224u;
        goto label_10f224;
    }
    ctx->pc = 0x10F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10F224u);
        ctx->pc = 0x10F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F21Cu;
        // 0x10f220: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F21Cu, 0x10F224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F224u;
label_10f224:
    // 0x10f224: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10f224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10f228:
    // 0x10f228: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x10f228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_10f22c:
    // 0x10f22c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10f22cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10f230:
    // 0x10f230: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x10f230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_10f234:
    // 0x10f234: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10f234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10f238:
    // 0x10f238: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x10f238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_10f23c:
    // 0x10f23c: 0x3e00008  jr          $ra
label_10f240:
    if (ctx->pc == 0x10F240u) {
        ctx->pc = 0x10F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F23Cu;
        // 0x10f240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F244u;
        goto label_fallthrough_0x10f23c;
    }
    ctx->pc = 0x10F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F23Cu;
        // 0x10f240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f23c:
    ctx->pc = 0x10F244u;
}
