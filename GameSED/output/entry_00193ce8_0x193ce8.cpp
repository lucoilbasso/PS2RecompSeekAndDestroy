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

// Function: entry_00193ce8
// Address: 0x193ce8 - 0x193d0c
void entry_00193ce8_0x193ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193ce8_0x193ce8");
#endif

    switch (ctx->pc) {
        case 0x193cf0u: goto label_193cf0;
        default: break;
    }

    ctx->pc = 0x193ce8u;

    // 0x193ce8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x193CE8u;
    SET_GPR_U32(ctx, 31, 0x193CF0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x193CE8u, 0x193CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CF0u;
label_193cf0:
    // 0x193cf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193CF0u;
    {
        const bool branch_taken_0x193cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CF0u;
        // 0x193cf4: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cf0) {
            ctx->pc = 0x193D0Cu;
            return;
        }
    }
    ctx->pc = 0x193CF8u;
    // 0x193cf8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d00: 0x24a58238  addiu       $a1, $a1, -0x7DC8
    ctx->pc = 0x193d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935096));
    // 0x193d04: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193D04u;
    SET_GPR_U32(ctx, 31, 0x193D0Cu);
    ctx->pc = 0x193D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D04u;
    // 0x193d08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193D04u, 0x193D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D0Cu;
}
