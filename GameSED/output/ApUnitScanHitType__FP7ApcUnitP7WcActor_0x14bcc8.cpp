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

// Function: ApUnitScanHitType__FP7ApcUnitP7WcActor
// Address: 0x14bcc8 - 0x14be84
void ApUnitScanHitType__FP7ApcUnitP7WcActor_0x14bcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitScanHitType__FP7ApcUnitP7WcActor_0x14bcc8");
#endif

    switch (ctx->pc) {
        case 0x14bd38u: goto label_14bd38;
        case 0x14bd44u: goto label_14bd44;
        case 0x14bd5cu: goto label_14bd5c;
        case 0x14bdf8u: goto label_14bdf8;
        default: break;
    }

    ctx->pc = 0x14bcc8u;

    // 0x14bcc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14bccc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14bcccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14bcd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14bcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcd8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14bcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14bcdc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14bce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14bce8: 0xa4e20238  sh          $v0, 0x238($a3)
    ctx->pc = 0x14bce8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 568), (uint16_t)GPR_U32(ctx, 2));
    // 0x14bcec: 0xace0023c  sw          $zero, 0x23C($a3)
    ctx->pc = 0x14bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 0));
    // 0x14bcf0: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
    ctx->pc = 0x14BCF0u;
    {
        const bool branch_taken_0x14bcf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCF0u;
        // 0x14bcf4: 0xa4e6023a  sh          $a2, 0x23A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bcf0) {
            ctx->pc = 0x14BE70u;
            goto label_14be70;
        }
    }
    ctx->pc = 0x14BCF8u;
    // 0x14bcf8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14bcfc: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BCFCu;
    {
        const bool branch_taken_0x14bcfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bcfc) {
            ctx->pc = 0x14BD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BCFCu;
            // 0x14bd00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BD10u;
            goto label_14bd10;
        }
    }
    ctx->pc = 0x14BD04u;
    // 0x14bd04: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x14BD04u;
    {
        const bool branch_taken_0x14bd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD04u;
        // 0x14bd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd04) {
            ctx->pc = 0x14BE6Cu;
            goto label_14be6c;
        }
    }
    ctx->pc = 0x14BD0Cu;
    // 0x14bd0c: 0x0  nop
    ctx->pc = 0x14bd0cu;
    // NOP
label_14bd10:
    // 0x14bd10: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BD10u;
    {
        const bool branch_taken_0x14bd10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bd10) {
            ctx->pc = 0x14BD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BD10u;
            // 0x14bd14: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BD20u;
            goto label_14bd20;
        }
    }
    ctx->pc = 0x14BD18u;
    // 0x14bd18: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x14BD18u;
    {
        const bool branch_taken_0x14bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD18u;
        // 0x14bd1c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd18) {
            ctx->pc = 0x14BE6Cu;
            goto label_14be6c;
        }
    }
    ctx->pc = 0x14BD20u;
label_14bd20:
    // 0x14bd20: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x14bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14bd24: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x14bd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14bd28: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14BD28u;
    {
        const bool branch_taken_0x14bd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14bd28) {
            ctx->pc = 0x14BD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BD28u;
            // 0x14bd2c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BD68u;
            goto label_14bd68;
        }
    }
    ctx->pc = 0x14BD30u;
    // 0x14bd30: 0xc06852e  jal         func_1A14B8
    ctx->pc = 0x14BD30u;
    SET_GPR_U32(ctx, 31, 0x14BD38u);
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x14BD30u, 0x14BD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD38u;
label_14bd38:
    // 0x14bd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd3c: 0xc06852e  jal         func_1A14B8
    ctx->pc = 0x14BD3Cu;
    SET_GPR_U32(ctx, 31, 0x14BD44u);
    ctx->pc = 0x14BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD3Cu;
    // 0x14bd40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x14BD3Cu, 0x14BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD44u;
label_14bd44:
    // 0x14bd44: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x14bd48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14bd48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd4c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x14bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x14bd50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bd54: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x14BD54u;
    SET_GPR_U32(ctx, 31, 0x14BD5Cu);
    ctx->pc = 0x14BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD54u;
    // 0x14bd58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x14BD54u, 0x14BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD5Cu;
label_14bd5c:
    // 0x14bd5c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x14BD5Cu;
    {
        const bool branch_taken_0x14bd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD5Cu;
        // 0x14bd60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd5c) {
            ctx->pc = 0x14BE74u;
            goto label_14be74;
        }
    }
    ctx->pc = 0x14BD64u;
    // 0x14bd64: 0x0  nop
    ctx->pc = 0x14bd64u;
    // NOP
label_14bd68:
    // 0x14bd68: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x14bd6c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BD6Cu;
    {
        const bool branch_taken_0x14bd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD6Cu;
        // 0x14bd70: 0x30a30fff  andi        $v1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd6c) {
            ctx->pc = 0x14BD90u;
            goto label_14bd90;
        }
    }
    ctx->pc = 0x14BD74u;
    // 0x14bd74: 0x96240286  lhu         $a0, 0x286($s1)
    ctx->pc = 0x14bd74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 646)));
    // 0x14bd78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14bd7c: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x14bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x14bd80: 0xa4e30238  sh          $v1, 0x238($a3)
    ctx->pc = 0x14bd80u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 568), (uint16_t)GPR_U32(ctx, 3));
    // 0x14bd84: 0xa4e4023a  sh          $a0, 0x23A($a3)
    ctx->pc = 0x14bd84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 4));
    // 0x14bd88: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14BD88u;
    {
        const bool branch_taken_0x14bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD88u;
        // 0x14bd8c: 0xace2023c  sw          $v0, 0x23C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd88) {
            ctx->pc = 0x14BE70u;
            goto label_14be70;
        }
    }
    ctx->pc = 0x14BD90u;
label_14bd90:
    // 0x14bd90: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x14bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14bd94: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14BD94u;
    {
        const bool branch_taken_0x14bd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bd94) {
            ctx->pc = 0x14BD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BD94u;
            // 0x14bd98: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BE50u;
            goto label_14be50;
        }
    }
    ctx->pc = 0x14BD9Cu;
    // 0x14bd9c: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x14bda0: 0x24041118  addiu       $a0, $zero, 0x1118
    ctx->pc = 0x14bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x14bda4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14bda8: 0xace2023c  sw          $v0, 0x23C($a3)
    ctx->pc = 0x14bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 2));
    // 0x14bdac: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x14bdacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14bdb0: 0x1464002d  bne         $v1, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14BDB0u;
    {
        const bool branch_taken_0x14bdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDB0u;
        // 0x14bdb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdb0) {
            ctx->pc = 0x14BE68u;
            goto label_14be68;
        }
    }
    ctx->pc = 0x14BDB8u;
    // 0x14bdb8: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x14bdbc: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14bdc0: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14bdc4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x14BDC4u;
    {
        const bool branch_taken_0x14bdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bdc4) {
            ctx->pc = 0x14BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BDC4u;
            // 0x14bdc8: 0x8ca200d4  lw          $v0, 0xD4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BE28u;
            goto label_14be28;
        }
    }
    ctx->pc = 0x14BDCCu;
    // 0x14bdcc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x14bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x14bdd0: 0xa4e60238  sh          $a2, 0x238($a3)
    ctx->pc = 0x14bdd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 568), (uint16_t)GPR_U32(ctx, 6));
    // 0x14bdd4: 0x2445fcb0  addiu       $a1, $v0, -0x350
    ctx->pc = 0x14bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x14bdd8: 0xa4e0023a  sh          $zero, 0x23A($a3)
    ctx->pc = 0x14bdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 0));
    // 0x14bddc: 0x8ca20480  lw          $v0, 0x480($a1)
    ctx->pc = 0x14bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x240130u));
    // 0x14bde0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14bde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bde4: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14BDE4u;
    {
        const bool branch_taken_0x14bde4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDE4u;
        // 0x14bde8: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bde4) {
            ctx->pc = 0x14BE70u;
            goto label_14be70;
        }
    }
    ctx->pc = 0x14BDECu;
    // 0x14bdec: 0x24633630  addiu       $v1, $v1, 0x3630
    ctx->pc = 0x14bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13872));
    // 0x14bdf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14bdf4: 0x0  nop
    ctx->pc = 0x14bdf4u;
    // NOP
label_14bdf8:
    // 0x14bdf8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14BDF8u;
    {
        const bool branch_taken_0x14bdf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x14BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDF8u;
        // 0x14bdfc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdf8) {
            ctx->pc = 0x14BE04u;
            goto label_14be04;
        }
    }
    ctx->pc = 0x14BE00u;
    // 0x14be00: 0xace4023c  sw          $a0, 0x23C($a3)
    ctx->pc = 0x14be00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 4));
label_14be04:
    // 0x14be04: 0x8ca20480  lw          $v0, 0x480($a1)
    ctx->pc = 0x14be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1152)));
    // 0x14be08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14be0c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x14be0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14be10: 0x0  nop
    ctx->pc = 0x14be10u;
    // NOP
    // 0x14be14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14BE14u;
    {
        const bool branch_taken_0x14be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14be14) {
            ctx->pc = 0x14BE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BE14u;
            // 0x14be18: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bdf8;
        }
    }
    ctx->pc = 0x14BE1Cu;
    // 0x14be1c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14BE1Cu;
    {
        const bool branch_taken_0x14be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE1Cu;
        // 0x14be20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be1c) {
            ctx->pc = 0x14BE74u;
            goto label_14be74;
        }
    }
    ctx->pc = 0x14BE24u;
    // 0x14be24: 0x0  nop
    ctx->pc = 0x14be24u;
    // NOP
label_14be28:
    // 0x14be28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14be2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14be2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14be30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BE30u;
    {
        const bool branch_taken_0x14be30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14be30) {
            ctx->pc = 0x14BE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BE30u;
            // 0x14be34: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BE48u;
            goto label_14be48;
        }
    }
    ctx->pc = 0x14BE38u;
    // 0x14be38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14be3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14BE3Cu;
    {
        const bool branch_taken_0x14be3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE3Cu;
        // 0x14be40: 0xa4e3023a  sh          $v1, 0x23A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be3c) {
            ctx->pc = 0x14BE6Cu;
            goto label_14be6c;
        }
    }
    ctx->pc = 0x14BE44u;
    // 0x14be44: 0x0  nop
    ctx->pc = 0x14be44u;
    // NOP
label_14be48:
    // 0x14be48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BE48u;
    {
        const bool branch_taken_0x14be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE48u;
        // 0x14be4c: 0xa4e3023a  sh          $v1, 0x23A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 570), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be48) {
            ctx->pc = 0x14BE6Cu;
            goto label_14be6c;
        }
    }
    ctx->pc = 0x14BE50u;
label_14be50:
    // 0x14be50: 0x24050946  addiu       $a1, $zero, 0x946
    ctx->pc = 0x14be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x14be54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14be58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14be5c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14be5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14be60: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BE60u;
    {
        const bool branch_taken_0x14be60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE60u;
        // 0x14be64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be60) {
            ctx->pc = 0x14BE74u;
            goto label_14be74;
        }
    }
    ctx->pc = 0x14BE68u;
label_14be68:
    // 0x14be68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14be6c:
    // 0x14be6c: 0xa4e20238  sh          $v0, 0x238($a3)
    ctx->pc = 0x14be6cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 568), (uint16_t)GPR_U32(ctx, 2));
label_14be70:
    // 0x14be70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14be70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14be74:
    // 0x14be74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14be74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14be78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14be78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14be7c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE7Cu;
        // 0x14be80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BE84u;
}
