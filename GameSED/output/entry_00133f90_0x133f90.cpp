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

// Function: entry_00133f90
// Address: 0x133f90 - 0x133fa0
void entry_00133f90_0x133f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133f90_0x133f90");
#endif

    switch (ctx->pc) {
        case 0x133f98u: goto label_133f98;
        default: break;
    }

    ctx->pc = 0x133f90u;

    // 0x133f90: 0xc0449ae  jal         func_1126B8
    ctx->pc = 0x133F90u;
    SET_GPR_U32(ctx, 31, 0x133F98u);
    ctx->pc = 0x133F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F90u;
    // 0x133f94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126B8u, 0x133F90u, 0x133F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F98u;
label_133f98:
    // 0x133f98: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x133F98u;
    {
        const bool branch_taken_0x133f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133f98) {
            ctx->pc = 0x134090u;
            return;
        }
    }
    ctx->pc = 0x133FA0u;
}
