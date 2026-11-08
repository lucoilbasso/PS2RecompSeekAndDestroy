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

// Function: entry_0012e804
// Address: 0x12e804 - 0x12e834
void entry_0012e804_0x12e804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e804_0x12e804");
#endif

    switch (ctx->pc) {
        case 0x12e814u: goto label_12e814;
        case 0x12e828u: goto label_12e828;
        default: break;
    }

    ctx->pc = 0x12e804u;

    // 0x12e804: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12E804u;
    {
        const bool branch_taken_0x12e804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e804) {
            ctx->pc = 0x12E808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E804u;
            // 0x12e808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E840u;
            return;
        }
    }
    ctx->pc = 0x12E80Cu;
    // 0x12e80c: 0xc0489d0  jal         func_122740
    ctx->pc = 0x12E80Cu;
    SET_GPR_U32(ctx, 31, 0x12E814u);
    ctx->pc = 0x122740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122740u, 0x12E80Cu, 0x12E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E814u;
label_12e814:
    // 0x12e814: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x12e814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x12e818: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E818u;
    {
        const bool branch_taken_0x12e818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e818) {
            ctx->pc = 0x12E81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E818u;
            // 0x12e81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E840u;
            return;
        }
    }
    ctx->pc = 0x12E820u;
    // 0x12e820: 0xc0490de  jal         func_124378
    ctx->pc = 0x12E820u;
    SET_GPR_U32(ctx, 31, 0x12E828u);
    ctx->pc = 0x124378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124378u, 0x12E820u, 0x12E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E828u;
label_12e828:
    // 0x12e828: 0x8e24018c  lw          $a0, 0x18C($s1)
    ctx->pc = 0x12e828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x12e82c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E82Cu;
    {
        const bool branch_taken_0x12e82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e82c) {
            ctx->pc = 0x12E830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E82Cu;
            // 0x12e830: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E840u;
            return;
        }
    }
    ctx->pc = 0x12E834u;
}
