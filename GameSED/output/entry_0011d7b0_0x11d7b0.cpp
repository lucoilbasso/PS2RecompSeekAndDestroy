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

// Function: entry_0011d7b0
// Address: 0x11d7b0 - 0x11d828
void entry_0011d7b0_0x11d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d7b0_0x11d7b0");
#endif

    switch (ctx->pc) {
        case 0x11d7b8u: goto label_11d7b8;
        case 0x11d7ccu: goto label_11d7cc;
        case 0x11d7d8u: goto label_11d7d8;
        case 0x11d7e4u: goto label_11d7e4;
        case 0x11d7f0u: goto label_11d7f0;
        case 0x11d7fcu: goto label_11d7fc;
        case 0x11d80cu: goto label_11d80c;
        case 0x11d820u: goto label_11d820;
        default: break;
    }

    ctx->pc = 0x11d7b0u;

label_11d7b0:
    // 0x11d7b0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x11D7B0u;
    SET_GPR_U32(ctx, 31, 0x11D7B8u);
    ctx->pc = 0x11D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7B0u;
    // 0x11d7b4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11D7B0u, 0x11D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7B8u;
label_11d7b8:
    // 0x11d7b8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x11d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x11d7bc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x11d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11d7c0: 0x8c84c030  lw          $a0, -0x3FD0($a0)
    ctx->pc = 0x11d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950960)));
    // 0x11d7c4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x11D7C4u;
    SET_GPR_U32(ctx, 31, 0x11D7CCu);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11D7C4u, 0x11D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7CCu;
label_11d7cc:
    // 0x11d7cc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d7d0: 0xc05eb46  jal         func_17AD18
    ctx->pc = 0x11D7D0u;
    SET_GPR_U32(ctx, 31, 0x11D7D8u);
    ctx->pc = 0x11D7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7D0u;
    // 0x11d7d4: 0x8c640034  lw          $a0, 0x34($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD18u, 0x11D7D0u, 0x11D7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7D8u;
label_11d7d8:
    // 0x11d7d8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d7dc: 0xc05f018  jal         func_17C060
    ctx->pc = 0x11D7DCu;
    SET_GPR_U32(ctx, 31, 0x11D7E4u);
    ctx->pc = 0x11D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7DCu;
    // 0x11d7e0: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C060u, 0x11D7DCu, 0x11D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7E4u;
label_11d7e4:
    // 0x11d7e4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d7e8: 0xc05ec84  jal         func_17B210
    ctx->pc = 0x11D7E8u;
    SET_GPR_U32(ctx, 31, 0x11D7F0u);
    ctx->pc = 0x11D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7E8u;
    // 0x11d7ec: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B210u, 0x11D7E8u, 0x11D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7F0u;
label_11d7f0:
    // 0x11d7f0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d7f4: 0xc05eb68  jal         func_17ADA0
    ctx->pc = 0x11D7F4u;
    SET_GPR_U32(ctx, 31, 0x11D7FCu);
    ctx->pc = 0x11D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D7F4u;
    // 0x11d7f8: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ADA0u, 0x11D7F4u, 0x11D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D7FCu;
label_11d7fc:
    // 0x11d7fc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d804: 0xc05ee06  jal         func_17B818
    ctx->pc = 0x11D804u;
    SET_GPR_U32(ctx, 31, 0x11D80Cu);
    ctx->pc = 0x11D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D804u;
    // 0x11d808: 0x8c64003c  lw          $a0, 0x3C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B818u, 0x11D804u, 0x11D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D80Cu;
label_11d80c:
    // 0x11d80c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x11d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x11d810: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x11d810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11d814: 0x8c84c030  lw          $a0, -0x3FD0($a0)
    ctx->pc = 0x11d814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950960)));
    // 0x11d818: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x11D818u;
    SET_GPR_U32(ctx, 31, 0x11D820u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x11D818u, 0x11D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D820u;
label_11d820:
    // 0x11d820: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11D820u;
    {
        const bool branch_taken_0x11d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d820) {
            ctx->pc = 0x11D7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d7b0;
        }
    }
    ctx->pc = 0x11D828u;
}
