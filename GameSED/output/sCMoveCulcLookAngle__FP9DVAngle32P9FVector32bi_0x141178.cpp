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

// Function: sCMoveCulcLookAngle__FP9DVAngle32P9FVector32bi
// Address: 0x141178 - 0x141250
void sCMoveCulcLookAngle__FP9DVAngle32P9FVector32bi_0x141178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sCMoveCulcLookAngle__FP9DVAngle32P9FVector32bi_0x141178");
#endif

    switch (ctx->pc) {
        case 0x1411e0u: goto label_1411e0;
        case 0x141220u: goto label_141220;
        default: break;
    }

    ctx->pc = 0x141178u;

    // 0x141178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x141178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14117c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x141180: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x141180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141184: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x141184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x141188: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x141188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14118c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x141190: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x141190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141194: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x141194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x141198: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x141198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14119c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1411a0: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x1411a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1411a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1411a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1411a8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1411a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1411ac: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1411acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1411b0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1411b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1411b4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1411b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1411b8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1411b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1411bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1411bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1411c0: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x1411c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1411c4: 0x4602a032  c.eq.s      $f20, $f2
    ctx->pc = 0x1411c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1411c8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1411C8u;
    {
        const bool branch_taken_0x1411c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1411c8) {
            ctx->pc = 0x1411CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1411C8u;
            // 0x1411cc: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1411D8u;
            goto label_1411d8;
        }
    }
    ctx->pc = 0x1411D0u;
    // 0x1411d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1411D0u;
    {
        const bool branch_taken_0x1411d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411D0u;
        // 0x1411d4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411d0) {
            ctx->pc = 0x1411E0u;
            goto label_1411e0;
        }
    }
    ctx->pc = 0x1411D8u;
label_1411d8:
    // 0x1411d8: 0xc067a02  jal         func_19E808
    ctx->pc = 0x1411D8u;
    SET_GPR_U32(ctx, 31, 0x1411E0u);
    ctx->pc = 0x1411DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411D8u;
    // 0x1411dc: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x1411D8u, 0x1411E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411E0u;
label_1411e0:
    // 0x1411e0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1411E0u;
    {
        const bool branch_taken_0x1411e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411E0u;
        // 0x1411e4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411e0) {
            ctx->pc = 0x1411F0u;
            goto label_1411f0;
        }
    }
    ctx->pc = 0x1411E8u;
    // 0x1411e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1411E8u;
    {
        const bool branch_taken_0x1411e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411E8u;
        // 0x1411ec: 0xae330000  sw          $s3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411e8) {
            ctx->pc = 0x141228u;
            goto label_141228;
        }
    }
    ctx->pc = 0x1411F0u;
label_1411f0:
    // 0x1411f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1411f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1411f4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1411f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1411f8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1411f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1411fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1411fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x141200: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x141200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x141204: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x141204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x141208: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x141208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14120c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14120Cu;
    {
        const bool branch_taken_0x14120c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x141210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14120Cu;
        // 0x141210: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14120c) {
            ctx->pc = 0x141224u;
            goto label_141224;
        }
    }
    ctx->pc = 0x141214u;
    // 0x141214: 0x46140344  c1          0x140344
    ctx->pc = 0x141214u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x141218: 0xc067a02  jal         func_19E808
    ctx->pc = 0x141218u;
    SET_GPR_U32(ctx, 31, 0x141220u);
    ctx->pc = 0x14121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141218u;
    // 0x14121c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x141218u, 0x141220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141220u;
label_141220:
    // 0x141220: 0x21023  negu        $v0, $v0
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_141224:
    // 0x141224: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x141224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_141228:
    // 0x141228: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x141228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14122c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14122cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x141230: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x141230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141234: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x141234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x141238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14123c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14123cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x141240: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x141240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141244: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x141244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x141248: 0x3e00008  jr          $ra
    ctx->pc = 0x141248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141248u;
        // 0x14124c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141250u;
}
