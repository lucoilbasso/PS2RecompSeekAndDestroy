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

// Function: X_Rand_FVector__FP9FVector32f
// Address: 0x19bfe8 - 0x19c338
void X_Rand_FVector__FP9FVector32f_0x19bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("X_Rand_FVector__FP9FVector32f_0x19bfe8");
#endif

    switch (ctx->pc) {
        case 0x19c020u: goto label_19c020;
        case 0x19c120u: goto label_19c120;
        case 0x19c230u: goto label_19c230;
        default: break;
    }

    ctx->pc = 0x19bfe8u;

    // 0x19bfe8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bfec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bfecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bff0: 0x2443f0f0  addiu       $v1, $v0, -0xF10
    ctx->pc = 0x19bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19bff4: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x19bff4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19bff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19bffc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x19bffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c000: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x19c000u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19c004: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x19c004u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c008: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19C008u;
    {
        const bool branch_taken_0x19c008 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C008u;
        // 0x19c00c: 0xe7ac0004  swc1        $f12, 0x4($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c008) {
            ctx->pc = 0x19C050u;
            goto label_19c050;
        }
    }
    ctx->pc = 0x19C010u;
    // 0x19c010: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c014: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x19c014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c018: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c020:
    // 0x19c020: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19c020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19c024: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19c024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c028: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19c028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19c02c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c030: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19c030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c034: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19c034u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c038: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19C038u;
    {
        const bool branch_taken_0x19c038 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C038u;
        // 0x19c03c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c038) {
            ctx->pc = 0x19C020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c020;
        }
    }
    ctx->pc = 0x19C040u;
    // 0x19c040: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c044: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c048: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19c04c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c04cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
label_19c050:
    // 0x19c050: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c054: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19c054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c058: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c058u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F4u));
    // 0x19c05c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C05Cu;
    {
        const bool branch_taken_0x19c05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c05c) {
            ctx->pc = 0x19C060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C05Cu;
            // 0x19c060: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C078u;
            goto label_19c078;
        }
    }
    ctx->pc = 0x19C064u;
    // 0x19c064: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c06c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c070: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C070u;
    {
        const bool branch_taken_0x19c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C070u;
        // 0x19c074: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c070) {
            ctx->pc = 0x19C0F0u;
            goto label_19c0f0;
        }
    }
    ctx->pc = 0x19C078u;
label_19c078:
    // 0x19c078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c07c: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19c07cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19c080: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C080u;
    {
        const bool branch_taken_0x19c080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C080u;
        // 0x19c084: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c080) {
            ctx->pc = 0x19C0A0u;
            goto label_19c0a0;
        }
    }
    ctx->pc = 0x19C088u;
    // 0x19c088: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c08c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c090: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c094: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c098: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C098u;
    {
        const bool branch_taken_0x19c098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C098u;
        // 0x19c09c: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c098) {
            ctx->pc = 0x19C0B4u;
            goto label_19c0b4;
        }
    }
    ctx->pc = 0x19C0A0u;
label_19c0a0:
    // 0x19c0a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c0a4: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c0a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c0ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0b0: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19c0b4:
    // 0x19c0b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c0b8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c0bc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c0c0: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19c0c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c0c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c0cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c0d0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19c0d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c0d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c0dc: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19c0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c0e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C0E0u;
    {
        const bool branch_taken_0x19c0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0E0u;
        // 0x19c0e4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0e0) {
            ctx->pc = 0x19C0ECu;
            goto label_19c0ec;
        }
    }
    ctx->pc = 0x19C0E8u;
    // 0x19c0e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19c0ec:
    // 0x19c0ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19c0f0:
    // 0x19c0f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c0f4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x19c0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c0f8: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c0fc: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x19c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x19c100: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19c100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c104: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19C104u;
    {
        const bool branch_taken_0x19c104 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C104u;
        // 0x19c108: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c104) {
            ctx->pc = 0x19C150u;
            goto label_19c150;
        }
    }
    ctx->pc = 0x19C10Cu;
    // 0x19c10c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c110: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19c110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19c114: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c11c: 0x0  nop
    ctx->pc = 0x19c11cu;
    // NOP
label_19c120:
    // 0x19c120: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19c120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19c124: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c128: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19c12c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c130: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c134: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19c134u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c138: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19C138u;
    {
        const bool branch_taken_0x19c138 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C138u;
        // 0x19c13c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c138) {
            ctx->pc = 0x19C120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c120;
        }
    }
    ctx->pc = 0x19C140u;
    // 0x19c140: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c144: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c148: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19c14c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c14cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
label_19c150:
    // 0x19c150: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c154: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c158: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F4u));
    // 0x19c15c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C15Cu;
    {
        const bool branch_taken_0x19c15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c15c) {
            ctx->pc = 0x19C160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C15Cu;
            // 0x19c160: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C178u;
            goto label_19c178;
        }
    }
    ctx->pc = 0x19C164u;
    // 0x19c164: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c16c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c170: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C170u;
    {
        const bool branch_taken_0x19c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C170u;
        // 0x19c174: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c170) {
            ctx->pc = 0x19C1F0u;
            goto label_19c1f0;
        }
    }
    ctx->pc = 0x19C178u;
label_19c178:
    // 0x19c178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c17c: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19c17cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19c180: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C180u;
    {
        const bool branch_taken_0x19c180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C180u;
        // 0x19c184: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c180) {
            ctx->pc = 0x19C1A0u;
            goto label_19c1a0;
        }
    }
    ctx->pc = 0x19C188u;
    // 0x19c188: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c18c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c190: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c194: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c198: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C198u;
    {
        const bool branch_taken_0x19c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C198u;
        // 0x19c19c: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c198) {
            ctx->pc = 0x19C1B4u;
            goto label_19c1b4;
        }
    }
    ctx->pc = 0x19C1A0u;
label_19c1a0:
    // 0x19c1a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c1a4: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c1a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c1ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1b0: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19c1b4:
    // 0x19c1b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c1b8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c1bc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c1c0: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19c1c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c1c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c1cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c1d0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19c1d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c1d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c1dc: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19c1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c1e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C1E0u;
    {
        const bool branch_taken_0x19c1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1E0u;
        // 0x19c1e4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1e0) {
            ctx->pc = 0x19C1ECu;
            goto label_19c1ec;
        }
    }
    ctx->pc = 0x19C1E8u;
    // 0x19c1e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19c1ec:
    // 0x19c1ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19c1f0:
    // 0x19c1f0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x19c1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c1f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19c1f8: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x19c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19c1fc: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x19c1fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19c200: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x19C200u;
    {
        const bool branch_taken_0x19c200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C200u;
        // 0x19c204: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c200) {
            ctx->pc = 0x19C30Cu;
            goto label_19c30c;
        }
    }
    ctx->pc = 0x19C208u;
    // 0x19c208: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c20c: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c210: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19c210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c214: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C214u;
    {
        const bool branch_taken_0x19c214 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C214u;
        // 0x19c218: 0x2445f0f0  addiu       $a1, $v0, -0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c214) {
            ctx->pc = 0x19C268u;
            goto label_19c268;
        }
    }
    ctx->pc = 0x19C21Cu;
    // 0x19c21c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c220: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19c220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19c224: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c22c: 0x0  nop
    ctx->pc = 0x19c22cu;
    // NOP
label_19c230:
    // 0x19c230: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19c230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19c234: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19c234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c238: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19c238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19c23c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c240: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c244: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19c244u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c248: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19C248u;
    {
        const bool branch_taken_0x19c248 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C248u;
        // 0x19c24c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c248) {
            ctx->pc = 0x19C230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c230;
        }
    }
    ctx->pc = 0x19C250u;
    // 0x19c250: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c254: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c258: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19c258u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19c25c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19c25cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
    // 0x19c260: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c264: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19c264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
label_19c268:
    // 0x19c268: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19c26c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C26Cu;
    {
        const bool branch_taken_0x19c26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c26c) {
            ctx->pc = 0x19C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C26Cu;
            // 0x19c270: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C288u;
            goto label_19c288;
        }
    }
    ctx->pc = 0x19C274u;
    // 0x19c274: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c27c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c280: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19C280u;
    {
        const bool branch_taken_0x19c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C280u;
        // 0x19c284: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c280) {
            ctx->pc = 0x19C300u;
            goto label_19c300;
        }
    }
    ctx->pc = 0x19C288u;
label_19c288:
    // 0x19c288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c28c: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19c28cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19c290: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C290u;
    {
        const bool branch_taken_0x19c290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C290u;
        // 0x19c294: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c290) {
            ctx->pc = 0x19C2B0u;
            goto label_19c2b0;
        }
    }
    ctx->pc = 0x19C298u;
    // 0x19c298: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c29c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c2a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c2a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C2A8u;
    {
        const bool branch_taken_0x19c2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2A8u;
        // 0x19c2ac: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2a8) {
            ctx->pc = 0x19C2C4u;
            goto label_19c2c4;
        }
    }
    ctx->pc = 0x19C2B0u;
label_19c2b0:
    // 0x19c2b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c2b4: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c2b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c2bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2c0: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19c2c4:
    // 0x19c2c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c2c8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c2cc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c2d0: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19c2d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c2d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c2dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19c2e0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19c2e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c2e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c2ec: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19c2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19c2f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C2F0u;
    {
        const bool branch_taken_0x19c2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2F0u;
        // 0x19c2f4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2f0) {
            ctx->pc = 0x19C2FCu;
            goto label_19c2fc;
        }
    }
    ctx->pc = 0x19C2F8u;
    // 0x19c2f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19c2fc:
    // 0x19c2fc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19c300:
    // 0x19c300: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x19c300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c304: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x19c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19c308: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19c308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_19c30c:
    // 0x19c30c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19c30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19c310: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19c314: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x19c314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x19c318: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19c318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c31c: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x19c31cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x19c320: 0x4be1093f  vitof15.xyzw $vf1, $vf1
    ctx->pc = 0x19c320u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19c324: 0x4bc2086a  vmul.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19c324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19c328: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x19c328u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19c32c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x19c32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c330: 0x3e00008  jr          $ra
    ctx->pc = 0x19C330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C330u;
        // 0x19c334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C338u;
}
