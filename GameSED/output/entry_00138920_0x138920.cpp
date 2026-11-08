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

// Function: entry_00138920
// Address: 0x138920 - 0x138938
void entry_00138920_0x138920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138920_0x138920");
#endif

    switch (ctx->pc) {
        case 0x138930u: goto label_138930;
        default: break;
    }

    ctx->pc = 0x138920u;

    // 0x138920: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x138920u;
    {
        const bool branch_taken_0x138920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x138920) {
            ctx->pc = 0x138924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138920u;
            // 0x138924: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138970u;
            return;
        }
    }
    ctx->pc = 0x138928u;
    // 0x138928: 0xc04e1a6  jal         func_138698
    ctx->pc = 0x138928u;
    SET_GPR_U32(ctx, 31, 0x138930u);
    ctx->pc = 0x13892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138928u;
    // 0x13892c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138698u, 0x138928u, 0x138930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138930u;
label_138930:
    // 0x138930: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138930u;
    {
        const bool branch_taken_0x138930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138930u;
        // 0x138934: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138930) {
            ctx->pc = 0x138970u;
            return;
        }
    }
    ctx->pc = 0x138938u;
}
