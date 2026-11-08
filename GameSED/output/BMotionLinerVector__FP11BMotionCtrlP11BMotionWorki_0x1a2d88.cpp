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

// Function: BMotionLinerVector__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a2d88 - 0x1a2f6c
void BMotionLinerVector__FP11BMotionCtrlP11BMotionWorki_0x1a2d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionLinerVector__FP11BMotionCtrlP11BMotionWorki_0x1a2d88");
#endif

    switch (ctx->pc) {
        case 0x1a2d88u: goto label_1a2d88;
        case 0x1a2d8cu: goto label_1a2d8c;
        case 0x1a2d90u: goto label_1a2d90;
        case 0x1a2d94u: goto label_1a2d94;
        case 0x1a2d98u: goto label_1a2d98;
        case 0x1a2d9cu: goto label_1a2d9c;
        case 0x1a2da0u: goto label_1a2da0;
        case 0x1a2da4u: goto label_1a2da4;
        case 0x1a2da8u: goto label_1a2da8;
        case 0x1a2dacu: goto label_1a2dac;
        case 0x1a2db0u: goto label_1a2db0;
        case 0x1a2db4u: goto label_1a2db4;
        case 0x1a2db8u: goto label_1a2db8;
        case 0x1a2dbcu: goto label_1a2dbc;
        case 0x1a2dc0u: goto label_1a2dc0;
        case 0x1a2dc4u: goto label_1a2dc4;
        case 0x1a2dc8u: goto label_1a2dc8;
        case 0x1a2dccu: goto label_1a2dcc;
        case 0x1a2dd0u: goto label_1a2dd0;
        case 0x1a2dd4u: goto label_1a2dd4;
        case 0x1a2dd8u: goto label_1a2dd8;
        case 0x1a2ddcu: goto label_1a2ddc;
        case 0x1a2de0u: goto label_1a2de0;
        case 0x1a2de4u: goto label_1a2de4;
        case 0x1a2de8u: goto label_1a2de8;
        case 0x1a2decu: goto label_1a2dec;
        case 0x1a2df0u: goto label_1a2df0;
        case 0x1a2df4u: goto label_1a2df4;
        case 0x1a2df8u: goto label_1a2df8;
        case 0x1a2dfcu: goto label_1a2dfc;
        case 0x1a2e00u: goto label_1a2e00;
        case 0x1a2e04u: goto label_1a2e04;
        case 0x1a2e08u: goto label_1a2e08;
        case 0x1a2e0cu: goto label_1a2e0c;
        case 0x1a2e10u: goto label_1a2e10;
        case 0x1a2e14u: goto label_1a2e14;
        case 0x1a2e18u: goto label_1a2e18;
        case 0x1a2e1cu: goto label_1a2e1c;
        case 0x1a2e20u: goto label_1a2e20;
        case 0x1a2e24u: goto label_1a2e24;
        case 0x1a2e28u: goto label_1a2e28;
        case 0x1a2e2cu: goto label_1a2e2c;
        case 0x1a2e30u: goto label_1a2e30;
        case 0x1a2e34u: goto label_1a2e34;
        case 0x1a2e38u: goto label_1a2e38;
        case 0x1a2e3cu: goto label_1a2e3c;
        case 0x1a2e40u: goto label_1a2e40;
        case 0x1a2e44u: goto label_1a2e44;
        case 0x1a2e48u: goto label_1a2e48;
        case 0x1a2e4cu: goto label_1a2e4c;
        case 0x1a2e50u: goto label_1a2e50;
        case 0x1a2e54u: goto label_1a2e54;
        case 0x1a2e58u: goto label_1a2e58;
        case 0x1a2e5cu: goto label_1a2e5c;
        case 0x1a2e60u: goto label_1a2e60;
        case 0x1a2e64u: goto label_1a2e64;
        case 0x1a2e68u: goto label_1a2e68;
        case 0x1a2e6cu: goto label_1a2e6c;
        case 0x1a2e70u: goto label_1a2e70;
        case 0x1a2e74u: goto label_1a2e74;
        case 0x1a2e78u: goto label_1a2e78;
        case 0x1a2e7cu: goto label_1a2e7c;
        case 0x1a2e80u: goto label_1a2e80;
        case 0x1a2e84u: goto label_1a2e84;
        case 0x1a2e88u: goto label_1a2e88;
        case 0x1a2e8cu: goto label_1a2e8c;
        case 0x1a2e90u: goto label_1a2e90;
        case 0x1a2e94u: goto label_1a2e94;
        case 0x1a2e98u: goto label_1a2e98;
        case 0x1a2e9cu: goto label_1a2e9c;
        case 0x1a2ea0u: goto label_1a2ea0;
        case 0x1a2ea4u: goto label_1a2ea4;
        case 0x1a2ea8u: goto label_1a2ea8;
        case 0x1a2eacu: goto label_1a2eac;
        case 0x1a2eb0u: goto label_1a2eb0;
        case 0x1a2eb4u: goto label_1a2eb4;
        case 0x1a2eb8u: goto label_1a2eb8;
        case 0x1a2ebcu: goto label_1a2ebc;
        case 0x1a2ec0u: goto label_1a2ec0;
        case 0x1a2ec4u: goto label_1a2ec4;
        case 0x1a2ec8u: goto label_1a2ec8;
        case 0x1a2eccu: goto label_1a2ecc;
        case 0x1a2ed0u: goto label_1a2ed0;
        case 0x1a2ed4u: goto label_1a2ed4;
        case 0x1a2ed8u: goto label_1a2ed8;
        case 0x1a2edcu: goto label_1a2edc;
        case 0x1a2ee0u: goto label_1a2ee0;
        case 0x1a2ee4u: goto label_1a2ee4;
        case 0x1a2ee8u: goto label_1a2ee8;
        case 0x1a2eecu: goto label_1a2eec;
        case 0x1a2ef0u: goto label_1a2ef0;
        case 0x1a2ef4u: goto label_1a2ef4;
        case 0x1a2ef8u: goto label_1a2ef8;
        case 0x1a2efcu: goto label_1a2efc;
        case 0x1a2f00u: goto label_1a2f00;
        case 0x1a2f04u: goto label_1a2f04;
        case 0x1a2f08u: goto label_1a2f08;
        case 0x1a2f0cu: goto label_1a2f0c;
        case 0x1a2f10u: goto label_1a2f10;
        case 0x1a2f14u: goto label_1a2f14;
        case 0x1a2f18u: goto label_1a2f18;
        case 0x1a2f1cu: goto label_1a2f1c;
        case 0x1a2f20u: goto label_1a2f20;
        case 0x1a2f24u: goto label_1a2f24;
        case 0x1a2f28u: goto label_1a2f28;
        case 0x1a2f2cu: goto label_1a2f2c;
        case 0x1a2f30u: goto label_1a2f30;
        case 0x1a2f34u: goto label_1a2f34;
        case 0x1a2f38u: goto label_1a2f38;
        case 0x1a2f3cu: goto label_1a2f3c;
        case 0x1a2f40u: goto label_1a2f40;
        case 0x1a2f44u: goto label_1a2f44;
        case 0x1a2f48u: goto label_1a2f48;
        case 0x1a2f4cu: goto label_1a2f4c;
        case 0x1a2f50u: goto label_1a2f50;
        case 0x1a2f54u: goto label_1a2f54;
        case 0x1a2f58u: goto label_1a2f58;
        case 0x1a2f5cu: goto label_1a2f5c;
        case 0x1a2f60u: goto label_1a2f60;
        case 0x1a2f64u: goto label_1a2f64;
        case 0x1a2f68u: goto label_1a2f68;
        default: break;
    }

    ctx->pc = 0x1a2d88u;

label_1a2d88:
    // 0x1a2d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a2d8c:
    // 0x1a2d8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a2d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a2d90:
    // 0x1a2d90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d94:
    // 0x1a2d94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a2d98:
    // 0x1a2d98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d9c:
    // 0x1a2d9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a2da0:
    // 0x1a2da0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1a2da4:
    // 0x1a2da4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a2da8:
    // 0x1a2da8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a2dac:
    if (ctx->pc == 0x1A2DACu) {
        ctx->pc = 0x1A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DA8u;
        // 0x1a2dac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DB0u;
        goto label_1a2db0;
    }
    ctx->pc = 0x1A2DA8u;
    {
        const bool branch_taken_0x1a2da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DA8u;
        // 0x1a2dac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2da8) {
            ctx->pc = 0x1A2DC8u;
            goto label_1a2dc8;
        }
    }
    ctx->pc = 0x1A2DB0u;
label_1a2db0:
    // 0x1a2db0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a2db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a2db4:
    // 0x1a2db4: 0x40f809  jalr        $v0
label_1a2db8:
    if (ctx->pc == 0x1A2DB8u) {
        ctx->pc = 0x1A2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DB4u;
        // 0x1a2db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DBCu;
        goto label_1a2dbc;
    }
    ctx->pc = 0x1A2DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2DBCu);
        ctx->pc = 0x1A2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DB4u;
        // 0x1a2db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2DB4u, 0x1A2DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2DBCu;
label_1a2dbc:
    // 0x1a2dbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a2dc0:
    if (ctx->pc == 0x1A2DC0u) {
        ctx->pc = 0x1A2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DBCu;
        // 0x1a2dc0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DC4u;
        goto label_1a2dc4;
    }
    ctx->pc = 0x1A2DBCu;
    {
        const bool branch_taken_0x1a2dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DBCu;
        // 0x1a2dc0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2dbc) {
            ctx->pc = 0x1A2DE0u;
            goto label_1a2de0;
        }
    }
    ctx->pc = 0x1A2DC4u;
label_1a2dc4:
    // 0x1a2dc4: 0x0  nop
    ctx->pc = 0x1a2dc4u;
    // NOP
label_1a2dc8:
    // 0x1a2dc8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a2dcc:
    // 0x1a2dcc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a2dd0:
    // 0x1a2dd0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a2dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a2dd4:
    // 0x1a2dd4: 0xc068186  jal         func_1A0618
label_1a2dd8:
    if (ctx->pc == 0x1A2DD8u) {
        ctx->pc = 0x1A2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DD4u;
        // 0x1a2dd8: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DDCu;
        goto label_1a2ddc;
    }
    ctx->pc = 0x1A2DD4u;
    SET_GPR_U32(ctx, 31, 0x1A2DDCu);
    ctx->pc = 0x1A2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DD4u;
    // 0x1a2dd8: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2DD4u, 0x1A2DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DDCu;
label_1a2ddc:
    // 0x1a2ddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2de0:
    // 0x1a2de0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a2de4:
    // 0x1a2de4: 0x5642001f  bnel        $s2, $v0, . + 4 + (0x1F << 2)
label_1a2de8:
    if (ctx->pc == 0x1A2DE8u) {
        ctx->pc = 0x1A2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DE4u;
        // 0x1a2de8: 0x86020032  lh          $v0, 0x32($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DECu;
        goto label_1a2dec;
    }
    ctx->pc = 0x1A2DE4u;
    {
        const bool branch_taken_0x1a2de4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2de4) {
            ctx->pc = 0x1A2DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2DE4u;
            // 0x1a2de8: 0x86020032  lh          $v0, 0x32($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2E64u;
            goto label_1a2e64;
        }
    }
    ctx->pc = 0x1A2DECu;
label_1a2dec:
    // 0x1a2dec: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a2decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1a2df0:
    // 0x1a2df0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1a2df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a2df4:
    // 0x1a2df4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a2df4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a2df8:
    // 0x1a2df8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2dfc:
    // 0x1a2dfc: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x1a2dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_1a2e00:
    // 0x1a2e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2e04:
    // 0x1a2e04: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a2e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a2e08:
    // 0x1a2e08: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a2e08u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1a2e0c:
    // 0x1a2e0c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1a2e10:
    // 0x1a2e10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a2e14:
    // 0x1a2e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2e18:
    // 0x1a2e18: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a2e1c:
    // 0x1a2e1c: 0xa6020032  sh          $v0, 0x32($s0)
    ctx->pc = 0x1a2e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
label_1a2e20:
    // 0x1a2e20: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_1a2e24:
    // 0x1a2e24: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1a2e28:
    // 0x1a2e28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a2e28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2e2c:
    // 0x1a2e2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a2e30:
    // 0x1a2e30: 0x0  nop
    ctx->pc = 0x1a2e30u;
    // NOP
label_1a2e34:
    // 0x1a2e34: 0x0  nop
    ctx->pc = 0x1a2e34u;
    // NOP
label_1a2e38:
    // 0x1a2e38: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a2e38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a2e3c:
    // 0x1a2e3c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1a2e3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2e40:
    // 0x1a2e40: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1a2e40u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a2e44:
    // 0x1a2e44: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a2e44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a2e48:
    // 0x1a2e48: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a2e4c:
    // 0x1a2e4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a2e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2e50:
    // 0x1a2e50: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a2e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a2e54:
    // 0x1a2e54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a2e54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1a2e58:
    // 0x1a2e58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a2e58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a2e5c:
    // 0x1a2e5c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a2e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2e60:
    // 0x1a2e60: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x1a2e60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_1a2e64:
    // 0x1a2e64: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1a2e64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a2e68:
    // 0x1a2e68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a2e6c:
    if (ctx->pc == 0x1A2E6Cu) {
        ctx->pc = 0x1A2E70u;
        goto label_1a2e70;
    }
    ctx->pc = 0x1A2E68u;
    {
        const bool branch_taken_0x1a2e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e68) {
            ctx->pc = 0x1A2E7Cu;
            goto label_1a2e7c;
        }
    }
    ctx->pc = 0x1A2E70u;
label_1a2e70:
    // 0x1a2e70: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1a2e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1a2e74:
    // 0x1a2e74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a2e78:
    // 0x1a2e78: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1a2e78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a2e7c:
    // 0x1a2e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2e80:
    // 0x1a2e80: 0x6420035  bltzl       $s2, . + 4 + (0x35 << 2)
label_1a2e84:
    if (ctx->pc == 0x1A2E84u) {
        ctx->pc = 0x1A2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E80u;
        // 0x1a2e84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E88u;
        goto label_1a2e88;
    }
    ctx->pc = 0x1A2E80u;
    {
        const bool branch_taken_0x1a2e80 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1a2e80) {
            ctx->pc = 0x1A2E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2E80u;
            // 0x1a2e84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2E88u;
label_1a2e88:
    // 0x1a2e88: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
label_1a2e8c:
    if (ctx->pc == 0x1A2E8Cu) {
        ctx->pc = 0x1A2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E88u;
        // 0x1a2e8c: 0x86020030  lh          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E90u;
        goto label_1a2e90;
    }
    ctx->pc = 0x1A2E88u;
    {
        const bool branch_taken_0x1a2e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e88) {
            ctx->pc = 0x1A2E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2E88u;
            // 0x1a2e8c: 0x86020030  lh          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2F28u;
            goto label_1a2f28;
        }
    }
    ctx->pc = 0x1A2E90u;
label_1a2e90:
    // 0x1a2e90: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x1a2e90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_1a2e94:
    // 0x1a2e94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a2e98:
    // 0x1a2e98: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a2e9c:
    // 0x1a2e9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1a2ea0:
    if (ctx->pc == 0x1A2EA0u) {
        ctx->pc = 0x1A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E9Cu;
        // 0x1a2ea0: 0xa6020032  sh          $v0, 0x32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EA4u;
        goto label_1a2ea4;
    }
    ctx->pc = 0x1A2E9Cu;
    {
        const bool branch_taken_0x1a2e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E9Cu;
        // 0x1a2ea0: 0xa6020032  sh          $v0, 0x32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e9c) {
            ctx->pc = 0x1A2EB8u;
            goto label_1a2eb8;
        }
    }
    ctx->pc = 0x1A2EA4u;
label_1a2ea4:
    // 0x1a2ea4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1a2ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2ea8:
    // 0x1a2ea8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1a2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_1a2eac:
    // 0x1a2eac: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a2eb0:
    if (ctx->pc == 0x1A2EB0u) {
        ctx->pc = 0x1A2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EACu;
        // 0x1a2eb0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EB4u;
        goto label_1a2eb4;
    }
    ctx->pc = 0x1A2EACu;
    {
        const bool branch_taken_0x1a2eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EACu;
        // 0x1a2eb0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2eac) {
            ctx->pc = 0x1A2EDCu;
            goto label_1a2edc;
        }
    }
    ctx->pc = 0x1A2EB4u;
label_1a2eb4:
    // 0x1a2eb4: 0x0  nop
    ctx->pc = 0x1a2eb4u;
    // NOP
label_1a2eb8:
    // 0x1a2eb8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1a2ebc:
    // 0x1a2ebc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1a2ec0:
    // 0x1a2ec0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a2ec0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2ec4:
    // 0x1a2ec4: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1a2ec4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2ec8:
    // 0x1a2ec8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a2ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a2ecc:
    // 0x1a2ecc: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a2eccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a2ed0:
    // 0x1a2ed0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1a2ed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2ed4:
    // 0x1a2ed4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1a2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_1a2ed8:
    // 0x1a2ed8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a2edc:
    // 0x1a2edc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2ee0:
    if (ctx->pc == 0x1A2EE0u) {
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EE4u;
        goto label_1a2ee4;
    }
    ctx->pc = 0x1A2EDCu;
    {
        const bool branch_taken_0x1a2edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2edc) {
            ctx->pc = 0x1A2EF8u;
            goto label_1a2ef8;
        }
    }
    ctx->pc = 0x1A2EE4u;
label_1a2ee4:
    // 0x1a2ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ee8:
    // 0x1a2ee8: 0x40f809  jalr        $v0
label_1a2eec:
    if (ctx->pc == 0x1A2EECu) {
        ctx->pc = 0x1A2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EE8u;
        // 0x1a2eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EF0u;
        goto label_1a2ef0;
    }
    ctx->pc = 0x1A2EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2EF0u);
        ctx->pc = 0x1A2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EE8u;
        // 0x1a2eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EE8u, 0x1A2EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2EF0u;
label_1a2ef0:
    // 0x1a2ef0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2ef4:
    if (ctx->pc == 0x1A2EF4u) {
        ctx->pc = 0x1A2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EF0u;
        // 0x1a2ef4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EF8u;
        goto label_1a2ef8;
    }
    ctx->pc = 0x1A2EF0u;
    {
        const bool branch_taken_0x1a2ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EF0u;
        // 0x1a2ef4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ef0) {
            ctx->pc = 0x1A2F10u;
            goto label_1a2f10;
        }
    }
    ctx->pc = 0x1A2EF8u;
label_1a2ef8:
    // 0x1a2ef8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a2ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a2efc:
    // 0x1a2efc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a2f00:
    // 0x1a2f00: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a2f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
label_1a2f04:
    // 0x1a2f04: 0xc068186  jal         func_1A0618
label_1a2f08:
    if (ctx->pc == 0x1A2F08u) {
        ctx->pc = 0x1A2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F04u;
        // 0x1a2f08: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F0Cu;
        goto label_1a2f0c;
    }
    ctx->pc = 0x1A2F04u;
    SET_GPR_U32(ctx, 31, 0x1A2F0Cu);
    ctx->pc = 0x1A2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F04u;
    // 0x1a2f08: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2F04u, 0x1A2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F0Cu;
label_1a2f0c:
    // 0x1a2f0c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a2f10:
    // 0x1a2f10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1a2f14:
    if (ctx->pc == 0x1A2F14u) {
        ctx->pc = 0x1A2F18u;
        goto label_1a2f18;
    }
    ctx->pc = 0x1A2F10u;
    {
        const bool branch_taken_0x1a2f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f10) {
            ctx->pc = 0x1A2F50u;
            goto label_1a2f50;
        }
    }
    ctx->pc = 0x1A2F18u;
label_1a2f18:
    // 0x1a2f18: 0x40f809  jalr        $v0
label_1a2f1c:
    if (ctx->pc == 0x1A2F1Cu) {
        ctx->pc = 0x1A2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F18u;
        // 0x1a2f1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F20u;
        goto label_1a2f20;
    }
    ctx->pc = 0x1A2F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2F20u);
        ctx->pc = 0x1A2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F18u;
        // 0x1a2f1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F18u, 0x1A2F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2F20u;
label_1a2f20:
    // 0x1a2f20: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a2f24:
    if (ctx->pc == 0x1A2F24u) {
        ctx->pc = 0x1A2F28u;
        goto label_1a2f28;
    }
    ctx->pc = 0x1A2F20u;
    {
        const bool branch_taken_0x1a2f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f20) {
            ctx->pc = 0x1A2F50u;
            goto label_1a2f50;
        }
    }
    ctx->pc = 0x1A2F28u;
label_1a2f28:
    // 0x1a2f28: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a2f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1a2f2c:
    // 0x1a2f2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2f30:
    if (ctx->pc == 0x1A2F30u) {
        ctx->pc = 0x1A2F34u;
        goto label_1a2f34;
    }
    ctx->pc = 0x1A2F2Cu;
    {
        const bool branch_taken_0x1a2f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f2c) {
            ctx->pc = 0x1A2F48u;
            goto label_1a2f48;
        }
    }
    ctx->pc = 0x1A2F34u;
label_1a2f34:
    // 0x1a2f34: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1a2f34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1a2f38:
    // 0x1a2f38: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a2f3c:
    // 0x1a2f3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a2f40:
    if (ctx->pc == 0x1A2F40u) {
        ctx->pc = 0x1A2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F3Cu;
        // 0x1a2f40: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F44u;
        goto label_1a2f44;
    }
    ctx->pc = 0x1A2F3Cu;
    {
        const bool branch_taken_0x1a2f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F3Cu;
        // 0x1a2f40: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f3c) {
            ctx->pc = 0x1A2F50u;
            goto label_1a2f50;
        }
    }
    ctx->pc = 0x1A2F44u;
label_1a2f44:
    // 0x1a2f44: 0x0  nop
    ctx->pc = 0x1a2f44u;
    // NOP
label_1a2f48:
    // 0x1a2f48: 0xc06881e  jal         func_1A2078
label_1a2f4c:
    if (ctx->pc == 0x1A2F4Cu) {
        ctx->pc = 0x1A2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F48u;
        // 0x1a2f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F50u;
        goto label_1a2f50;
    }
    ctx->pc = 0x1A2F48u;
    SET_GPR_U32(ctx, 31, 0x1A2F50u);
    ctx->pc = 0x1A2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F48u;
    // 0x1a2f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A2F48u, 0x1A2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F50u;
label_1a2f50:
    // 0x1a2f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2f54:
    // 0x1a2f54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a2f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2f58:
    // 0x1a2f58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a2f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a2f5c:
    // 0x1a2f5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a2f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2f60:
    // 0x1a2f60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a2f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a2f64:
    // 0x1a2f64: 0x3e00008  jr          $ra
label_1a2f68:
    if (ctx->pc == 0x1A2F68u) {
        ctx->pc = 0x1A2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F64u;
        // 0x1a2f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F6Cu;
        goto label_fallthrough_0x1a2f64;
    }
    ctx->pc = 0x1A2F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F64u;
        // 0x1a2f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2f64:
    ctx->pc = 0x1A2F6Cu;
}
