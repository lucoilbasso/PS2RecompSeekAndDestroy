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

// Function: X_RandF__Fv
// Address: 0x19bed0 - 0x19bfe4
void X_RandF__Fv_0x19bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("X_RandF__Fv_0x19bed0");
#endif

    switch (ctx->pc) {
        case 0x19bef8u: goto label_19bef8;
        default: break;
    }

    ctx->pc = 0x19bed0u;

    // 0x19bed0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bed4: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19bed8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19bedc: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19BEDCu;
    {
        const bool branch_taken_0x19bedc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEDCu;
        // 0x19bee0: 0x2445f0f0  addiu       $a1, $v0, -0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bedc) {
            ctx->pc = 0x19BF30u;
            goto label_19bf30;
        }
    }
    ctx->pc = 0x19BEE4u;
    // 0x19bee4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19bee8: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19bee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19beec: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19beecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19bef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bef4: 0x0  nop
    ctx->pc = 0x19bef4u;
    // NOP
label_19bef8:
    // 0x19bef8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19befc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19befcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19bf00: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19bf04: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19bf08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bf0c: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19bf0cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19bf10: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19BF10u;
    {
        const bool branch_taken_0x19bf10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF10u;
        // 0x19bf14: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf10) {
            ctx->pc = 0x19BEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bef8;
        }
    }
    ctx->pc = 0x19BF18u;
    // 0x19bf18: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bf1c: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19bf20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19bf20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19bf24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19bf24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
    // 0x19bf28: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bf2c: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
label_19bf30:
    // 0x19bf30: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bf34: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BF34u;
    {
        const bool branch_taken_0x19bf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bf34) {
            ctx->pc = 0x19BF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BF34u;
            // 0x19bf38: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BF50u;
            goto label_19bf50;
        }
    }
    ctx->pc = 0x19BF3Cu;
    // 0x19bf3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bf40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bf44: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bf48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19BF48u;
    {
        const bool branch_taken_0x19bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF48u;
        // 0x19bf4c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf48) {
            ctx->pc = 0x19BFC8u;
            goto label_19bfc8;
        }
    }
    ctx->pc = 0x19BF50u;
label_19bf50:
    // 0x19bf50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bf54: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19bf54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19bf58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BF58u;
    {
        const bool branch_taken_0x19bf58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF58u;
        // 0x19bf5c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf58) {
            ctx->pc = 0x19BF78u;
            goto label_19bf78;
        }
    }
    ctx->pc = 0x19BF60u;
    // 0x19bf60: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19bf64: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19bf68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19bf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bf6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19bf6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BF70u;
    {
        const bool branch_taken_0x19bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF70u;
        // 0x19bf74: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf70) {
            ctx->pc = 0x19BF8Cu;
            goto label_19bf8c;
        }
    }
    ctx->pc = 0x19BF78u;
label_19bf78:
    // 0x19bf78: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19bf7c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19bf80: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bf84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19bf84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf88: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19bf8c:
    // 0x19bf8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bf90: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19bf94: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19bf98: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19bf9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19bfa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bfa4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bfa8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19bfac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bfb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bfb4: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19bfb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19bfb8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BFB8u;
    {
        const bool branch_taken_0x19bfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFB8u;
        // 0x19bfbc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfb8) {
            ctx->pc = 0x19BFC4u;
            goto label_19bfc4;
        }
    }
    ctx->pc = 0x19BFC0u;
    // 0x19bfc0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19bfc4:
    // 0x19bfc4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19bfc8:
    // 0x19bfc8: 0x30837fff  andi        $v1, $a0, 0x7FFF
    ctx->pc = 0x19bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x19bfcc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19bfccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19bfd0: 0x4b01093f  vitof15.x   $vf1, $vf1
    ctx->pc = 0x19bfd0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19bfd4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19bfd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19bfd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19bfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x19BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BFE4u;
}
