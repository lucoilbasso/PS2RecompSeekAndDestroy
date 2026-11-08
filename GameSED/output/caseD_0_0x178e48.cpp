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

// Function: caseD_0
// Address: 0x178e48 - 0x178e60
void caseD_0_0x178e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x178e48");
#endif

    switch (ctx->pc) {
        case 0x178e54u: goto label_178e54;
        default: break;
    }

    ctx->pc = 0x178e48u;

    // 0x178e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e4c: 0xc05e580  jal         func_179600
    ctx->pc = 0x178E4Cu;
    SET_GPR_U32(ctx, 31, 0x178E54u);
    ctx->pc = 0x178E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E4Cu;
    // 0x178e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179600u, 0x178E4Cu, 0x178E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E54u;
label_178e54:
    // 0x178e54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x178E54u;
    {
        const bool branch_taken_0x178e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E54u;
        // 0x178e58: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e54) {
            ctx->pc = 0x178ED0u;
            return;
        }
    }
    ctx->pc = 0x178E5Cu;
    // 0x178e5c: 0x0  nop
    ctx->pc = 0x178e5cu;
    // NOP
    ctx->pc = 0x178e60u;
}
