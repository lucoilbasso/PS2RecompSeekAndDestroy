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

// Function: ScrewPartsControl__7ApcTankP12ApTankWeaponi
// Address: 0x14fe90 - 0x14ff94
void ScrewPartsControl__7ApcTankP12ApTankWeaponi_0x14fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScrewPartsControl__7ApcTankP12ApTankWeaponi_0x14fe90");
#endif

    switch (ctx->pc) {
        case 0x14fec0u: goto label_14fec0;
        case 0x14ff38u: goto label_14ff38;
        default: break;
    }

    ctx->pc = 0x14fe90u;

    // 0x14fe90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14fe94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14fe98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14fe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14fe9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fe9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fea0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14fea4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14fea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14feac: 0x92020575  lbu         $v0, 0x575($s0)
    ctx->pc = 0x14feacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x14feb0: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14FEB0u;
    {
        const bool branch_taken_0x14feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEB0u;
        // 0x14feb4: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14feb0) {
            ctx->pc = 0x14FF30u;
            goto label_14ff30;
        }
    }
    ctx->pc = 0x14FEB8u;
    // 0x14feb8: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x14FEB8u;
    SET_GPR_U32(ctx, 31, 0x14FEC0u);
    ctx->pc = 0x14FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEB8u;
    // 0x14febc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x14FEB8u, 0x14FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEC0u;
label_14fec0:
    // 0x14fec0: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x14fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14fec4: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x14fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14fec8: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x14fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14fecc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FECCu;
    {
        const bool branch_taken_0x14fecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fecc) {
            ctx->pc = 0x14FED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FECCu;
            // 0x14fed0: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FEE0u;
            goto label_14fee0;
        }
    }
    ctx->pc = 0x14FED4u;
    // 0x14fed4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x14fed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14fed8: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x14fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x14fedc: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x14fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_14fee0:
    // 0x14fee0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14fee4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x14fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14fee8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14FEE8u;
    {
        const bool branch_taken_0x14fee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEE8u;
        // 0x14feec: 0x641025  or          $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fee8) {
            ctx->pc = 0x14FEF4u;
            goto label_14fef4;
        }
    }
    ctx->pc = 0x14FEF0u;
    // 0x14fef0: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x14fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_14fef4:
    // 0x14fef4: 0x52200023  beql        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x14FEF4u;
    {
        const bool branch_taken_0x14fef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fef4) {
            ctx->pc = 0x14FEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FEF4u;
            // 0x14fef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF84u;
            goto label_14ff84;
        }
    }
    ctx->pc = 0x14FEFCu;
    // 0x14fefc: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x14fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14ff00: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14ff00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x14ff04: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x14FF04u;
    {
        const bool branch_taken_0x14ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff04) {
            ctx->pc = 0x14FF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF04u;
            // 0x14ff08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF84u;
            goto label_14ff84;
        }
    }
    ctx->pc = 0x14FF0Cu;
    // 0x14ff0c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x14ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x14ff10: 0x26020820  addiu       $v0, $s0, 0x820
    ctx->pc = 0x14ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x14ff14: 0x24639b70  addiu       $v1, $v1, -0x6490
    ctx->pc = 0x14ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x14ff18: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14ff18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ff1c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x14ff1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(FAST_READ128(0x209B70u));
    // 0x14ff20: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x14ff20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14ff24: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14ff28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14FF28u;
    {
        const bool branch_taken_0x14ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF28u;
        // 0x14ff2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff28) {
            ctx->pc = 0x14FF84u;
            goto label_14ff84;
        }
    }
    ctx->pc = 0x14FF30u;
label_14ff30:
    // 0x14ff30: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x14FF30u;
    SET_GPR_U32(ctx, 31, 0x14FF38u);
    ctx->pc = 0x14FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF30u;
    // 0x14ff34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x14FF30u, 0x14FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF38u;
label_14ff38:
    // 0x14ff38: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14ff3c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x14ff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x14ff40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FF40u;
    {
        const bool branch_taken_0x14ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff40) {
            ctx->pc = 0x14FF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF40u;
            // 0x14ff44: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF58u;
            goto label_14ff58;
        }
    }
    ctx->pc = 0x14FF48u;
    // 0x14ff48: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x14ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x14ff4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14ff4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ff50: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x14ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x14ff54: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x14ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_14ff58:
    // 0x14ff58: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x14ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x14ff5c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FF5Cu;
    {
        const bool branch_taken_0x14ff5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff5c) {
            ctx->pc = 0x14FF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF5Cu;
            // 0x14ff60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF84u;
            goto label_14ff84;
        }
    }
    ctx->pc = 0x14FF64u;
    // 0x14ff64: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x14ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14ff68: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x14ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x14ff6c: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x14ff70: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14ff70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14ff74: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14ff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14ff78: 0xae030264  sw          $v1, 0x264($s0)
    ctx->pc = 0x14ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 3));
    // 0x14ff7c: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x14ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x14ff80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ff80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14ff84:
    // 0x14ff84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ff84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ff88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ff88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ff8c: 0x3e00008  jr          $ra
    ctx->pc = 0x14FF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF8Cu;
        // 0x14ff90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FF94u;
}
