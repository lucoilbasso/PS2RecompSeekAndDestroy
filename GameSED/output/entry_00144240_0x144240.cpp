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

// Function: entry_00144240
// Address: 0x144240 - 0x144270
void entry_00144240_0x144240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144240_0x144240");
#endif

    switch (ctx->pc) {
        case 0x144248u: goto label_144248;
        case 0x144260u: goto label_144260;
        case 0x144268u: goto label_144268;
        default: break;
    }

    ctx->pc = 0x144240u;

    // 0x144240: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144240u;
    SET_GPR_U32(ctx, 31, 0x144248u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144240u, 0x144248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144248u;
label_144248:
    // 0x144248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14424c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14424cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144250: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x144250u;
    {
        const bool branch_taken_0x144250 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x144254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144250u;
        // 0x144254: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144250) {
            ctx->pc = 0x144270u;
            return;
        }
    }
    ctx->pc = 0x144258u;
    // 0x144258: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144258u;
    SET_GPR_U32(ctx, 31, 0x144260u);
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144258u, 0x144260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144260u;
label_144260:
    // 0x144260: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x144260u;
    SET_GPR_U32(ctx, 31, 0x144268u);
    ctx->pc = 0x144264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144260u;
    // 0x144264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x144260u, 0x144268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144268u;
label_144268:
    // 0x144268: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x144268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x14426c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144270u;
}
