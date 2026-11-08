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

// Function: entry_001992f4
// Address: 0x1992f4 - 0x199350
void entry_001992f4_0x1992f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001992f4_0x1992f4");
#endif

    switch (ctx->pc) {
        case 0x1992fcu: goto label_1992fc;
        case 0x199304u: goto label_199304;
        case 0x19930cu: goto label_19930c;
        case 0x199314u: goto label_199314;
        case 0x19931cu: goto label_19931c;
        case 0x199328u: goto label_199328;
        case 0x199330u: goto label_199330;
        case 0x199338u: goto label_199338;
        case 0x199344u: goto label_199344;
        default: break;
    }

    ctx->pc = 0x1992f4u;

    // 0x1992f4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1992F4u;
    SET_GPR_U32(ctx, 31, 0x1992FCu);
    ctx->pc = 0x1992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992F4u;
    // 0x1992f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1992F4u, 0x1992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992FCu;
label_1992fc:
    // 0x1992fc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1992FCu;
    SET_GPR_U32(ctx, 31, 0x199304u);
    ctx->pc = 0x199300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992FCu;
    // 0x199300: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1992FCu, 0x199304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199304u;
label_199304:
    // 0x199304: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x199304u;
    SET_GPR_U32(ctx, 31, 0x19930Cu);
    ctx->pc = 0x199308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199304u;
    // 0x199308: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x199304u, 0x19930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19930Cu;
label_19930c:
    // 0x19930c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19930Cu;
    SET_GPR_U32(ctx, 31, 0x199314u);
    ctx->pc = 0x199310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19930Cu;
    // 0x199310: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19930Cu, 0x199314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199314u;
label_199314:
    // 0x199314: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x199314u;
    SET_GPR_U32(ctx, 31, 0x19931Cu);
    ctx->pc = 0x199318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199314u;
    // 0x199318: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x199314u, 0x19931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19931Cu;
label_19931c:
    // 0x19931c: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x19931cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x199320: 0xc05dd18  jal         func_177460
    ctx->pc = 0x199320u;
    SET_GPR_U32(ctx, 31, 0x199328u);
    ctx->pc = 0x199324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199320u;
    // 0x199324: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x199320u, 0x199328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199328u;
label_199328:
    // 0x199328: 0xc05db9a  jal         func_176E68
    ctx->pc = 0x199328u;
    SET_GPR_U32(ctx, 31, 0x199330u);
    ctx->pc = 0x19932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199328u;
    // 0x19932c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E68u, 0x199328u, 0x199330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199330u;
label_199330:
    // 0x199330: 0xc05dcd8  jal         func_177360
    ctx->pc = 0x199330u;
    SET_GPR_U32(ctx, 31, 0x199338u);
    ctx->pc = 0x199334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199330u;
    // 0x199334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177360u, 0x199330u, 0x199338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199338u;
label_199338:
    // 0x199338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19933c: 0xc05db08  jal         func_176C20
    ctx->pc = 0x19933Cu;
    SET_GPR_U32(ctx, 31, 0x199344u);
    ctx->pc = 0x199340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19933Cu;
    // 0x199340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C20u, 0x19933Cu, 0x199344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199344u;
label_199344:
    // 0x199344: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x199344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x199348: 0x5440ffa1  bnel        $v0, $zero, . + 4 + (-0x5F << 2)
    ctx->pc = 0x199348u;
    {
        const bool branch_taken_0x199348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199348) {
            ctx->pc = 0x19934Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199348u;
            // 0x19934c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1991D0u;
            return;
        }
    }
    ctx->pc = 0x199350u;
}
