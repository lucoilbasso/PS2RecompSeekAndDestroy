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

// Function: entry_00111f1c
// Address: 0x111f1c - 0x111f30
void entry_00111f1c_0x111f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111f1c_0x111f1c");
#endif

    switch (ctx->pc) {
        case 0x111f28u: goto label_111f28;
        default: break;
    }

    ctx->pc = 0x111f1cu;

    // 0x111f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f20: 0xc061422  jal         func_185088
    ctx->pc = 0x111F20u;
    SET_GPR_U32(ctx, 31, 0x111F28u);
    ctx->pc = 0x111F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F20u;
    // 0x111f24: 0x26360110  addiu       $s6, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x111F20u, 0x111F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F28u;
label_111f28:
    // 0x111f28: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x111F28u;
    {
        const bool branch_taken_0x111f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F28u;
        // 0x111f2c: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f28) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111F30u;
}
