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

// Function: entry_001320f4
// Address: 0x1320f4 - 0x132124
void entry_001320f4_0x1320f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001320f4_0x1320f4");
#endif

    switch (ctx->pc) {
        case 0x1320fcu: goto label_1320fc;
        default: break;
    }

    ctx->pc = 0x1320f4u;

    // 0x1320f4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1320F4u;
    SET_GPR_U32(ctx, 31, 0x1320FCu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1320F4u, 0x1320FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1320FCu;
label_1320fc:
    // 0x1320fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1320fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x132100: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13210c: 0x24a55fd8  addiu       $a1, $a1, 0x5FD8
    ctx->pc = 0x13210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24536));
    // 0x132110: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x132110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132114: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x132114u;
    {
        const bool branch_taken_0x132114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x132118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132114u;
        // 0x132118: 0xae030158  sw          $v1, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132114) {
            ctx->pc = 0x132130u;
            return;
        }
    }
    ctx->pc = 0x13211Cu;
    // 0x13211c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13211Cu;
    SET_GPR_U32(ctx, 31, 0x132124u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13211Cu, 0x132124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132124u;
}
