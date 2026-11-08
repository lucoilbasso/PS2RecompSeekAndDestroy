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

// Function: Cmd_SIN_Entry__FP15BsSCDEntControl
// Address: 0x1a6438 - 0x1a64e4
void Cmd_SIN_Entry__FP15BsSCDEntControl_0x1a6438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SIN_Entry__FP15BsSCDEntControl_0x1a6438");
#endif

    switch (ctx->pc) {
        case 0x1a6468u: goto label_1a6468;
        case 0x1a649cu: goto label_1a649c;
        default: break;
    }

    ctx->pc = 0x1a6438u;

    // 0x1a6438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a643c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6440: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6448: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a644c: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a644cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6450: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6454: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6458: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a645c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6460: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6460u;
    SET_GPR_U32(ctx, 31, 0x1A6468u);
    ctx->pc = 0x1A6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6460u;
    // 0x1a6464: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6460u, 0x1A6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6468u;
label_1a6468:
    // 0x1a6468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a646c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a646cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6470: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6474: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6478: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a647c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6480: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6484: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6488: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a648c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A648Cu;
    {
        const bool branch_taken_0x1a648c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A648Cu;
        // 0x1a6490: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a648c) {
            ctx->pc = 0x1A64A0u;
            goto label_1a64a0;
        }
    }
    ctx->pc = 0x1A6494u;
    // 0x1a6494: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6494u;
    SET_GPR_U32(ctx, 31, 0x1A649Cu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6494u, 0x1A649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A649Cu;
label_1a649c:
    // 0x1a649c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a64a0:
    // 0x1a64a0: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1a64a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1a64a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a64a8: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1a64a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x1a64ac: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1a64acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a64b0: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1a64b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a64b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a64b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a64b8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1a64b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1a64bc: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1a64bcu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a64c0: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1a64c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a64c4: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x1a64c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x1a64c8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1a64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1a64cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a64ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a64d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a64d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a64d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a64d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a64d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a64d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a64dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A64DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64DCu;
        // 0x1a64e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A64DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A64E4u;
}
