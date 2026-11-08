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

// Function: entry_0018c648
// Address: 0x18c648 - 0x18c670
void entry_0018c648_0x18c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c648_0x18c648");
#endif

    switch (ctx->pc) {
        case 0x18c660u: goto label_18c660;
        default: break;
    }

    ctx->pc = 0x18c648u;

    // 0x18c648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18c64c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C64Cu;
    {
        const bool branch_taken_0x18c64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C64Cu;
        // 0x18c650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c64c) {
            ctx->pc = 0x18C670u;
            return;
        }
    }
    ctx->pc = 0x18C654u;
    // 0x18c654: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18c654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x18c658: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x18C658u;
    SET_GPR_U32(ctx, 31, 0x18C660u);
    ctx->pc = 0x18C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C658u;
    // 0x18c65c: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x18C658u, 0x18C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C660u;
label_18c660:
    // 0x18c660: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18c664: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18c668: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18c668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18c66c: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x18c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x18c670u;
}
