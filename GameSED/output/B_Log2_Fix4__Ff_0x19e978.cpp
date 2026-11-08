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

// Function: B_Log2_Fix4__Ff
// Address: 0x19e978 - 0x19ea14
void B_Log2_Fix4__Ff_0x19e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_Log2_Fix4__Ff_0x19e978");
#endif

    switch (ctx->pc) {
        case 0x19e9b0u: goto label_19e9b0;
        case 0x19e9e0u: goto label_19e9e0;
        default: break;
    }

    ctx->pc = 0x19e978u;

    // 0x19e978: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x19e978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19e97c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x19e97cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19e980: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x19e980u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19e984: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x19e984u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19e988: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x19e98c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19e98cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e990: 0x1880001e  blez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19E990u;
    {
        const bool branch_taken_0x19e990 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E990u;
        // 0x19e994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e990) {
            ctx->pc = 0x19EA0Cu;
            goto label_19ea0c;
        }
    }
    ctx->pc = 0x19E998u;
    // 0x19e998: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19e99c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x19e99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19e9a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E9A0u;
    {
        const bool branch_taken_0x19e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9A0u;
        // 0x19e9a4: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9a0) {
            ctx->pc = 0x19E9D0u;
            goto label_19e9d0;
        }
    }
    ctx->pc = 0x19E9A8u;
    // 0x19e9a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x19e9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19e9ac: 0x0  nop
    ctx->pc = 0x19e9acu;
    // NOP
label_19e9b0:
    // 0x19e9b0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x19e9b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x19e9b4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x19e9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19e9b8: 0x0  nop
    ctx->pc = 0x19e9b8u;
    // NOP
    // 0x19e9bc: 0x0  nop
    ctx->pc = 0x19e9bcu;
    // NOP
    // 0x19e9c0: 0x0  nop
    ctx->pc = 0x19e9c0u;
    // NOP
    // 0x19e9c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19E9C4u;
    {
        const bool branch_taken_0x19e9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9C4u;
        // 0x19e9c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9c4) {
            ctx->pc = 0x19E9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e9b0;
        }
    }
    ctx->pc = 0x19E9CCu;
    // 0x19e9cc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x19e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_19e9d0:
    // 0x19e9d0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x19e9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19e9d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19E9D4u;
    {
        const bool branch_taken_0x19e9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9D4u;
        // 0x19e9d8: 0x24828000  addiu       $v0, $a0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9d4) {
            ctx->pc = 0x19EA00u;
            goto label_19ea00;
        }
    }
    ctx->pc = 0x19E9DCu;
    // 0x19e9dc: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x19e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_19e9e0:
    // 0x19e9e0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x19e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19e9e4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x19e9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19e9e8: 0x0  nop
    ctx->pc = 0x19e9e8u;
    // NOP
    // 0x19e9ec: 0x0  nop
    ctx->pc = 0x19e9ecu;
    // NOP
    // 0x19e9f0: 0x0  nop
    ctx->pc = 0x19e9f0u;
    // NOP
    // 0x19e9f4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19E9F4u;
    {
        const bool branch_taken_0x19e9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9F4u;
        // 0x19e9f8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9f4) {
            ctx->pc = 0x19E9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e9e0;
        }
    }
    ctx->pc = 0x19E9FCu;
    // 0x19e9fc: 0x24828000  addiu       $v0, $a0, -0x8000
    ctx->pc = 0x19e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
label_19ea00:
    // 0x19ea00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19ea04: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x19ea04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x19ea08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_19ea0c:
    // 0x19ea0c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EA14u;
}
