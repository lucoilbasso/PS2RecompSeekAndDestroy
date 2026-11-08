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

// Function: entry_001561e4
// Address: 0x1561e4 - 0x15620c
void entry_001561e4_0x1561e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001561e4_0x1561e4");
#endif

    switch (ctx->pc) {
        case 0x1561ecu: goto label_1561ec;
        default: break;
    }

    ctx->pc = 0x1561e4u;

    // 0x1561e4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1561E4u;
    SET_GPR_U32(ctx, 31, 0x1561ECu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1561E4u, 0x1561ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561ECu;
label_1561ec:
    // 0x1561ec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1561ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1561f0: 0x24a56de8  addiu       $a1, $a1, 0x6DE8
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28136));
    // 0x1561f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1561f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1561f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1561fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1561FCu;
    {
        const bool branch_taken_0x1561fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561FCu;
        // 0x156200: 0xae020898  sw          $v0, 0x898($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561fc) {
            ctx->pc = 0x15620Cu;
            return;
        }
    }
    ctx->pc = 0x156204u;
    // 0x156204: 0xc068186  jal         func_1A0618
    ctx->pc = 0x156204u;
    SET_GPR_U32(ctx, 31, 0x15620Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x156204u, 0x15620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15620Cu;
}
