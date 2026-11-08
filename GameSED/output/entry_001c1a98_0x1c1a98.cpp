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

// Function: entry_001c1a98
// Address: 0x1c1a98 - 0x1c1ab0
void entry_001c1a98_0x1c1a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a98_0x1c1a98");
#endif

    switch (ctx->pc) {
        case 0x1c1aa8u: goto label_1c1aa8;
        default: break;
    }

    ctx->pc = 0x1c1a98u;

    // 0x1c1a98: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A98u;
    {
        const bool branch_taken_0x1c1a98 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A98u;
        // 0x1c1a9c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a98) {
            ctx->pc = 0x1C1AB0u;
            return;
        }
    }
    ctx->pc = 0x1C1AA0u;
    // 0x1c1aa0: 0xc0702c8  jal         func_1C0B20
    ctx->pc = 0x1C1AA0u;
    SET_GPR_U32(ctx, 31, 0x1C1AA8u);
    ctx->pc = 0x1C1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AA0u;
    // 0x1c1aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B20u, 0x1C1AA0u, 0x1C1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AA8u;
label_1c1aa8:
    // 0x1c1aa8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x1c1aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1c1aac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c1aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->pc = 0x1c1ab0u;
}
