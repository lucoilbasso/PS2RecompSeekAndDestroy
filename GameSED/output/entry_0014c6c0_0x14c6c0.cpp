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

// Function: entry_0014c6c0
// Address: 0x14c6c0 - 0x14c750
void entry_0014c6c0_0x14c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c6c0_0x14c6c0");
#endif

    switch (ctx->pc) {
        case 0x14c6d8u: goto label_14c6d8;
        case 0x14c710u: goto label_14c710;
        case 0x14c720u: goto label_14c720;
        default: break;
    }

    ctx->pc = 0x14c6c0u;

label_14c6c0:
    // 0x14c6c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14c6c4:
    // 0x14c6c4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x14c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_14c6c8:
    // 0x14c6c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c6cc:
    // 0x14c6cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c6d0:
    // 0x14c6d0: 0x60f809  jalr        $v1
label_14c6d4:
    if (ctx->pc == 0x14C6D4u) {
        ctx->pc = 0x14C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6D0u;
        // 0x14c6d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6D8u;
        goto label_14c6d8;
    }
    ctx->pc = 0x14C6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C6D8u);
        ctx->pc = 0x14C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6D0u;
        // 0x14c6d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C6D0u, 0x14C6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C6D8u;
label_14c6d8:
    // 0x14c6d8: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_14c6dc:
    // 0x14c6dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_14c6e0:
    // 0x14c6e0: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x14c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14c6e4:
    // 0x14c6e4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x14c6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_14c6e8:
    // 0x14c6e8: 0x34420a00  ori         $v0, $v0, 0xA00
    ctx->pc = 0x14c6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2560);
label_14c6ec:
    // 0x14c6ec: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x14c6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_14c6f0:
    // 0x14c6f0: 0xae220180  sw          $v0, 0x180($s1)
    ctx->pc = 0x14c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 2));
label_14c6f4:
    // 0x14c6f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14c6f8:
    // 0x14c6f8: 0xac713630  sw          $s1, 0x3630($v1)
    ctx->pc = 0x14c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13872), GPR_U32(ctx, 17));
label_14c6fc:
    // 0x14c6fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14c700:
    // 0x14c700: 0x10470015  beq         $v0, $a3, . + 4 + (0x15 << 2)
label_14c704:
    if (ctx->pc == 0x14C704u) {
        ctx->pc = 0x14C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C700u;
        // 0x14c704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C708u;
        goto label_14c708;
    }
    ctx->pc = 0x14C700u;
    {
        const bool branch_taken_0x14c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x14C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C700u;
        // 0x14c704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c700) {
            ctx->pc = 0x14C758u;
            return;
        }
    }
    ctx->pc = 0x14C708u;
label_14c708:
    // 0x14c708: 0xc06a26e  jal         func_1A89B8
label_14c70c:
    if (ctx->pc == 0x14C70Cu) {
        ctx->pc = 0x14C710u;
        goto label_14c710;
    }
    ctx->pc = 0x14C708u;
    SET_GPR_U32(ctx, 31, 0x14C710u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14C708u, 0x14C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C710u;
label_14c710:
    // 0x14c710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14c714:
    // 0x14c714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c718:
    // 0x14c718: 0xc0410e4  jal         func_104390
label_14c71c:
    if (ctx->pc == 0x14C71Cu) {
        ctx->pc = 0x14C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C718u;
        // 0x14c71c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C720u;
        goto label_14c720;
    }
    ctx->pc = 0x14C718u;
    SET_GPR_U32(ctx, 31, 0x14C720u);
    ctx->pc = 0x14C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C718u;
    // 0x14c71c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x14C718u, 0x14C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C720u;
label_14c720:
    // 0x14c720: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14c720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_14c724:
    // 0x14c724: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x14c724u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14c728:
    // 0x14c728: 0x24030126  addiu       $v1, $zero, 0x126
    ctx->pc = 0x14c728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_14c72c:
    // 0x14c72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c730:
    // 0x14c730: 0x24a56c18  addiu       $a1, $a1, 0x6C18
    ctx->pc = 0x14c730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27672));
label_14c734:
    // 0x14c734: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c738:
    // 0x14c738: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14c738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_14c73c:
    // 0x14c73c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_14c740:
    // 0x14c740: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_14c744:
    if (ctx->pc == 0x14C744u) {
        ctx->pc = 0x14C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C740u;
        // 0x14c744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C748u;
        goto label_14c748;
    }
    ctx->pc = 0x14C740u;
    {
        const bool branch_taken_0x14c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C740u;
        // 0x14c744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c740) {
            ctx->pc = 0x14C750u;
            return;
        }
    }
    ctx->pc = 0x14C748u;
label_14c748:
    // 0x14c748: 0xc0415ec  jal         func_1057B0
label_14c74c:
    if (ctx->pc == 0x14C74Cu) {
        ctx->pc = 0x14C750u;
        goto label_fallthrough_0x14c748;
    }
    ctx->pc = 0x14C748u;
    SET_GPR_U32(ctx, 31, 0x14C750u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x14C748u, 0x14C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x14c748:
    ctx->pc = 0x14C750u;
}
