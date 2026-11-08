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

// Function: entry_00100e18
// Address: 0x100e18 - 0x100e3c
void entry_00100e18_0x100e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100e18_0x100e18");
#endif

    switch (ctx->pc) {
        case 0x100e20u: goto label_100e20;
        default: break;
    }

    ctx->pc = 0x100e18u;

    // 0x100e18: 0xc068086  jal         func_1A0218
    ctx->pc = 0x100E18u;
    SET_GPR_U32(ctx, 31, 0x100E20u);
    ctx->pc = 0x100E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E18u;
    // 0x100e1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x100E18u, 0x100E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E20u;
label_100e20:
    // 0x100e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x100e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e24: 0x26a51998  addiu       $a1, $s5, 0x1998
    ctx->pc = 0x100e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6552));
    // 0x100e28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x100e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100e2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100E2Cu;
    {
        const bool branch_taken_0x100e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E2Cu;
        // 0x100e30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e2c) {
            ctx->pc = 0x100E3Cu;
            return;
        }
    }
    ctx->pc = 0x100E34u;
    // 0x100e34: 0xc068186  jal         func_1A0618
    ctx->pc = 0x100E34u;
    SET_GPR_U32(ctx, 31, 0x100E3Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x100E34u, 0x100E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E3Cu;
}
