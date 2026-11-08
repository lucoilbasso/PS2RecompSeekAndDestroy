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

// Function: entry_0010b4cc
// Address: 0x10b4cc - 0x10b530
void entry_0010b4cc_0x10b4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b4cc_0x10b4cc");
#endif

    switch (ctx->pc) {
        case 0x10b4d4u: goto label_10b4d4;
        case 0x10b4fcu: goto label_10b4fc;
        case 0x10b508u: goto label_10b508;
        default: break;
    }

    ctx->pc = 0x10b4ccu;

    // 0x10b4cc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B4CCu;
    SET_GPR_U32(ctx, 31, 0x10B4D4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B4CCu, 0x10B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4D4u;
label_10b4d4:
    // 0x10b4d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b4d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4dc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10b4e0: 0x2453f590  addiu       $s3, $v0, -0xA70
    ctx->pc = 0x10b4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964624));
    // 0x10b4e4: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x10b4e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10b4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10B4ECu;
    {
        const bool branch_taken_0x10b4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4ECu;
        // 0x10b4f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4ec) {
            ctx->pc = 0x10B530u;
            return;
        }
    }
    ctx->pc = 0x10B4F4u;
    // 0x10b4f4: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x10B4F4u;
    SET_GPR_U32(ctx, 31, 0x10B4FCu);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x10B4F4u, 0x10B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4FCu;
label_10b4fc:
    // 0x10b4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b500: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10B500u;
    SET_GPR_U32(ctx, 31, 0x10B508u);
    ctx->pc = 0x10B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B500u;
    // 0x10b504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10B500u, 0x10B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B508u;
label_10b508:
    // 0x10b508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b50c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b518: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b51c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b520: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b528: 0x8063b9a  j           func_18EE68
    ctx->pc = 0x10B528u;
    ctx->pc = 0x10B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B528u;
    // 0x10b52c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EE68u;
    WTxPanelSetStrVar__FP9WcTxPaneliPc_0x18ee68(rdram, ctx, runtime); return;
    ctx->pc = 0x10B530u;
}
