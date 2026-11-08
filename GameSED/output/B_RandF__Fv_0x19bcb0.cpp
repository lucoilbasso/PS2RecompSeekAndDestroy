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

// Function: B_RandF__Fv
// Address: 0x19bcb0 - 0x19bdc4
void B_RandF__Fv_0x19bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_RandF__Fv_0x19bcb0");
#endif

    switch (ctx->pc) {
        case 0x19bcd8u: goto label_19bcd8;
        default: break;
    }

    ctx->pc = 0x19bcb0u;

    // 0x19bcb0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bcb4: 0x2444f008  addiu       $a0, $v0, -0xFF8
    ctx->pc = 0x19bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x19bcb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F008u));
    // 0x19bcbc: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19BCBCu;
    {
        const bool branch_taken_0x19bcbc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCBCu;
        // 0x19bcc0: 0x2445f008  addiu       $a1, $v0, -0xFF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bcbc) {
            ctx->pc = 0x19BD10u;
            goto label_19bd10;
        }
    }
    ctx->pc = 0x19BCC4u;
    // 0x19bcc4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19bcc8: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19bcc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19bccc: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19bcccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19bcd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcd4: 0x0  nop
    ctx->pc = 0x19bcd4u;
    // NOP
label_19bcd8:
    // 0x19bcd8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19bcdc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19bcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19bce0: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19bce4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19bce8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bcec: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19bcecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19bcf0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19BCF0u;
    {
        const bool branch_taken_0x19bcf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BCF0u;
        // 0x19bcf4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bcf0) {
            ctx->pc = 0x19BCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bcd8;
        }
    }
    ctx->pc = 0x19BCF8u;
    // 0x19bcf8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bcfc: 0x2442f008  addiu       $v0, $v0, -0xFF8
    ctx->pc = 0x19bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x19bd00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19bd00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F00Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F00Cu, _value); } while (0);
    // 0x19bd04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19bd04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F008u, _value); } while (0);
    // 0x19bd08: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bd0c: 0x2445f008  addiu       $a1, $v0, -0xFF8
    ctx->pc = 0x19bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
label_19bd10:
    // 0x19bd10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bd14: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BD14u;
    {
        const bool branch_taken_0x19bd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd14) {
            ctx->pc = 0x19BD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BD14u;
            // 0x19bd18: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BD30u;
            goto label_19bd30;
        }
    }
    ctx->pc = 0x19BD1Cu;
    // 0x19bd1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bd20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bd24: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bd28: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19BD28u;
    {
        const bool branch_taken_0x19bd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD28u;
        // 0x19bd2c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd28) {
            ctx->pc = 0x19BDA8u;
            goto label_19bda8;
        }
    }
    ctx->pc = 0x19BD30u;
label_19bd30:
    // 0x19bd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bd34: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19bd34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19bd38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BD38u;
    {
        const bool branch_taken_0x19bd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD38u;
        // 0x19bd3c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd38) {
            ctx->pc = 0x19BD58u;
            goto label_19bd58;
        }
    }
    ctx->pc = 0x19BD40u;
    // 0x19bd40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19bd44: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19bd48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bd4c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19bd4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BD50u;
    {
        const bool branch_taken_0x19bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD50u;
        // 0x19bd54: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd50) {
            ctx->pc = 0x19BD6Cu;
            goto label_19bd6c;
        }
    }
    ctx->pc = 0x19BD58u;
label_19bd58:
    // 0x19bd58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19bd5c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19bd60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bd64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19bd64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd68: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19bd6c:
    // 0x19bd6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bd70: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19bd74: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19bd78: 0x2465f008  addiu       $a1, $v1, -0xFF8
    ctx->pc = 0x19bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963208));
    // 0x19bd7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F008u));
    // 0x19bd80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bd84: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bd88: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19bd8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bd90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bd94: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19bd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19bd98: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BD98u;
    {
        const bool branch_taken_0x19bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD98u;
        // 0x19bd9c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd98) {
            ctx->pc = 0x19BDA4u;
            goto label_19bda4;
        }
    }
    ctx->pc = 0x19BDA0u;
    // 0x19bda0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19bda4:
    // 0x19bda4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19bda8:
    // 0x19bda8: 0x30837fff  andi        $v1, $a0, 0x7FFF
    ctx->pc = 0x19bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x19bdac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19bdacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19bdb0: 0x4b01093f  vitof15.x   $vf1, $vf1
    ctx->pc = 0x19bdb0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19bdb4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19bdb4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19bdb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19bdb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x19BDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BDC4u;
}
