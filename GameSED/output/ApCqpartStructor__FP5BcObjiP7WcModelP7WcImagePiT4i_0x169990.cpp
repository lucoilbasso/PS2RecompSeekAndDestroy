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

// Function: ApCqpartStructor__FP5BcObjiP7WcModelP7WcImagePiT4i
// Address: 0x169990 - 0x16a0fc
void ApCqpartStructor__FP5BcObjiP7WcModelP7WcImagePiT4i_0x169990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpartStructor__FP5BcObjiP7WcModelP7WcImagePiT4i_0x169990");
#endif

    switch (ctx->pc) {
        case 0x1699e0u: goto label_1699e0;
        case 0x1699ecu: goto label_1699ec;
        case 0x1699f4u: goto label_1699f4;
        case 0x169a10u: goto label_169a10;
        case 0x169a1cu: goto label_169a1c;
        case 0x169a38u: goto label_169a38;
        case 0x169a44u: goto label_169a44;
        case 0x169a4cu: goto label_169a4c;
        case 0x169a58u: goto label_169a58;
        case 0x169c90u: goto label_169c90;
        case 0x169ca8u: goto label_169ca8;
        case 0x169cb0u: goto label_169cb0;
        case 0x169cccu: goto label_169ccc;
        case 0x169cfcu: goto label_169cfc;
        case 0x169da8u: goto label_169da8;
        case 0x169dc0u: goto label_169dc0;
        case 0x169dc8u: goto label_169dc8;
        case 0x169de4u: goto label_169de4;
        case 0x169e14u: goto label_169e14;
        case 0x169f00u: goto label_169f00;
        case 0x169fc8u: goto label_169fc8;
        case 0x16a0a0u: goto label_16a0a0;
        default: break;
    }

    ctx->pc = 0x169990u;

    // 0x169990: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x169990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x169994: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x169994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x169998: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x169998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16999c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x16999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1699a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1699a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699a4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1699a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1699a8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1699a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1699acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699b0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1699b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699b4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1699b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1699b8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1699b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1699bc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1699bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1699c0: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1699c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1699c4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1699c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699c8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1699c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1699cc: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1699ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1699d0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1699d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1699d4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1699d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1699d8: 0xc043b48  jal         func_10ED20
    ctx->pc = 0x1699D8u;
    SET_GPR_U32(ctx, 31, 0x1699E0u);
    ctx->pc = 0x1699DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699D8u;
    // 0x1699dc: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED20u, 0x1699D8u, 0x1699E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699E0u;
label_1699e0:
    // 0x1699e0: 0x24042846  addiu       $a0, $zero, 0x2846
    ctx->pc = 0x1699e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
    // 0x1699e4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1699E4u;
    SET_GPR_U32(ctx, 31, 0x1699ECu);
    ctx->pc = 0x1699E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699E4u;
    // 0x1699e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1699E4u, 0x1699ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699ECu;
label_1699ec:
    // 0x1699ec: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1699ECu;
    SET_GPR_U32(ctx, 31, 0x1699F4u);
    ctx->pc = 0x1699F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699ECu;
    // 0x1699f0: 0x24041280  addiu       $a0, $zero, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1699ECu, 0x1699F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699F4u;
label_1699f4:
    // 0x1699f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1699f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1699f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1699fc: 0x2442f3b0  addiu       $v0, $v0, -0xC50
    ctx->pc = 0x1699fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964144));
    // 0x169a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x169a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x169a08: 0xc059352  jal         func_164D48
    ctx->pc = 0x169A08u;
    SET_GPR_U32(ctx, 31, 0x169A10u);
    ctx->pc = 0x169A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A08u;
    // 0x169a0c: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164D48u, 0x169A08u, 0x169A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A10u;
label_169a10:
    // 0x169a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a14: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x169A14u;
    SET_GPR_U32(ctx, 31, 0x169A1Cu);
    ctx->pc = 0x169A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A14u;
    // 0x169a18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x169A14u, 0x169A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A1Cu;
label_169a1c:
    // 0x169a1c: 0xaed30c00  sw          $s3, 0xC00($s6)
    ctx->pc = 0x169a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3072), GPR_U32(ctx, 19));
    // 0x169a20: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x169a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a24: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x169a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a28: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x169a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x169a2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x169a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a30: 0xc0658a2  jal         func_196288
    ctx->pc = 0x169A30u;
    SET_GPR_U32(ctx, 31, 0x169A38u);
    ctx->pc = 0x169A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A30u;
    // 0x169a34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196288u, 0x169A30u, 0x169A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A38u;
label_169a38:
    // 0x169a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a3c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x169A3Cu;
    SET_GPR_U32(ctx, 31, 0x169A44u);
    ctx->pc = 0x169A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A3Cu;
    // 0x169a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x169A3Cu, 0x169A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A44u;
label_169a44:
    // 0x169a44: 0xc0593e0  jal         func_164F80
    ctx->pc = 0x169A44u;
    SET_GPR_U32(ctx, 31, 0x169A4Cu);
    ctx->pc = 0x169A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A44u;
    // 0x169a48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164F80u, 0x169A44u, 0x169A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A4Cu;
label_169a4c:
    // 0x169a4c: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x169A4Cu;
    {
        const bool branch_taken_0x169a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A4Cu;
        // 0x169a50: 0xaed50c08  sw          $s5, 0xC08($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 3080), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a4c) {
            ctx->pc = 0x16A07Cu;
            goto label_16a07c;
        }
    }
    ctx->pc = 0x169A54u;
    // 0x169a54: 0x0  nop
    ctx->pc = 0x169a54u;
    // NOP
label_169a58:
    // 0x169a58: 0x2483fff1  addiu       $v1, $a0, -0xF
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967281));
    // 0x169a5c: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x169a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x169a60: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x169A60u;
    {
        const bool branch_taken_0x169a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A60u;
        // 0x169a64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a60) {
            ctx->pc = 0x16A080u;
            goto label_16a080;
        }
    }
    ctx->pc = 0x169A68u;
    // 0x169a68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169a6c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x169a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x169a70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169a74: 0x8c637280  lw          $v1, 0x7280($v1)
    ctx->pc = 0x169a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29312)));
    // 0x169a78: 0x600008  jr          $v1
    ctx->pc = 0x169A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169A80u: goto label_169a80;
            case 0x169B10u: goto label_169b10;
            case 0x169BA8u: goto label_169ba8;
            case 0x169C50u: goto label_169c50;
            case 0x169C60u: goto label_169c60;
            case 0x169D78u: goto label_169d78;
            case 0x169EC8u: goto label_169ec8;
            case 0x169F90u: goto label_169f90;
            case 0x16A07Cu: goto label_16a07c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169A78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x169A80u;
label_169a80:
    // 0x169a80: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169a84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169a88: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169a8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169a90: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169a90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169a94: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169a94u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169a98: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169a98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169aa0: 0xc7818464  lwc1        $f1, -0x7B9C($gp)
    ctx->pc = 0x169aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169aa4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x169aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169aa8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x169aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x169aac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169ab0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169ab4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x169ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x169ab8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169abc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169abcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169ac0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169ac0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169ac4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169ac4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169acc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169ad0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x169ad4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169ad8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169ad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169adc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x169adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x169ae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169ae4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169ae8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169ae8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169aec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169aecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169af8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x169af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x169afc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169b00: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x169b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x169b04: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x169B04u;
    {
        const bool branch_taken_0x169b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B04u;
        // 0x169b08: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b04) {
            ctx->pc = 0x16A080u;
            goto label_16a080;
        }
    }
    ctx->pc = 0x169B0Cu;
    // 0x169b0c: 0x0  nop
    ctx->pc = 0x169b0cu;
    // NOP
label_169b10:
    // 0x169b10: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169b14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169b18: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169b1c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169b20: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169b20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169b24: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169b24u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169b28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169b28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b30: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x169b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169b34: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x169b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x169b38: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x169b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x169b3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169b40: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169b44: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169b44u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169b48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169b48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b50: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x169b54: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x169b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x169b58: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169b5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169b60: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169b60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169b64: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169b64u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169b68: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169b68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x169b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x169b74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x169b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169b78: 0x26c41190  addiu       $a0, $s6, 0x1190
    ctx->pc = 0x169b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4496));
    // 0x169b7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x169b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x169b80: 0x26c31180  addiu       $v1, $s6, 0x1180
    ctx->pc = 0x169b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4480));
    // 0x169b84: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x169b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x169b88: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x169b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x169b8c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x169b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169b90: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x169b90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169b94: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x169b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169b98: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x169b98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169b9c: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x169B9Cu;
    {
        const bool branch_taken_0x169b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B9Cu;
        // 0x169ba0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b9c) {
            ctx->pc = 0x16A080u;
            goto label_16a080;
        }
    }
    ctx->pc = 0x169BA4u;
    // 0x169ba4: 0x0  nop
    ctx->pc = 0x169ba4u;
    // NOP
label_169ba8:
    // 0x169ba8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169bac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169bb0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169bb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169bb8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169bbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169bbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169bc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169bc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169bc8: 0xc7818468  lwc1        $f1, -0x7B98($gp)
    ctx->pc = 0x169bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169bcc: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x169bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169bd0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x169bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x169bd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169bd8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169bdc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x169bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x169be0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169be4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169be4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169be8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169be8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169bec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169becu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169bf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169bf8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x169bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x169bfc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169c00: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169c04: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x169c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x169c08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169c0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169c10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169c10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169c14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169c14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169c1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169c20: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x169c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x169c24: 0x26c611b0  addiu       $a2, $s6, 0x11B0
    ctx->pc = 0x169c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4528));
    // 0x169c28: 0x26c511a0  addiu       $a1, $s6, 0x11A0
    ctx->pc = 0x169c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4512));
    // 0x169c2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x169c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x169c30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169c30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169c34: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x169c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x169c38: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x169c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169c3c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x169c3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169c40: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x169c40u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x169c44: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x169c44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x169c48: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x169C48u;
    {
        const bool branch_taken_0x169c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C48u;
        // 0x169c4c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c48) {
            ctx->pc = 0x16A080u;
            goto label_16a080;
        }
    }
    ctx->pc = 0x169C50u;
label_169c50:
    // 0x169c50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x169c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c54: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x169c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x169c58: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x169C58u;
    {
        const bool branch_taken_0x169c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C58u;
        // 0x169c5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c58) {
            ctx->pc = 0x16A07Cu;
            goto label_16a07c;
        }
    }
    ctx->pc = 0x169C60u;
label_169c60:
    // 0x169c60: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x169c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x169c64: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169C64u;
    {
        const bool branch_taken_0x169c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C64u;
        // 0x169c68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c64) {
            ctx->pc = 0x169CB0u;
            goto label_169cb0;
        }
    }
    ctx->pc = 0x169C6Cu;
    // 0x169c6c: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x169c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x169c70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169C70u;
    {
        const bool branch_taken_0x169c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C70u;
        // 0x169c74: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c70) {
            ctx->pc = 0x169C90u;
            goto label_169c90;
        }
    }
    ctx->pc = 0x169C78u;
    // 0x169c78: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x169c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x169c7c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169C7Cu;
    {
        const bool branch_taken_0x169c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C7Cu;
        // 0x169c80: 0x26c50ccc  addiu       $a1, $s6, 0xCCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c7c) {
            ctx->pc = 0x169CA8u;
            goto label_169ca8;
        }
    }
    ctx->pc = 0x169C84u;
    // 0x169c84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x169C84u;
    {
        const bool branch_taken_0x169c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C84u;
        // 0x169c88: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c84) {
            ctx->pc = 0x169CCCu;
            goto label_169ccc;
        }
    }
    ctx->pc = 0x169C8Cu;
    // 0x169c8c: 0x0  nop
    ctx->pc = 0x169c8cu;
    // NOP
label_169c90:
    // 0x169c90: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169C90u;
    {
        const bool branch_taken_0x169c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C90u;
        // 0x169c94: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c90) {
            ctx->pc = 0x169CB8u;
            goto label_169cb8;
        }
    }
    ctx->pc = 0x169C98u;
    // 0x169c98: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169C98u;
    {
        const bool branch_taken_0x169c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C98u;
        // 0x169c9c: 0x26c50ccc  addiu       $a1, $s6, 0xCCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c98) {
            ctx->pc = 0x169CC0u;
            goto label_169cc0;
        }
    }
    ctx->pc = 0x169CA0u;
    // 0x169ca0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x169CA0u;
    {
        const bool branch_taken_0x169ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CA0u;
        // 0x169ca4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ca0) {
            ctx->pc = 0x169CCCu;
            goto label_169ccc;
        }
    }
    ctx->pc = 0x169CA8u;
label_169ca8:
    // 0x169ca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x169CA8u;
    {
        const bool branch_taken_0x169ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CA8u;
        // 0x169cac: 0x26d11200  addiu       $s1, $s6, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ca8) {
            ctx->pc = 0x169CC4u;
            goto label_169cc4;
        }
    }
    ctx->pc = 0x169CB0u;
label_169cb0:
    // 0x169cb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169CB0u;
    {
        const bool branch_taken_0x169cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CB0u;
        // 0x169cb4: 0x26d11218  addiu       $s1, $s6, 0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cb0) {
            ctx->pc = 0x169CC4u;
            goto label_169cc4;
        }
    }
    ctx->pc = 0x169CB8u;
label_169cb8:
    // 0x169cb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169CB8u;
    {
        const bool branch_taken_0x169cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CB8u;
        // 0x169cbc: 0x26d1120c  addiu       $s1, $s6, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cb8) {
            ctx->pc = 0x169CC4u;
            goto label_169cc4;
        }
    }
    ctx->pc = 0x169CC0u;
label_169cc0:
    // 0x169cc0: 0x26d11224  addiu       $s1, $s6, 0x1224
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4644));
label_169cc4:
    // 0x169cc4: 0x26c50ccc  addiu       $a1, $s6, 0xCCC
    ctx->pc = 0x169cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
    // 0x169cc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x169cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_169ccc:
    // 0x169ccc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x169cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x169cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169cd4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x169cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x169cd8: 0x28440021  slti        $a0, $v0, 0x21
    ctx->pc = 0x169cd8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x169cdc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x169cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x169ce0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169CE0u;
    {
        const bool branch_taken_0x169ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CE0u;
        // 0x169ce4: 0x24700cd0  addiu       $s0, $v1, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ce0) {
            ctx->pc = 0x169CFCu;
            goto label_169cfc;
        }
    }
    ctx->pc = 0x169CE8u;
    // 0x169ce8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x169cec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cf0: 0x24a57270  addiu       $a1, $a1, 0x7270
    ctx->pc = 0x169cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29296));
    // 0x169cf4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x169CF4u;
    SET_GPR_U32(ctx, 31, 0x169CFCu);
    ctx->pc = 0x169CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CF4u;
    // 0x169cf8: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x169CF4u, 0x169CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CFCu;
label_169cfc:
    // 0x169cfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x169d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d04: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169d08: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169d0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169d10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169d14: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169d14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169d18: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169d18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169d1c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169d1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169d24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169d28: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169d2c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x169d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x169d30: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169d34: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169d34u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169d38: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169d38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169d40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169d44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169d48: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x169d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x169d4c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169d50: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169d50u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169d54: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169d54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169d5c: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x169d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x169d60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x169d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x169d64: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x169d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x169d68: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x169d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x169d6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169d70: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x169D70u;
    {
        const bool branch_taken_0x169d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D70u;
        // 0x169d74: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d70) {
            ctx->pc = 0x169E8Cu;
            goto label_169e8c;
        }
    }
    ctx->pc = 0x169D78u;
label_169d78:
    // 0x169d78: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x169d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x169d7c: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169D7Cu;
    {
        const bool branch_taken_0x169d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D7Cu;
        // 0x169d80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d7c) {
            ctx->pc = 0x169DC8u;
            goto label_169dc8;
        }
    }
    ctx->pc = 0x169D84u;
    // 0x169d84: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x169d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x169d88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169D88u;
    {
        const bool branch_taken_0x169d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D88u;
        // 0x169d8c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d88) {
            ctx->pc = 0x169DA8u;
            goto label_169da8;
        }
    }
    ctx->pc = 0x169D90u;
    // 0x169d90: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x169d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x169d94: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169D94u;
    {
        const bool branch_taken_0x169d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D94u;
        // 0x169d98: 0x26c50ccc  addiu       $a1, $s6, 0xCCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d94) {
            ctx->pc = 0x169DC0u;
            goto label_169dc0;
        }
    }
    ctx->pc = 0x169D9Cu;
    // 0x169d9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x169D9Cu;
    {
        const bool branch_taken_0x169d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D9Cu;
        // 0x169da0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d9c) {
            ctx->pc = 0x169DE4u;
            goto label_169de4;
        }
    }
    ctx->pc = 0x169DA4u;
    // 0x169da4: 0x0  nop
    ctx->pc = 0x169da4u;
    // NOP
label_169da8:
    // 0x169da8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169DA8u;
    {
        const bool branch_taken_0x169da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DA8u;
        // 0x169dac: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169da8) {
            ctx->pc = 0x169DD0u;
            goto label_169dd0;
        }
    }
    ctx->pc = 0x169DB0u;
    // 0x169db0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169DB0u;
    {
        const bool branch_taken_0x169db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DB0u;
        // 0x169db4: 0x26c50ccc  addiu       $a1, $s6, 0xCCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169db0) {
            ctx->pc = 0x169DD8u;
            goto label_169dd8;
        }
    }
    ctx->pc = 0x169DB8u;
    // 0x169db8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x169DB8u;
    {
        const bool branch_taken_0x169db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DB8u;
        // 0x169dbc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169db8) {
            ctx->pc = 0x169DE4u;
            goto label_169de4;
        }
    }
    ctx->pc = 0x169DC0u;
label_169dc0:
    // 0x169dc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x169DC0u;
    {
        const bool branch_taken_0x169dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DC0u;
        // 0x169dc4: 0x26d11200  addiu       $s1, $s6, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dc0) {
            ctx->pc = 0x169DDCu;
            goto label_169ddc;
        }
    }
    ctx->pc = 0x169DC8u;
label_169dc8:
    // 0x169dc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169DC8u;
    {
        const bool branch_taken_0x169dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DC8u;
        // 0x169dcc: 0x26d11218  addiu       $s1, $s6, 0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dc8) {
            ctx->pc = 0x169DDCu;
            goto label_169ddc;
        }
    }
    ctx->pc = 0x169DD0u;
label_169dd0:
    // 0x169dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169DD0u;
    {
        const bool branch_taken_0x169dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DD0u;
        // 0x169dd4: 0x26d1120c  addiu       $s1, $s6, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dd0) {
            ctx->pc = 0x169DDCu;
            goto label_169ddc;
        }
    }
    ctx->pc = 0x169DD8u;
label_169dd8:
    // 0x169dd8: 0x26d11224  addiu       $s1, $s6, 0x1224
    ctx->pc = 0x169dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4644));
label_169ddc:
    // 0x169ddc: 0x26c50ccc  addiu       $a1, $s6, 0xCCC
    ctx->pc = 0x169ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
    // 0x169de0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_169de4:
    // 0x169de4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x169de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x169de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169dec: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x169decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x169df0: 0x28440021  slti        $a0, $v0, 0x21
    ctx->pc = 0x169df0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x169df4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x169df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x169df8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169DF8u;
    {
        const bool branch_taken_0x169df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DF8u;
        // 0x169dfc: 0x24700cd0  addiu       $s0, $v1, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169df8) {
            ctx->pc = 0x169E14u;
            goto label_169e14;
        }
    }
    ctx->pc = 0x169E00u;
    // 0x169e00: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x169e04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e08: 0x24a57270  addiu       $a1, $a1, 0x7270
    ctx->pc = 0x169e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29296));
    // 0x169e0c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x169E0Cu;
    SET_GPR_U32(ctx, 31, 0x169E14u);
    ctx->pc = 0x169E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E0Cu;
    // 0x169e10: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x169E0Cu, 0x169E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E14u;
label_169e14:
    // 0x169e14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x169e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e1c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x169e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169e20: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169e28: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169e2c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169e2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169e30: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169e30u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169e34: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169e34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169e3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169e40: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169e44: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x169e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x169e48: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169e48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169e4c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169e4cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169e50: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169e50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169e58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169e5c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169e60: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x169e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x169e64: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169e68: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169e68u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169e6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169e6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169e74: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x169e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x169e78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x169e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x169e7c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x169e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x169e80: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x169e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x169e84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169e88: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x169e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_169e8c:
    // 0x169e8c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x169e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169e90: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x169e90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169e94: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x169e94u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169e98: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x169e98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169e9c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x169e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x169ea0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169ea4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x169ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x169ea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169eac: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x169eacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
    // 0x169eb0: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x169eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x169eb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169eb8: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x169eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x169ebc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x169ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x169ec0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x169EC0u;
    {
        const bool branch_taken_0x169ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EC0u;
        // 0x169ec4: 0xae270004  sw          $a3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ec0) {
            ctx->pc = 0x16A07Cu;
            goto label_16a07c;
        }
    }
    ctx->pc = 0x169EC8u;
label_169ec8:
    // 0x169ec8: 0x26c50ccc  addiu       $a1, $s6, 0xCCC
    ctx->pc = 0x169ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
    // 0x169ecc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x169eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169ed0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x169ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169ed8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x169ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x169edc: 0x28440021  slti        $a0, $v0, 0x21
    ctx->pc = 0x169edcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x169ee0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x169ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x169ee4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169EE4u;
    {
        const bool branch_taken_0x169ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EE4u;
        // 0x169ee8: 0x24700cd0  addiu       $s0, $v1, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ee4) {
            ctx->pc = 0x169F00u;
            goto label_169f00;
        }
    }
    ctx->pc = 0x169EECu;
    // 0x169eec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x169ef0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ef4: 0x24a57270  addiu       $a1, $a1, 0x7270
    ctx->pc = 0x169ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29296));
    // 0x169ef8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x169EF8u;
    SET_GPR_U32(ctx, 31, 0x169F00u);
    ctx->pc = 0x169EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EF8u;
    // 0x169efc: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x169EF8u, 0x169F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F00u;
label_169f00:
    // 0x169f00: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x169f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x169f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169f0c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169f10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169f14: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169f18: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169f1c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169f1cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169f20: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169f20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169f2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169f30: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x169f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x169f34: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169f38: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169f38u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169f3c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169f3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169f48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169f4c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x169f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x169f50: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169f50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169f54: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169f54u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169f58: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169f58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f60: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x169f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x169f64: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x169f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x169f68: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x169f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x169f6c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x169f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x169f70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169f74: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x169f78: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x169f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169f7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x169f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169f80: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x169f80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169f84: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x169f84u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169f88: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x169F88u;
    {
        const bool branch_taken_0x169f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F88u;
        // 0x169f8c: 0x26c2120c  addiu       $v0, $s6, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f88) {
            ctx->pc = 0x16A054u;
            goto label_16a054;
        }
    }
    ctx->pc = 0x169F90u;
label_169f90:
    // 0x169f90: 0x26c50ccc  addiu       $a1, $s6, 0xCCC
    ctx->pc = 0x169f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
    // 0x169f94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x169f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169f98: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x169f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x169f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169fa0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x169fa4: 0x28440021  slti        $a0, $v0, 0x21
    ctx->pc = 0x169fa4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x169fa8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x169fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x169fac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169FACu;
    {
        const bool branch_taken_0x169fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FACu;
        // 0x169fb0: 0x24700cd0  addiu       $s0, $v1, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fac) {
            ctx->pc = 0x169FC8u;
            goto label_169fc8;
        }
    }
    ctx->pc = 0x169FB4u;
    // 0x169fb4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x169fb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169fbc: 0x24a57270  addiu       $a1, $a1, 0x7270
    ctx->pc = 0x169fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29296));
    // 0x169fc0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x169FC0u;
    SET_GPR_U32(ctx, 31, 0x169FC8u);
    ctx->pc = 0x169FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FC0u;
    // 0x169fc4: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x169FC0u, 0x169FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FC8u;
label_169fc8:
    // 0x169fc8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169fcc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x169fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169fd0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169fd4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169fd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169fdc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169fe0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169fe0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169fe4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169fe4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169fe8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169fe8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169ff0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169ff4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169ff8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x169ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x169ffc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169ffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16a000: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16a000u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a004: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16a004u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16a008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a00c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a010: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16a014: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x16a014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x16a018: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x16a018u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16a01c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16a01cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16a020: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16a020u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16a024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a028: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x16a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x16a02c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x16a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x16a030: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x16a034: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x16a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x16a038: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16a03c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x16a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16a040: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a044: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x16a044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a048: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16a048u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16a04c: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x16a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16a050: 0x26c21224  addiu       $v0, $s6, 0x1224
    ctx->pc = 0x16a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4644));
label_16a054:
    // 0x16a054: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x16a054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x16a058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a05c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16a060: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a064: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x16a064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x16a068: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x16a068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
    // 0x16a06c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16a070: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x16a070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x16a074: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16a074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16a078: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x16a078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_16a07c:
    // 0x16a07c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16a080:
    // 0x16a080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a084: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16a088: 0x1480fe73  bnez        $a0, . + 4 + (-0x18D << 2)
    ctx->pc = 0x16A088u;
    {
        const bool branch_taken_0x16a088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A088u;
        // 0x16a08c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a088) {
            ctx->pc = 0x169A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169a58;
        }
    }
    ctx->pc = 0x16A090u;
    // 0x16a090: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x16a090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a098: 0x26c310d0  addiu       $v1, $s6, 0x10D0
    ctx->pc = 0x16a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4304));
    // 0x16a09c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_16a0a0:
    // 0x16a0a0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x16a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16a0a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A0A4u;
    {
        const bool branch_taken_0x16a0a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0A4u;
        // 0x16a0a8: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0a4) {
            ctx->pc = 0x16A0B8u;
            goto label_16a0b8;
        }
    }
    ctx->pc = 0x16A0ACu;
    // 0x16a0ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16a0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A0B0u;
    {
        const bool branch_taken_0x16a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B0u;
        // 0x16a0b4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0b0) {
            ctx->pc = 0x16A0BCu;
            goto label_16a0bc;
        }
    }
    ctx->pc = 0x16A0B8u;
label_16a0b8:
    // 0x16a0b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a0bc:
    // 0x16a0bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x16a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16a0c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16a0c4: 0x481fff6  bgez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16A0C4u;
    {
        const bool branch_taken_0x16a0c4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0C4u;
        // 0x16a0c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0c4) {
            ctx->pc = 0x16A0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a0a0;
        }
    }
    ctx->pc = 0x16A0CCu;
    // 0x16a0cc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x16a0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0d0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16a0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a0d4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x16a0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16a0d8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x16a0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a0dc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x16a0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16a0e0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x16a0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a0e4: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x16a0e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16a0e8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x16a0e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a0ec: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x16a0ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16a0f0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x16a0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16a0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0F4u;
        // 0x16a0f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A0FCu;
}
