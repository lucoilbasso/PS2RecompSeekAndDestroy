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

// Function: entry_00141048
// Address: 0x141048 - 0x141058
void entry_00141048_0x141048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141048_0x141048");
#endif

    switch (ctx->pc) {
        case 0x141050u: goto label_141050;
        default: break;
    }

    ctx->pc = 0x141048u;

    // 0x141048: 0xc061422  jal         func_185088
    ctx->pc = 0x141048u;
    SET_GPR_U32(ctx, 31, 0x141050u);
    ctx->pc = 0x14104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141048u;
    // 0x14104c: 0x26320110  addiu       $s2, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x141048u, 0x141050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141050u;
label_141050:
    // 0x141050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141050u;
    {
        const bool branch_taken_0x141050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141050u;
        // 0x141054: 0x32830070  andi        $v1, $s4, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)112);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141050) {
            ctx->pc = 0x141060u;
            return;
        }
    }
    ctx->pc = 0x141058u;
}
