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

// Function: ApMotionLookPosProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x139cd0 - 0x139ea0
void ApMotionLookPosProc__FP11BMotionCtrlP11BMotionWorki_0x139cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionLookPosProc__FP11BMotionCtrlP11BMotionWorki_0x139cd0");
#endif

    switch (ctx->pc) {
        case 0x139cd0u: goto label_139cd0;
        case 0x139cd4u: goto label_139cd4;
        case 0x139cd8u: goto label_139cd8;
        case 0x139cdcu: goto label_139cdc;
        case 0x139ce0u: goto label_139ce0;
        case 0x139ce4u: goto label_139ce4;
        case 0x139ce8u: goto label_139ce8;
        case 0x139cecu: goto label_139cec;
        case 0x139cf0u: goto label_139cf0;
        case 0x139cf4u: goto label_139cf4;
        case 0x139cf8u: goto label_139cf8;
        case 0x139cfcu: goto label_139cfc;
        case 0x139d00u: goto label_139d00;
        case 0x139d04u: goto label_139d04;
        case 0x139d08u: goto label_139d08;
        case 0x139d0cu: goto label_139d0c;
        case 0x139d10u: goto label_139d10;
        case 0x139d14u: goto label_139d14;
        case 0x139d18u: goto label_139d18;
        case 0x139d1cu: goto label_139d1c;
        case 0x139d20u: goto label_139d20;
        case 0x139d24u: goto label_139d24;
        case 0x139d28u: goto label_139d28;
        case 0x139d2cu: goto label_139d2c;
        case 0x139d30u: goto label_139d30;
        case 0x139d34u: goto label_139d34;
        case 0x139d38u: goto label_139d38;
        case 0x139d3cu: goto label_139d3c;
        case 0x139d40u: goto label_139d40;
        case 0x139d44u: goto label_139d44;
        case 0x139d48u: goto label_139d48;
        case 0x139d4cu: goto label_139d4c;
        case 0x139d50u: goto label_139d50;
        case 0x139d54u: goto label_139d54;
        case 0x139d58u: goto label_139d58;
        case 0x139d5cu: goto label_139d5c;
        case 0x139d60u: goto label_139d60;
        case 0x139d64u: goto label_139d64;
        case 0x139d68u: goto label_139d68;
        case 0x139d6cu: goto label_139d6c;
        case 0x139d70u: goto label_139d70;
        case 0x139d74u: goto label_139d74;
        case 0x139d78u: goto label_139d78;
        case 0x139d7cu: goto label_139d7c;
        case 0x139d80u: goto label_139d80;
        case 0x139d84u: goto label_139d84;
        case 0x139d88u: goto label_139d88;
        case 0x139d8cu: goto label_139d8c;
        case 0x139d90u: goto label_139d90;
        case 0x139d94u: goto label_139d94;
        case 0x139d98u: goto label_139d98;
        case 0x139d9cu: goto label_139d9c;
        case 0x139da0u: goto label_139da0;
        case 0x139da4u: goto label_139da4;
        case 0x139da8u: goto label_139da8;
        case 0x139dacu: goto label_139dac;
        case 0x139db0u: goto label_139db0;
        case 0x139db4u: goto label_139db4;
        case 0x139db8u: goto label_139db8;
        case 0x139dbcu: goto label_139dbc;
        case 0x139dc0u: goto label_139dc0;
        case 0x139dc4u: goto label_139dc4;
        case 0x139dc8u: goto label_139dc8;
        case 0x139dccu: goto label_139dcc;
        case 0x139dd0u: goto label_139dd0;
        case 0x139dd4u: goto label_139dd4;
        case 0x139dd8u: goto label_139dd8;
        case 0x139ddcu: goto label_139ddc;
        case 0x139de0u: goto label_139de0;
        case 0x139de4u: goto label_139de4;
        case 0x139de8u: goto label_139de8;
        case 0x139decu: goto label_139dec;
        case 0x139df0u: goto label_139df0;
        case 0x139df4u: goto label_139df4;
        case 0x139df8u: goto label_139df8;
        case 0x139dfcu: goto label_139dfc;
        case 0x139e00u: goto label_139e00;
        case 0x139e04u: goto label_139e04;
        case 0x139e08u: goto label_139e08;
        case 0x139e0cu: goto label_139e0c;
        case 0x139e10u: goto label_139e10;
        case 0x139e14u: goto label_139e14;
        case 0x139e18u: goto label_139e18;
        case 0x139e1cu: goto label_139e1c;
        case 0x139e20u: goto label_139e20;
        case 0x139e24u: goto label_139e24;
        case 0x139e28u: goto label_139e28;
        case 0x139e2cu: goto label_139e2c;
        case 0x139e30u: goto label_139e30;
        case 0x139e34u: goto label_139e34;
        case 0x139e38u: goto label_139e38;
        case 0x139e3cu: goto label_139e3c;
        case 0x139e40u: goto label_139e40;
        case 0x139e44u: goto label_139e44;
        case 0x139e48u: goto label_139e48;
        case 0x139e4cu: goto label_139e4c;
        case 0x139e50u: goto label_139e50;
        case 0x139e54u: goto label_139e54;
        case 0x139e58u: goto label_139e58;
        case 0x139e5cu: goto label_139e5c;
        case 0x139e60u: goto label_139e60;
        case 0x139e64u: goto label_139e64;
        case 0x139e68u: goto label_139e68;
        case 0x139e6cu: goto label_139e6c;
        case 0x139e70u: goto label_139e70;
        case 0x139e74u: goto label_139e74;
        case 0x139e78u: goto label_139e78;
        case 0x139e7cu: goto label_139e7c;
        case 0x139e80u: goto label_139e80;
        case 0x139e84u: goto label_139e84;
        case 0x139e88u: goto label_139e88;
        case 0x139e8cu: goto label_139e8c;
        case 0x139e90u: goto label_139e90;
        case 0x139e94u: goto label_139e94;
        case 0x139e98u: goto label_139e98;
        case 0x139e9cu: goto label_139e9c;
        default: break;
    }

    ctx->pc = 0x139cd0u;

label_139cd0:
    // 0x139cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x139cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_139cd4:
    // 0x139cd4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x139cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_139cd8:
    // 0x139cd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x139cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_139cdc:
    // 0x139cdc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x139cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_139ce0:
    // 0x139ce0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139ce4:
    // 0x139ce4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x139ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_139ce8:
    // 0x139ce8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x139ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_139cec:
    // 0x139cec: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x139cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_139cf0:
    // 0x139cf0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x139cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_139cf4:
    // 0x139cf4: 0x8e330014  lw          $s3, 0x14($s1)
    ctx->pc = 0x139cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_139cf8:
    // 0x139cf8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x139cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_139cfc:
    // 0x139cfc: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x139cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_139d00:
    // 0x139d00: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x139d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_139d04:
    // 0x139d04: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139d04u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_139d08:
    // 0x139d08: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x139d08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_139d0c:
    // 0x139d0c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x139d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_139d10:
    // 0x139d10: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_139d14:
    // 0x139d14: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x139d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_139d18:
    // 0x139d18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x139d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139d1c:
    // 0x139d1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x139d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_139d20:
    // 0x139d20: 0xc0674a2  jal         func_19D288
label_139d24:
    if (ctx->pc == 0x139D24u) {
        ctx->pc = 0x139D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D20u;
        // 0x139d24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D28u;
        goto label_139d28;
    }
    ctx->pc = 0x139D20u;
    SET_GPR_U32(ctx, 31, 0x139D28u);
    ctx->pc = 0x139D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D20u;
    // 0x139d24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x139D20u, 0x139D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D28u;
label_139d28:
    // 0x139d28: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x139d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_139d2c:
    // 0x139d2c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x139d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_139d30:
    // 0x139d30: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x139d30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_139d34:
    // 0x139d34: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x139d34u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_139d38:
    // 0x139d38: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x139d38u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_139d3c:
    // 0x139d3c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x139d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_139d40:
    // 0x139d40: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_139d44:
    if (ctx->pc == 0x139D44u) {
        ctx->pc = 0x139D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D40u;
        // 0x139d44: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D48u;
        goto label_139d48;
    }
    ctx->pc = 0x139D40u;
    {
        const bool branch_taken_0x139d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d40) {
            ctx->pc = 0x139D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139D40u;
            // 0x139d44: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139D88u;
            goto label_139d88;
        }
    }
    ctx->pc = 0x139D48u;
label_139d48:
    // 0x139d48: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x139d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_139d4c:
    // 0x139d4c: 0x70041868  pabsw       $v1, $a0
    ctx->pc = 0x139d4cu;
    SET_GPR_VEC(ctx, 3, PS2_PABSW(GPR_VEC(ctx, 0)));
label_139d50:
    // 0x139d50: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x139d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_139d54:
    // 0x139d54: 0x70a318e8  pminw       $v1, $a1, $v1
    ctx->pc = 0x139d54u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
label_139d58:
    // 0x139d58: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x139d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_139d5c:
    // 0x139d5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x139d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_139d60:
    // 0x139d60: 0x70041068  pabsw       $v0, $a0
    ctx->pc = 0x139d60u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
label_139d64:
    // 0x139d64: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x139d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_139d68:
    // 0x139d68: 0x21023  negu        $v0, $v0
    ctx->pc = 0x139d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_139d6c:
    // 0x139d6c: 0x706218c8  pmaxw       $v1, $v1, $v0
    ctx->pc = 0x139d6cu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_139d70:
    // 0x139d70: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x139d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_139d74:
    // 0x139d74: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x139d74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_139d78:
    // 0x139d78: 0x31023  negu        $v0, $v1
    ctx->pc = 0x139d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_139d7c:
    // 0x139d7c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x139d7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_139d80:
    // 0x139d80: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x139d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_139d84:
    // 0x139d84: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x139d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_139d88:
    // 0x139d88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139d8c:
    // 0x139d8c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x139d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_139d90:
    // 0x139d90: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_139d94:
    if (ctx->pc == 0x139D94u) {
        ctx->pc = 0x139D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D90u;
        // 0x139d94: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D98u;
        goto label_139d98;
    }
    ctx->pc = 0x139D90u;
    {
        const bool branch_taken_0x139d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x139D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D90u;
        // 0x139d94: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d90) {
            ctx->pc = 0x139DA4u;
            goto label_139da4;
        }
    }
    ctx->pc = 0x139D98u;
label_139d98:
    // 0x139d98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x139d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_139d9c:
    // 0x139d9c: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
label_139da0:
    if (ctx->pc == 0x139DA0u) {
        ctx->pc = 0x139DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D9Cu;
        // 0x139da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139DA4u;
        goto label_139da4;
    }
    ctx->pc = 0x139D9Cu;
    {
        const bool branch_taken_0x139d9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x139DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D9Cu;
        // 0x139da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d9c) {
            ctx->pc = 0x139E08u;
            goto label_139e08;
        }
    }
    ctx->pc = 0x139DA4u;
label_139da4:
    // 0x139da4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_139da8:
    // 0x139da8: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x139da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_139dac:
    // 0x139dac: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x139dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_139db0:
    // 0x139db0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x139db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_139db4:
    // 0x139db4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x139db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_139db8:
    // 0x139db8: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x139db8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_139dbc:
    // 0x139dbc: 0x1046002f  beq         $v0, $a2, . + 4 + (0x2F << 2)
label_139dc0:
    if (ctx->pc == 0x139DC0u) {
        ctx->pc = 0x139DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DBCu;
        // 0x139dc0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139DC4u;
        goto label_139dc4;
    }
    ctx->pc = 0x139DBCu;
    {
        const bool branch_taken_0x139dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x139DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DBCu;
        // 0x139dc0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139dbc) {
            ctx->pc = 0x139E7Cu;
            goto label_139e7c;
        }
    }
    ctx->pc = 0x139DC4u;
label_139dc4:
    // 0x139dc4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x139dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139dc8:
    // 0x139dc8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_139dcc:
    // 0x139dcc: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x139dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_139dd0:
    // 0x139dd0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_139dd4:
    // 0x139dd4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x139dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_139dd8:
    // 0x139dd8: 0xc0677bc  jal         func_19DEF0
label_139ddc:
    if (ctx->pc == 0x139DDCu) {
        ctx->pc = 0x139DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DD8u;
        // 0x139ddc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139DE0u;
        goto label_139de0;
    }
    ctx->pc = 0x139DD8u;
    SET_GPR_U32(ctx, 31, 0x139DE0u);
    ctx->pc = 0x139DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DD8u;
    // 0x139ddc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEF0u, 0x139DD8u, 0x139DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DE0u;
label_139de0:
    // 0x139de0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x139de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_139de4:
    // 0x139de4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x139de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_139de8:
    // 0x139de8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x139de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_139dec:
    // 0x139dec: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x139decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_139df0:
    // 0x139df0: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_139df4:
    if (ctx->pc == 0x139DF4u) {
        ctx->pc = 0x139DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF0u;
        // 0x139df4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139DF8u;
        goto label_139df8;
    }
    ctx->pc = 0x139DF0u;
    {
        const bool branch_taken_0x139df0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF0u;
        // 0x139df4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139df0) {
            ctx->pc = 0x139E7Cu;
            goto label_139e7c;
        }
    }
    ctx->pc = 0x139DF8u;
label_139df8:
    // 0x139df8: 0xa0f809  jalr        $a1
label_139dfc:
    if (ctx->pc == 0x139DFCu) {
        ctx->pc = 0x139DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF8u;
        // 0x139dfc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139E00u;
        goto label_139e00;
    }
    ctx->pc = 0x139DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x139E00u);
        ctx->pc = 0x139DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF8u;
        // 0x139dfc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139DF8u, 0x139E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139E00u;
label_139e00:
    // 0x139e00: 0x1000001e  b           . + 4 + (0x1E << 2)
label_139e04:
    if (ctx->pc == 0x139E04u) {
        ctx->pc = 0x139E08u;
        goto label_139e08;
    }
    ctx->pc = 0x139E00u;
    {
        const bool branch_taken_0x139e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e00) {
            ctx->pc = 0x139E7Cu;
            goto label_139e7c;
        }
    }
    ctx->pc = 0x139E08u;
label_139e08:
    // 0x139e08: 0xc069236  jal         func_1A48D8
label_139e0c:
    if (ctx->pc == 0x139E0Cu) {
        ctx->pc = 0x139E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E08u;
        // 0x139e0c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139E10u;
        goto label_139e10;
    }
    ctx->pc = 0x139E08u;
    SET_GPR_U32(ctx, 31, 0x139E10u);
    ctx->pc = 0x139E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E08u;
    // 0x139e0c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D8u, 0x139E08u, 0x139E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E10u;
label_139e10:
    // 0x139e10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139e14:
    // 0x139e14: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x139e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_139e18:
    // 0x139e18: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x139e18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_139e1c:
    // 0x139e1c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x139e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_139e20:
    // 0x139e20: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x139e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_139e24:
    // 0x139e24: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x139e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_139e28:
    // 0x139e28: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x139e28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_139e2c:
    // 0x139e2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x139e2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139e30:
    // 0x139e30: 0x4a0002ff  vnop
    ctx->pc = 0x139e30u;
    // NOP operation, no action needed for VU0
label_139e34:
    // 0x139e34: 0x4a0002ff  vnop
    ctx->pc = 0x139e34u;
    // NOP operation, no action needed for VU0
label_139e38:
    // 0x139e38: 0x4a0002ff  vnop
    ctx->pc = 0x139e38u;
    // NOP operation, no action needed for VU0
label_139e3c:
    // 0x139e3c: 0x4a0002ff  vnop
    ctx->pc = 0x139e3cu;
    // NOP operation, no action needed for VU0
label_139e40:
    // 0x139e40: 0x4a0002ff  vnop
    ctx->pc = 0x139e40u;
    // NOP operation, no action needed for VU0
label_139e44:
    // 0x139e44: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x139e44u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
label_139e48:
    // 0x139e48: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x139e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_139e4c:
    // 0x139e4c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x139e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_139e50:
    // 0x139e50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_139e54:
    if (ctx->pc == 0x139E54u) {
        ctx->pc = 0x139E58u;
        goto label_139e58;
    }
    ctx->pc = 0x139E50u;
    {
        const bool branch_taken_0x139e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e50) {
            ctx->pc = 0x139E7Cu;
            goto label_139e7c;
        }
    }
    ctx->pc = 0x139E58u;
label_139e58:
    // 0x139e58: 0xc62d0018  lwc1        $f13, 0x18($s1)
    ctx->pc = 0x139e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_139e5c:
    // 0x139e5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x139e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_139e60:
    // 0x139e60: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x139e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_139e64:
    // 0x139e64: 0xc067858  jal         func_19E160
label_139e68:
    if (ctx->pc == 0x139E68u) {
        ctx->pc = 0x139E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E64u;
        // 0x139e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139E6Cu;
        goto label_139e6c;
    }
    ctx->pc = 0x139E64u;
    SET_GPR_U32(ctx, 31, 0x139E6Cu);
    ctx->pc = 0x139E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E64u;
    // 0x139e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E160u, 0x139E64u, 0x139E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E6Cu;
label_139e6c:
    // 0x139e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x139e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_139e70:
    // 0x139e70: 0xc06924e  jal         func_1A4938
label_139e74:
    if (ctx->pc == 0x139E74u) {
        ctx->pc = 0x139E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E70u;
        // 0x139e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139E78u;
        goto label_139e78;
    }
    ctx->pc = 0x139E70u;
    SET_GPR_U32(ctx, 31, 0x139E78u);
    ctx->pc = 0x139E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E70u;
    // 0x139e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139E70u, 0x139E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E78u;
label_139e78:
    // 0x139e78: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x139e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_139e7c:
    // 0x139e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139e80:
    // 0x139e80: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x139e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_139e84:
    // 0x139e84: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x139e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_139e88:
    // 0x139e88: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x139e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_139e8c:
    // 0x139e8c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x139e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_139e90:
    // 0x139e90: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x139e90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_139e94:
    // 0x139e94: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x139e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_139e98:
    // 0x139e98: 0x3e00008  jr          $ra
label_139e9c:
    if (ctx->pc == 0x139E9Cu) {
        ctx->pc = 0x139E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E98u;
        // 0x139e9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139EA0u;
        goto label_fallthrough_0x139e98;
    }
    ctx->pc = 0x139E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E98u;
        // 0x139e9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x139e98:
    ctx->pc = 0x139EA0u;
}
