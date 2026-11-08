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

// Function: S_Point2Poly_HitAttack__FP7ApcUnitP12HitCheckWorkP10HitObjInfof
// Address: 0x159e40 - 0x159f5c
void S_Point2Poly_HitAttack__FP7ApcUnitP12HitCheckWorkP10HitObjInfof_0x159e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_Point2Poly_HitAttack__FP7ApcUnitP12HitCheckWorkP10HitObjInfof_0x159e40");
#endif

    switch (ctx->pc) {
        case 0x159e40u: goto label_159e40;
        case 0x159e44u: goto label_159e44;
        case 0x159e48u: goto label_159e48;
        case 0x159e4cu: goto label_159e4c;
        case 0x159e50u: goto label_159e50;
        case 0x159e54u: goto label_159e54;
        case 0x159e58u: goto label_159e58;
        case 0x159e5cu: goto label_159e5c;
        case 0x159e60u: goto label_159e60;
        case 0x159e64u: goto label_159e64;
        case 0x159e68u: goto label_159e68;
        case 0x159e6cu: goto label_159e6c;
        case 0x159e70u: goto label_159e70;
        case 0x159e74u: goto label_159e74;
        case 0x159e78u: goto label_159e78;
        case 0x159e7cu: goto label_159e7c;
        case 0x159e80u: goto label_159e80;
        case 0x159e84u: goto label_159e84;
        case 0x159e88u: goto label_159e88;
        case 0x159e8cu: goto label_159e8c;
        case 0x159e90u: goto label_159e90;
        case 0x159e94u: goto label_159e94;
        case 0x159e98u: goto label_159e98;
        case 0x159e9cu: goto label_159e9c;
        case 0x159ea0u: goto label_159ea0;
        case 0x159ea4u: goto label_159ea4;
        case 0x159ea8u: goto label_159ea8;
        case 0x159eacu: goto label_159eac;
        case 0x159eb0u: goto label_159eb0;
        case 0x159eb4u: goto label_159eb4;
        case 0x159eb8u: goto label_159eb8;
        case 0x159ebcu: goto label_159ebc;
        case 0x159ec0u: goto label_159ec0;
        case 0x159ec4u: goto label_159ec4;
        case 0x159ec8u: goto label_159ec8;
        case 0x159eccu: goto label_159ecc;
        case 0x159ed0u: goto label_159ed0;
        case 0x159ed4u: goto label_159ed4;
        case 0x159ed8u: goto label_159ed8;
        case 0x159edcu: goto label_159edc;
        case 0x159ee0u: goto label_159ee0;
        case 0x159ee4u: goto label_159ee4;
        case 0x159ee8u: goto label_159ee8;
        case 0x159eecu: goto label_159eec;
        case 0x159ef0u: goto label_159ef0;
        case 0x159ef4u: goto label_159ef4;
        case 0x159ef8u: goto label_159ef8;
        case 0x159efcu: goto label_159efc;
        case 0x159f00u: goto label_159f00;
        case 0x159f04u: goto label_159f04;
        case 0x159f08u: goto label_159f08;
        case 0x159f0cu: goto label_159f0c;
        case 0x159f10u: goto label_159f10;
        case 0x159f14u: goto label_159f14;
        case 0x159f18u: goto label_159f18;
        case 0x159f1cu: goto label_159f1c;
        case 0x159f20u: goto label_159f20;
        case 0x159f24u: goto label_159f24;
        case 0x159f28u: goto label_159f28;
        case 0x159f2cu: goto label_159f2c;
        case 0x159f30u: goto label_159f30;
        case 0x159f34u: goto label_159f34;
        case 0x159f38u: goto label_159f38;
        case 0x159f3cu: goto label_159f3c;
        case 0x159f40u: goto label_159f40;
        case 0x159f44u: goto label_159f44;
        case 0x159f48u: goto label_159f48;
        case 0x159f4cu: goto label_159f4c;
        case 0x159f50u: goto label_159f50;
        case 0x159f54u: goto label_159f54;
        case 0x159f58u: goto label_159f58;
        default: break;
    }

    ctx->pc = 0x159e40u;

label_159e40:
    // 0x159e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_159e44:
    // 0x159e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_159e48:
    // 0x159e48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x159e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159e4c:
    // 0x159e4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x159e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_159e50:
    // 0x159e50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x159e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159e54:
    // 0x159e54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x159e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_159e58:
    // 0x159e58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x159e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159e5c:
    // 0x159e5c: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x159e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_159e60:
    // 0x159e60: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x159e60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_159e64:
    // 0x159e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_159e68:
    // 0x159e68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x159e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_159e6c:
    // 0x159e6c: 0xc0609fe  jal         func_1827F8
label_159e70:
    if (ctx->pc == 0x159E70u) {
        ctx->pc = 0x159E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E6Cu;
        // 0x159e70: 0x8e510160  lw          $s1, 0x160($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159E74u;
        goto label_159e74;
    }
    ctx->pc = 0x159E6Cu;
    SET_GPR_U32(ctx, 31, 0x159E74u);
    ctx->pc = 0x159E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E6Cu;
    // 0x159e70: 0x8e510160  lw          $s1, 0x160($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x159E6Cu, 0x159E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E74u;
label_159e74:
    // 0x159e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159e78:
    // 0x159e78: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x159e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_159e7c:
    // 0x159e7c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x159e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159e80:
    // 0x159e80: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x159e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_159e84:
    // 0x159e84: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_159e88:
    if (ctx->pc == 0x159E88u) {
        ctx->pc = 0x159E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E84u;
        // 0x159e88: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159E8Cu;
        goto label_159e8c;
    }
    ctx->pc = 0x159E84u;
    {
        const bool branch_taken_0x159e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E84u;
        // 0x159e88: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e84) {
            ctx->pc = 0x159EBCu;
            goto label_159ebc;
        }
    }
    ctx->pc = 0x159E8Cu;
label_159e8c:
    // 0x159e8c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x159e8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_159e90:
    // 0x159e90: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x159e90u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_159e94:
    // 0x159e94: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x159e94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_159e98:
    // 0x159e98: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x159e98u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_159e9c:
    // 0x159e9c: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x159e9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_159ea0:
    // 0x159ea0: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x159ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_159ea4:
    // 0x159ea4: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x159ea4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_159ea8:
    // 0x159ea8: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x159ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
label_159eac:
    // 0x159eac: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x159eacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
label_159eb0:
    // 0x159eb0: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x159eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
label_159eb4:
    // 0x159eb4: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x159eb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
label_159eb8:
    // 0x159eb8: 0xfe230028  sd          $v1, 0x28($s1)
    ctx->pc = 0x159eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
label_159ebc:
    // 0x159ebc: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_159ec0:
    if (ctx->pc == 0x159EC0u) {
        ctx->pc = 0x159EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EBCu;
        // 0x159ec0: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159EC4u;
        goto label_159ec4;
    }
    ctx->pc = 0x159EBCu;
    {
        const bool branch_taken_0x159ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ebc) {
            ctx->pc = 0x159EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159EBCu;
            // 0x159ec0: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159EF0u;
            goto label_159ef0;
        }
    }
    ctx->pc = 0x159EC4u;
label_159ec4:
    // 0x159ec4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x159ec4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_159ec8:
    // 0x159ec8: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x159ec8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_159ecc:
    // 0x159ecc: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x159eccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_159ed0:
    // 0x159ed0: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x159ed0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_159ed4:
    // 0x159ed4: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x159ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_159ed8:
    // 0x159ed8: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x159ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_159edc:
    // 0x159edc: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x159edcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_159ee0:
    // 0x159ee0: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x159ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_159ee4:
    // 0x159ee4: 0x10000005  b           . + 4 + (0x5 << 2)
label_159ee8:
    if (ctx->pc == 0x159EE8u) {
        ctx->pc = 0x159EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EE4u;
        // 0x159ee8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159EECu;
        goto label_159eec;
    }
    ctx->pc = 0x159EE4u;
    {
        const bool branch_taken_0x159ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EE4u;
        // 0x159ee8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ee4) {
            ctx->pc = 0x159EFCu;
            goto label_159efc;
        }
    }
    ctx->pc = 0x159EECu;
label_159eec:
    // 0x159eec: 0x0  nop
    ctx->pc = 0x159eecu;
    // NOP
label_159ef0:
    // 0x159ef0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x159ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_159ef4:
    // 0x159ef4: 0xa2220020  sb          $v0, 0x20($s1)
    ctx->pc = 0x159ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
label_159ef8:
    // 0x159ef8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x159ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_159efc:
    // 0x159efc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x159efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_159f00:
    // 0x159f00: 0xae260094  sw          $a2, 0x94($s1)
    ctx->pc = 0x159f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 6));
label_159f04:
    // 0x159f04: 0xe6340098  swc1        $f20, 0x98($s1)
    ctx->pc = 0x159f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_159f08:
    // 0x159f08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_159f0c:
    if (ctx->pc == 0x159F0Cu) {
        ctx->pc = 0x159F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F08u;
        // 0x159f0c: 0xae270090  sw          $a3, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F10u;
        goto label_159f10;
    }
    ctx->pc = 0x159F08u;
    {
        const bool branch_taken_0x159f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F08u;
        // 0x159f0c: 0xae270090  sw          $a3, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f08) {
            ctx->pc = 0x159F1Cu;
            goto label_159f1c;
        }
    }
    ctx->pc = 0x159F10u;
label_159f10:
    // 0x159f10: 0x8e430160  lw          $v1, 0x160($s2)
    ctx->pc = 0x159f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_159f14:
    // 0x159f14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159f18:
    // 0x159f18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x159f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_159f1c:
    // 0x159f1c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x159f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_159f20:
    // 0x159f20: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x159f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_159f24:
    // 0x159f24: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x159f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_159f28:
    // 0x159f28: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x159f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_159f2c:
    // 0x159f2c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x159f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_159f30:
    // 0x159f30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x159f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_159f34:
    // 0x159f34: 0x60f809  jalr        $v1
label_159f38:
    if (ctx->pc == 0x159F38u) {
        ctx->pc = 0x159F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F34u;
        // 0x159f38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F3Cu;
        goto label_159f3c;
    }
    ctx->pc = 0x159F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159F3Cu);
        ctx->pc = 0x159F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F34u;
        // 0x159f38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F34u, 0x159F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159F3Cu;
label_159f3c:
    // 0x159f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159f40:
    // 0x159f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_159f44:
    // 0x159f44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159f48:
    // 0x159f48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x159f48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159f4c:
    // 0x159f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x159f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_159f50:
    // 0x159f50: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x159f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_159f54:
    // 0x159f54: 0x3e00008  jr          $ra
label_159f58:
    if (ctx->pc == 0x159F58u) {
        ctx->pc = 0x159F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F54u;
        // 0x159f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F5Cu;
        goto label_fallthrough_0x159f54;
    }
    ctx->pc = 0x159F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F54u;
        // 0x159f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159f54:
    ctx->pc = 0x159F5Cu;
}
