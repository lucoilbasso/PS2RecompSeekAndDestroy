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

// Function: entry_0019165c
// Address: 0x19165c - 0x191690
void entry_0019165c_0x19165c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019165c_0x19165c");
#endif

    switch (ctx->pc) {
        case 0x191664u: goto label_191664;
        case 0x191684u: goto label_191684;
        default: break;
    }

    ctx->pc = 0x19165cu;

    // 0x19165c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19165Cu;
    SET_GPR_U32(ctx, 31, 0x191664u);
    ctx->pc = 0x191660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19165Cu;
    // 0x191660: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19165Cu, 0x191664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191664u;
label_191664:
    // 0x191664: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191668: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x191668u;
    {
        const bool branch_taken_0x191668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x191668) {
            ctx->pc = 0x19166Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191668u;
            // 0x19166c: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191690u;
            return;
        }
    }
    ctx->pc = 0x191670u;
    // 0x191670: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x191670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x191674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191678: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x191678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x19167c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19167Cu;
    SET_GPR_U32(ctx, 31, 0x191684u);
    ctx->pc = 0x191680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19167Cu;
    // 0x191680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19167Cu, 0x191684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191684u;
label_191684:
    // 0x191684: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x191684u;
    {
        const bool branch_taken_0x191684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191684u;
        // 0x191688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191684) {
            ctx->pc = 0x1916DCu;
            return;
        }
    }
    ctx->pc = 0x19168Cu;
    // 0x19168c: 0x0  nop
    ctx->pc = 0x19168cu;
    // NOP
    ctx->pc = 0x191690u;
}
