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

// Function: caseD_5
// Address: 0x178ec0 - 0x178ecc
void caseD_5_0x178ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x178ec0");
#endif

    ctx->pc = 0x178ec0u;

    // 0x178ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ec4: 0xc05e414  jal         func_179050
    ctx->pc = 0x178EC4u;
    SET_GPR_U32(ctx, 31, 0x178ECCu);
    ctx->pc = 0x178EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EC4u;
    // 0x178ec8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179050u, 0x178EC4u, 0x178ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178ECCu;
}
