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

// Function: entry_001a1688
// Address: 0x1a1688 - 0x1a16b4
void entry_001a1688_0x1a1688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1688_0x1a1688");
#endif

    switch (ctx->pc) {
        case 0x1a1698u: goto label_1a1698;
        default: break;
    }

    ctx->pc = 0x1a1688u;

    // 0x1a1688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a168c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1690: 0xc0683f0  jal         func_1A0FC0
    ctx->pc = 0x1A1690u;
    SET_GPR_U32(ctx, 31, 0x1A1698u);
    ctx->pc = 0x1A1694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1690u;
    // 0x1a1694: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FC0u, 0x1A1690u, 0x1A1698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1698u;
label_1a1698:
    // 0x1a1698: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a169c: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x1a169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
    // 0x1a16a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a16a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A16A4u;
    {
        const bool branch_taken_0x1a16a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16A4u;
        // 0x1a16a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16a4) {
            ctx->pc = 0x1A16B4u;
            return;
        }
    }
    ctx->pc = 0x1A16ACu;
    // 0x1a16ac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A16ACu;
    SET_GPR_U32(ctx, 31, 0x1A16B4u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A16ACu, 0x1A16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16B4u;
}
