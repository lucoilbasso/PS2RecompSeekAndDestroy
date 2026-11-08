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

// Function: entry_0011b1e4
// Address: 0x11b1e4 - 0x11b200
void entry_0011b1e4_0x11b1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b1e4_0x11b1e4");
#endif

    switch (ctx->pc) {
        case 0x11b1ecu: goto label_11b1ec;
        default: break;
    }

    ctx->pc = 0x11b1e4u;

    // 0x11b1e4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11B1E4u;
    SET_GPR_U32(ctx, 31, 0x11B1ECu);
    ctx->pc = 0x11B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1E4u;
    // 0x11b1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11B1E4u, 0x11B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B1ECu;
label_11b1ec:
    // 0x11b1ec: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B1ECu;
    {
        const bool branch_taken_0x11b1ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1ECu;
        // 0x11b1f0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1ec) {
            ctx->pc = 0x11B200u;
            return;
        }
    }
    ctx->pc = 0x11B1F4u;
    // 0x11b1f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11B1F4u;
    {
        const bool branch_taken_0x11b1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1F4u;
        // 0x11b1f8: 0xae23008c  sw          $v1, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1f4) {
            ctx->pc = 0x11B254u;
            return;
        }
    }
    ctx->pc = 0x11B1FCu;
    // 0x11b1fc: 0x0  nop
    ctx->pc = 0x11b1fcu;
    // NOP
    ctx->pc = 0x11b200u;
}
