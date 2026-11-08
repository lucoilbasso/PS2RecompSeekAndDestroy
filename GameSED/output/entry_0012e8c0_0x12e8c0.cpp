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

// Function: entry_0012e8c0
// Address: 0x12e8c0 - 0x12e920
void entry_0012e8c0_0x12e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e8c0_0x12e8c0");
#endif

    switch (ctx->pc) {
        case 0x12e8c8u: goto label_12e8c8;
        case 0x12e8d4u: goto label_12e8d4;
        case 0x12e8fcu: goto label_12e8fc;
        case 0x12e918u: goto label_12e918;
        default: break;
    }

    ctx->pc = 0x12e8c0u;

    // 0x12e8c0: 0xc04b998  jal         func_12E660
    ctx->pc = 0x12E8C0u;
    SET_GPR_U32(ctx, 31, 0x12E8C8u);
    ctx->pc = 0x12E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8C0u;
    // 0x12e8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E660u, 0x12E8C0u, 0x12E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8C8u;
label_12e8c8:
    // 0x12e8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8cc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x12E8CCu;
    SET_GPR_U32(ctx, 31, 0x12E8D4u);
    ctx->pc = 0x12E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8CCu;
    // 0x12e8d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x12E8CCu, 0x12E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8D4u;
label_12e8d4:
    // 0x12e8d4: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x12e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x12e8d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12E8D8u;
    {
        const bool branch_taken_0x12e8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8D8u;
        // 0x12e8dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8d8) {
            ctx->pc = 0x12E928u;
            return;
        }
    }
    ctx->pc = 0x12E8E0u;
    // 0x12e8e0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x12e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12e8e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e8e8: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x12e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x12e8ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x12e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12e8f0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x12e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x12e8f4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x12E8F4u;
    SET_GPR_U32(ctx, 31, 0x12E8FCu);
    ctx->pc = 0x12E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8F4u;
    // 0x12e8f8: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x12E8F4u, 0x12E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8FCu;
label_12e8fc:
    // 0x12e8fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E8FCu;
    {
        const bool branch_taken_0x12e8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8FCu;
        // 0x12e900: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8fc) {
            ctx->pc = 0x12E920u;
            return;
        }
    }
    ctx->pc = 0x12E904u;
    // 0x12e904: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e90c: 0x24a55fd8  addiu       $a1, $a1, 0x5FD8
    ctx->pc = 0x12e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24536));
    // 0x12e910: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E910u;
    SET_GPR_U32(ctx, 31, 0x12E918u);
    ctx->pc = 0x12E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E910u;
    // 0x12e914: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E910u, 0x12E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E918u;
label_12e918:
    // 0x12e918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E918u;
    {
        const bool branch_taken_0x12e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E918u;
        // 0x12e91c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e918) {
            ctx->pc = 0x12E928u;
            return;
        }
    }
    ctx->pc = 0x12E920u;
}
