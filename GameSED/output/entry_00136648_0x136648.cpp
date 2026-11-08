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

// Function: entry_00136648
// Address: 0x136648 - 0x1366ac
void entry_00136648_0x136648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136648_0x136648");
#endif

    switch (ctx->pc) {
        case 0x136654u: goto label_136654;
        case 0x13666cu: goto label_13666c;
        case 0x136674u: goto label_136674;
        case 0x136694u: goto label_136694;
        case 0x1366a8u: goto label_1366a8;
        default: break;
    }

    ctx->pc = 0x136648u;

    // 0x136648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13664c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13664Cu;
    SET_GPR_U32(ctx, 31, 0x136654u);
    ctx->pc = 0x136650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13664Cu;
    // 0x136650: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13664Cu, 0x136654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136654u;
label_136654:
    // 0x136654: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x136654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136658: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x136658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13665c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x13665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x136660: 0x8c710064  lw          $s1, 0x64($v1)
    ctx->pc = 0x136660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x136664: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x136664u;
    SET_GPR_U32(ctx, 31, 0x13666Cu);
    ctx->pc = 0x136668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136664u;
    // 0x136668: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x136664u, 0x13666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13666Cu;
label_13666c:
    // 0x13666c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13666Cu;
    SET_GPR_U32(ctx, 31, 0x136674u);
    ctx->pc = 0x136670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13666Cu;
    // 0x136670: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13666Cu, 0x136674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136674u;
label_136674:
    // 0x136674: 0x96260022  lhu         $a2, 0x22($s1)
    ctx->pc = 0x136674u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x136678: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x136678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x13667c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13667Cu;
    {
        const bool branch_taken_0x13667c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13667c) {
            ctx->pc = 0x136680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13667Cu;
            // 0x136680: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1366ACu;
            return;
        }
    }
    ctx->pc = 0x136684u;
    // 0x136684: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x136684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x136688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13668c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x13668Cu;
    SET_GPR_U32(ctx, 31, 0x136694u);
    ctx->pc = 0x136690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13668Cu;
    // 0x136690: 0x24846750  addiu       $a0, $a0, 0x6750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x13668Cu, 0x136694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136694u;
label_136694:
    // 0x136694: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x136694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x136698: 0x24a56768  addiu       $a1, $a1, 0x6768
    ctx->pc = 0x136698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26472));
    // 0x13669c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1366A0u;
    SET_GPR_U32(ctx, 31, 0x1366A8u);
    ctx->pc = 0x1366A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366A0u;
    // 0x1366a4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1366A0u, 0x1366A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366A8u;
label_1366a8:
    // 0x1366a8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1366a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1366acu;
}
