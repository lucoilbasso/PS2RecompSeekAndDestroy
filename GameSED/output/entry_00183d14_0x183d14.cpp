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

// Function: entry_00183d14
// Address: 0x183d14 - 0x183d3c
void entry_00183d14_0x183d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183d14_0x183d14");
#endif

    switch (ctx->pc) {
        case 0x183d1cu: goto label_183d1c;
        default: break;
    }

    ctx->pc = 0x183d14u;

    // 0x183d14: 0xc068086  jal         func_1A0218
    ctx->pc = 0x183D14u;
    SET_GPR_U32(ctx, 31, 0x183D1Cu);
    ctx->pc = 0x183D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183D14u;
    // 0x183d18: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x183D14u, 0x183D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D1Cu;
label_183d1c:
    // 0x183d1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x183d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x183d20: 0x24a57e50  addiu       $a1, $a1, 0x7E50
    ctx->pc = 0x183d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32336));
    // 0x183d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183d2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183D2Cu;
    {
        const bool branch_taken_0x183d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D2Cu;
        // 0x183d30: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d2c) {
            ctx->pc = 0x183D3Cu;
            return;
        }
    }
    ctx->pc = 0x183D34u;
    // 0x183d34: 0xc068186  jal         func_1A0618
    ctx->pc = 0x183D34u;
    SET_GPR_U32(ctx, 31, 0x183D3Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x183D34u, 0x183D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D3Cu;
}
