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

// Function: entry_001005e8
// Address: 0x1005e8 - 0x100608
void entry_001005e8_0x1005e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001005e8_0x1005e8");
#endif

    switch (ctx->pc) {
        case 0x100604u: goto label_100604;
        default: break;
    }

    ctx->pc = 0x1005e8u;

    // 0x1005e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1005e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1005ec: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1005ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1005f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1005F0u;
    {
        const bool branch_taken_0x1005f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005F0u;
        // 0x1005f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005f0) {
            ctx->pc = 0x100608u;
            return;
        }
    }
    ctx->pc = 0x1005F8u;
    // 0x1005f8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1005f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1005fc: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1005FCu;
    SET_GPR_U32(ctx, 31, 0x100604u);
    ctx->pc = 0x100600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005FCu;
    // 0x100600: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1005FCu, 0x100604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100604u;
label_100604:
    // 0x100604: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x100604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    ctx->pc = 0x100608u;
}
