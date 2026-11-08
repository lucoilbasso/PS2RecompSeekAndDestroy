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

// Function: entry_0017bfb8
// Address: 0x17bfb8 - 0x17bfd4
void entry_0017bfb8_0x17bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bfb8_0x17bfb8");
#endif

    switch (ctx->pc) {
        case 0x17bfc4u: goto label_17bfc4;
        default: break;
    }

    ctx->pc = 0x17bfb8u;

label_17bfb8:
    // 0x17bfb8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17bfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17bfbc: 0xc05e9e6  jal         func_17A798
    ctx->pc = 0x17BFBCu;
    SET_GPR_U32(ctx, 31, 0x17BFC4u);
    ctx->pc = 0x17BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFBCu;
    // 0x17bfc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A798u, 0x17BFBCu, 0x17BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFC4u;
label_17bfc4:
    // 0x17bfc4: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17BFC4u;
    {
        const bool branch_taken_0x17bfc4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17bfc4) {
            ctx->pc = 0x17BFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BFC4u;
            // 0x17bfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bfb8;
        }
    }
    ctx->pc = 0x17BFCCu;
    // 0x17bfcc: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17BFCCu;
    SET_GPR_U32(ctx, 31, 0x17BFD4u);
    ctx->pc = 0x17BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFCCu;
    // 0x17bfd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17BFCCu, 0x17BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFD4u;
}
