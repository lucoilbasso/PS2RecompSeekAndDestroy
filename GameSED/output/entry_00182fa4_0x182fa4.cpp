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

// Function: entry_00182fa4
// Address: 0x182fa4 - 0x182fb4
void entry_00182fa4_0x182fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182fa4_0x182fa4");
#endif

    switch (ctx->pc) {
        case 0x182facu: goto label_182fac;
        default: break;
    }

    ctx->pc = 0x182fa4u;

    // 0x182fa4: 0xc060216  jal         func_180858
    ctx->pc = 0x182FA4u;
    SET_GPR_U32(ctx, 31, 0x182FACu);
    ctx->pc = 0x182FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FA4u;
    // 0x182fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180858u, 0x182FA4u, 0x182FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FACu;
label_182fac:
    // 0x182fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x182FACu;
    {
        const bool branch_taken_0x182fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FACu;
        // 0x182fb0: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182fac) {
            ctx->pc = 0x182FC8u;
            return;
        }
    }
    ctx->pc = 0x182FB4u;
}
