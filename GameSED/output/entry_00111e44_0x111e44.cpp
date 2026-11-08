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

// Function: entry_00111e44
// Address: 0x111e44 - 0x111e60
void entry_00111e44_0x111e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111e44_0x111e44");
#endif

    switch (ctx->pc) {
        case 0x111e5cu: goto label_111e5c;
        default: break;
    }

    ctx->pc = 0x111e44u;

    // 0x111e44: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111E44u;
    {
        const bool branch_taken_0x111e44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E44u;
        // 0x111e48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e44) {
            ctx->pc = 0x111E60u;
            return;
        }
    }
    ctx->pc = 0x111E4Cu;
    // 0x111e4c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x111e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111e50: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x111e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x111e54: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111E54u;
    SET_GPR_U32(ctx, 31, 0x111E5Cu);
    ctx->pc = 0x111E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E54u;
    // 0x111e58: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111E54u, 0x111E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E5Cu;
label_111e5c:
    // 0x111e5c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x111e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111e60u;
}
