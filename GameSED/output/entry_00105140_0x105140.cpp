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

// Function: entry_00105140
// Address: 0x105140 - 0x1051b8
void entry_00105140_0x105140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105140_0x105140");
#endif

    switch (ctx->pc) {
        case 0x105164u: goto label_105164;
        case 0x105178u: goto label_105178;
        case 0x105188u: goto label_105188;
        case 0x105194u: goto label_105194;
        case 0x1051acu: goto label_1051ac;
        default: break;
    }

    ctx->pc = 0x105140u;

label_105140:
    // 0x105140: 0x8f8288a8  lw          $v0, -0x7758($gp)
    ctx->pc = 0x105140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    // 0x105144: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x105144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x105148: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x105148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10514c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105150: 0xc5202a  slt         $a0, $a2, $a1
    ctx->pc = 0x105150u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x105154: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105154u;
    {
        const bool branch_taken_0x105154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105154u;
        // 0x105158: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105154) {
            ctx->pc = 0x105140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105140;
        }
    }
    ctx->pc = 0x10515Cu;
    // 0x10515c: 0xc0413e2  jal         func_104F88
    ctx->pc = 0x10515Cu;
    SET_GPR_U32(ctx, 31, 0x105164u);
    ctx->pc = 0x104F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F88u, 0x10515Cu, 0x105164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105164u;
label_105164:
    // 0x105164: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x105164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x105168: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10516c: 0x24c6d120  addiu       $a2, $a2, -0x2EE0
    ctx->pc = 0x10516cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955296));
    // 0x105170: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x105170u;
    SET_GPR_U32(ctx, 31, 0x105178u);
    ctx->pc = 0x105174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105170u;
    // 0x105174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x105170u, 0x105178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105178u;
label_105178:
    // 0x105178: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x105178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10517c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10517cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105180: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x105180u;
    SET_GPR_U32(ctx, 31, 0x105188u);
    ctx->pc = 0x105184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105180u;
    // 0x105184: 0x248438d0  addiu       $a0, $a0, 0x38D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x105180u, 0x105188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105188u;
label_105188:
    // 0x105188: 0x24050602  addiu       $a1, $zero, 0x602
    ctx->pc = 0x105188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    // 0x10518c: 0xc06ca22  jal         func_1B2888
    ctx->pc = 0x10518Cu;
    SET_GPR_U32(ctx, 31, 0x105194u);
    ctx->pc = 0x105190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10518Cu;
    // 0x105190: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2888u, 0x10518Cu, 0x105194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105194u;
label_105194:
    // 0x105194: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x105194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105198: 0x6410007  bgez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x105198u;
    {
        const bool branch_taken_0x105198 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105198u;
        // 0x10519c: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105198) {
            ctx->pc = 0x1051B8u;
            return;
        }
    }
    ctx->pc = 0x1051A0u;
    // 0x1051a0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1051a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1051a4: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1051A4u;
    SET_GPR_U32(ctx, 31, 0x1051ACu);
    ctx->pc = 0x1051A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051A4u;
    // 0x1051a8: 0x2484d128  addiu       $a0, $a0, -0x2ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1051A4u, 0x1051ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051ACu;
label_1051ac:
    // 0x1051ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1051ACu;
    {
        const bool branch_taken_0x1051ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051ACu;
        // 0x1051b0: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051ac) {
            ctx->pc = 0x1052A0u;
            return;
        }
    }
    ctx->pc = 0x1051B4u;
    // 0x1051b4: 0x0  nop
    ctx->pc = 0x1051b4u;
    // NOP
    ctx->pc = 0x1051b8u;
}
