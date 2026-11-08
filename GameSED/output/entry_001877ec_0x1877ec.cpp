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

// Function: entry_001877ec
// Address: 0x1877ec - 0x187814
void entry_001877ec_0x1877ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001877ec_0x1877ec");
#endif

    switch (ctx->pc) {
        case 0x1877f4u: goto label_1877f4;
        default: break;
    }

    ctx->pc = 0x1877ecu;

    // 0x1877ec: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1877ECu;
    SET_GPR_U32(ctx, 31, 0x1877F4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1877ECu, 0x1877F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877F4u;
label_1877f4:
    // 0x1877f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1877f8: 0x24a57f08  addiu       $a1, $a1, 0x7F08
    ctx->pc = 0x1877f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32520));
    // 0x1877fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1877fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187800: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x187800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187804u;
    {
        const bool branch_taken_0x187804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187804u;
        // 0x187808: 0xae220160  sw          $v0, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187804) {
            ctx->pc = 0x187814u;
            return;
        }
    }
    ctx->pc = 0x18780Cu;
    // 0x18780c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18780Cu;
    SET_GPR_U32(ctx, 31, 0x187814u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18780Cu, 0x187814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187814u;
}
