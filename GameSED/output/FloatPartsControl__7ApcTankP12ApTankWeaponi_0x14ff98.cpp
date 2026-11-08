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

// Function: FloatPartsControl__7ApcTankP12ApTankWeaponi
// Address: 0x14ff98 - 0x150054
void FloatPartsControl__7ApcTankP12ApTankWeaponi_0x14ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FloatPartsControl__7ApcTankP12ApTankWeaponi_0x14ff98");
#endif

    switch (ctx->pc) {
        case 0x14ffc4u: goto label_14ffc4;
        case 0x150018u: goto label_150018;
        default: break;
    }

    ctx->pc = 0x14ff98u;

    // 0x14ff98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ff9c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14ffa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ffa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ffa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14ffac: 0x92020575  lbu         $v0, 0x575($s0)
    ctx->pc = 0x14ffacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x14ffb0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x14ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14ffb4: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14FFB4u;
    {
        const bool branch_taken_0x14ffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFB4u;
        // 0x14ffb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffb4) {
            ctx->pc = 0x150010u;
            goto label_150010;
        }
    }
    ctx->pc = 0x14FFBCu;
    // 0x14ffbc: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x14FFBCu;
    SET_GPR_U32(ctx, 31, 0x14FFC4u);
    ctx->pc = 0x14FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFBCu;
    // 0x14ffc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x14FFBCu, 0x14FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFC4u;
label_14ffc4:
    // 0x14ffc4: 0x26050820  addiu       $a1, $s0, 0x820
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x14ffc8: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x14ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x14ffcc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14ffd0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x14ffd4: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x14ffd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14ffd8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14ffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14ffdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14FFDCu;
    {
        const bool branch_taken_0x14ffdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFDCu;
        // 0x14ffe0: 0x24639b80  addiu       $v1, $v1, -0x6480 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffdc) {
            ctx->pc = 0x14FFE8u;
            goto label_14ffe8;
        }
    }
    ctx->pc = 0x14FFE4u;
    // 0x14ffe4: 0xae060264  sw          $a2, 0x264($s0)
    ctx->pc = 0x14ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 6));
label_14ffe8:
    // 0x14ffe8: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x14ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14ffec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14ffecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x14fff0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14FFF0u;
    {
        const bool branch_taken_0x14fff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fff0) {
            ctx->pc = 0x14FFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FFF0u;
            // 0x14fff4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150048u;
            goto label_150048;
        }
    }
    ctx->pc = 0x14FFF8u;
    // 0x14fff8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x14fff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fffc: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x14fffcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150000: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x150000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150004: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x150004u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150008: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x150008u;
    {
        const bool branch_taken_0x150008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150008u;
        // 0x15000c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150008) {
            ctx->pc = 0x150048u;
            goto label_150048;
        }
    }
    ctx->pc = 0x150010u;
label_150010:
    // 0x150010: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x150010u;
    SET_GPR_U32(ctx, 31, 0x150018u);
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x150010u, 0x150018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150018u;
label_150018:
    // 0x150018: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x150018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x15001c: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x15001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x150020: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x150020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150024: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x150024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x150028: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x150028u;
    {
        const bool branch_taken_0x150028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150028) {
            ctx->pc = 0x15002Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150028u;
            // 0x15002c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150048u;
            goto label_150048;
        }
    }
    ctx->pc = 0x150030u;
    // 0x150030: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x150030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x150034: 0xae030264  sw          $v1, 0x264($s0)
    ctx->pc = 0x150034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 3));
    // 0x150038: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x150038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15003c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150040: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x150040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x150044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150048:
    // 0x150048: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x150048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15004c: 0x3e00008  jr          $ra
    ctx->pc = 0x15004Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15004Cu;
        // 0x150050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15004Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150054u;
}
