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

// Function: entry_00132918
// Address: 0x132918 - 0x132924
void entry_00132918_0x132918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132918_0x132918");
#endif

    ctx->pc = 0x132918u;

    // 0x132918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13291c: 0xc04c10a  jal         func_130428
    ctx->pc = 0x13291Cu;
    SET_GPR_U32(ctx, 31, 0x132924u);
    ctx->pc = 0x132920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13291Cu;
    // 0x132920: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130428u, 0x13291Cu, 0x132924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132924u;
}
