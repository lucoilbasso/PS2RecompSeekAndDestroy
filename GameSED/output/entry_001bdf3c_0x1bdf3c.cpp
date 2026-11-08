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

// Function: entry_001bdf3c
// Address: 0x1bdf3c - 0x1bdf60
void entry_001bdf3c_0x1bdf3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdf3c_0x1bdf3c");
#endif

    switch (ctx->pc) {
        case 0x1bdf44u: goto label_1bdf44;
        case 0x1bdf54u: goto label_1bdf54;
        default: break;
    }

    ctx->pc = 0x1bdf3cu;

    // 0x1bdf3c: 0xc070884  jal         func_1C2210
    ctx->pc = 0x1BDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF44u);
    ctx->pc = 0x1BDF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF3Cu;
    // 0x1bdf40: 0xae110120  sw          $s1, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2210u, 0x1BDF3Cu, 0x1BDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF44u;
label_1bdf44:
    // 0x1bdf44: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF44u;
    {
        const bool branch_taken_0x1bdf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf44) {
            ctx->pc = 0x1BDF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDF44u;
            // 0x1bdf48: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDF60u;
            return;
        }
    }
    ctx->pc = 0x1BDF4Cu;
    // 0x1bdf4c: 0xc06f806  jal         func_1BE018
    ctx->pc = 0x1BDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF54u);
    ctx->pc = 0x1BDF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF4Cu;
    // 0x1bdf50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE018u, 0x1BDF4Cu, 0x1BDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF54u;
label_1bdf54:
    // 0x1bdf54: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1bdf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1bdf58: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BDF58u;
    {
        const bool branch_taken_0x1bdf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF58u;
        // 0x1bdf5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf58) {
            ctx->pc = 0x1BDFF4u;
            return;
        }
    }
    ctx->pc = 0x1BDF60u;
}
