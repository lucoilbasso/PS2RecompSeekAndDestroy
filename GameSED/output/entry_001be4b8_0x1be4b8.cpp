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

// Function: entry_001be4b8
// Address: 0x1be4b8 - 0x1be4ec
void entry_001be4b8_0x1be4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be4b8_0x1be4b8");
#endif

    switch (ctx->pc) {
        case 0x1be4c0u: goto label_1be4c0;
        case 0x1be4d0u: goto label_1be4d0;
        case 0x1be4dcu: goto label_1be4dc;
        case 0x1be4e4u: goto label_1be4e4;
        default: break;
    }

    ctx->pc = 0x1be4b8u;

    // 0x1be4b8: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BE4B8u;
    SET_GPR_U32(ctx, 31, 0x1BE4C0u);
    ctx->pc = 0x1BE4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4B8u;
    // 0x1be4bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BE4B8u, 0x1BE4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4C0u;
label_1be4c0:
    // 0x1be4c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE4C0u;
    {
        const bool branch_taken_0x1be4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4C0u;
        // 0x1be4c4: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4c0) {
            ctx->pc = 0x1BE4ECu;
            return;
        }
    }
    ctx->pc = 0x1BE4C8u;
    // 0x1be4c8: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE4C8u;
    SET_GPR_U32(ctx, 31, 0x1BE4D0u);
    ctx->pc = 0x1BE4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4C8u;
    // 0x1be4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE4C8u, 0x1BE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4D0u;
label_1be4d0:
    // 0x1be4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4d4: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1BE4D4u;
    SET_GPR_U32(ctx, 31, 0x1BE4DCu);
    ctx->pc = 0x1BE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4D4u;
    // 0x1be4d8: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1BE4D4u, 0x1BE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4DCu;
label_1be4dc:
    // 0x1be4dc: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE4DCu;
    SET_GPR_U32(ctx, 31, 0x1BE4E4u);
    ctx->pc = 0x1BE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4DCu;
    // 0x1be4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE4DCu, 0x1BE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4E4u;
label_1be4e4:
    // 0x1be4e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE4E4u;
    {
        const bool branch_taken_0x1be4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be4e4) {
            ctx->pc = 0x1BE500u;
            return;
        }
    }
    ctx->pc = 0x1BE4ECu;
}
