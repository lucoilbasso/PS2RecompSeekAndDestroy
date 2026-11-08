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

// Function: entry_00102008
// Address: 0x102008 - 0x102080
void entry_00102008_0x102008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102008_0x102008");
#endif

    switch (ctx->pc) {
        case 0x102018u: goto label_102018;
        case 0x102024u: goto label_102024;
        case 0x102060u: goto label_102060;
        case 0x102078u: goto label_102078;
        default: break;
    }

    ctx->pc = 0x102008u;

    // 0x102008: 0x1620002f  bnez        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x102008u;
    {
        const bool branch_taken_0x102008 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102008u;
        // 0x10200c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102008) {
            ctx->pc = 0x1020C8u;
            return;
        }
    }
    ctx->pc = 0x102010u;
    // 0x102010: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x102010u;
    SET_GPR_U32(ctx, 31, 0x102018u);
    ctx->pc = 0x102014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102010u;
    // 0x102014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102010u, 0x102018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102018u;
label_102018:
    // 0x102018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10201c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10201Cu;
    SET_GPR_U32(ctx, 31, 0x102024u);
    ctx->pc = 0x102020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10201Cu;
    // 0x102020: 0x28203  sra         $s0, $v0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10201Cu, 0x102024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102024u;
label_102024:
    // 0x102024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10202c: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10202Cu;
    {
        const bool branch_taken_0x10202c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x102030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10202Cu;
        // 0x102030: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10202c) {
            ctx->pc = 0x102080u;
            return;
        }
    }
    ctx->pc = 0x102034u;
    // 0x102034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x102034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102038: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x102038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10203c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10203cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102040: 0x24050305  addiu       $a1, $zero, 0x305
    ctx->pc = 0x102040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x102044: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x102044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x102048: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x102048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x10204c: 0x10650013  beq         $v1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x10204Cu;
    {
        const bool branch_taken_0x10204c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x102050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10204Cu;
        // 0x102050: 0x8c920170  lw          $s2, 0x170($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10204c) {
            ctx->pc = 0x10209Cu;
            return;
        }
    }
    ctx->pc = 0x102054u;
    // 0x102054: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x102054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x102058: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x102058u;
    SET_GPR_U32(ctx, 31, 0x102060u);
    ctx->pc = 0x10205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102058u;
    // 0x10205c: 0x24841a58  addiu       $a0, $a0, 0x1A58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x102058u, 0x102060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102060u;
label_102060:
    // 0x102060: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102064: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x102064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x102068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10206c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10206cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x102070: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102070u;
    SET_GPR_U32(ctx, 31, 0x102078u);
    ctx->pc = 0x102074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102070u;
    // 0x102074: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102070u, 0x102078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102078u;
label_102078:
    // 0x102078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x102078u;
    {
        const bool branch_taken_0x102078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102078) {
            ctx->pc = 0x10209Cu;
            return;
        }
    }
    ctx->pc = 0x102080u;
}
