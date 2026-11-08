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

// Function: entry_00161538
// Address: 0x161538 - 0x161558
void entry_00161538_0x161538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161538_0x161538");
#endif

    switch (ctx->pc) {
        case 0x161554u: goto label_161554;
        default: break;
    }

    ctx->pc = 0x161538u;

    // 0x161538: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x161538u;
    {
        const bool branch_taken_0x161538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x161538) {
            ctx->pc = 0x16153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161538u;
            // 0x16153c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161558u;
            return;
        }
    }
    ctx->pc = 0x161540u;
    // 0x161540: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x161540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161544: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x161544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16154c: 0xc0618da  jal         func_186368
    ctx->pc = 0x16154Cu;
    SET_GPR_U32(ctx, 31, 0x161554u);
    ctx->pc = 0x161550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16154Cu;
    // 0x161550: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x16154Cu, 0x161554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161554u;
label_161554:
    // 0x161554: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x161554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x161558u;
}
