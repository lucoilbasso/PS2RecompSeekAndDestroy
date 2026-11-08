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

// Function: entry_0017eb04
// Address: 0x17eb04 - 0x17eb14
void entry_0017eb04_0x17eb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb04_0x17eb04");
#endif

    ctx->pc = 0x17eb04u;

    // 0x17eb04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EB04u;
    {
        const bool branch_taken_0x17eb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb04) {
            ctx->pc = 0x17EB14u;
            return;
        }
    }
    ctx->pc = 0x17EB0Cu;
    // 0x17eb0c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EB0Cu;
    SET_GPR_U32(ctx, 31, 0x17EB14u);
    ctx->pc = 0x17EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB0Cu;
    // 0x17eb10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EB0Cu, 0x17EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB14u;
}
