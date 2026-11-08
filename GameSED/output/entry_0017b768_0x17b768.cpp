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

// Function: entry_0017b768
// Address: 0x17b768 - 0x17b78c
void entry_0017b768_0x17b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b768_0x17b768");
#endif

    switch (ctx->pc) {
        case 0x17b774u: goto label_17b774;
        case 0x17b784u: goto label_17b784;
        default: break;
    }

    ctx->pc = 0x17b768u;

label_17b768:
    // 0x17b768: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17b76c: 0xc05e9e6  jal         func_17A798
    ctx->pc = 0x17B76Cu;
    SET_GPR_U32(ctx, 31, 0x17B774u);
    ctx->pc = 0x17B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B76Cu;
    // 0x17b770: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A798u, 0x17B76Cu, 0x17B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B774u;
label_17b774:
    // 0x17b774: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17B774u;
    {
        const bool branch_taken_0x17b774 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17b774) {
            ctx->pc = 0x17B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B774u;
            // 0x17b778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b768;
        }
    }
    ctx->pc = 0x17B77Cu;
    // 0x17b77c: 0xc05e9e6  jal         func_17A798
    ctx->pc = 0x17B77Cu;
    SET_GPR_U32(ctx, 31, 0x17B784u);
    ctx->pc = 0x17B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B77Cu;
    // 0x17b780: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A798u, 0x17B77Cu, 0x17B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B784u;
label_17b784:
    // 0x17b784: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17B784u;
    SET_GPR_U32(ctx, 31, 0x17B78Cu);
    ctx->pc = 0x17B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B784u;
    // 0x17b788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17B784u, 0x17B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B78Cu;
}
