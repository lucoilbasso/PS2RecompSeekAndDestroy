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

// Function: entry_001449f8
// Address: 0x1449f8 - 0x144a10
void entry_001449f8_0x1449f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001449f8_0x1449f8");
#endif

    switch (ctx->pc) {
        case 0x144a04u: goto label_144a04;
        default: break;
    }

    ctx->pc = 0x1449f8u;

    // 0x1449f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1449f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449fc: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x1449FCu;
    SET_GPR_U32(ctx, 31, 0x144A04u);
    ctx->pc = 0x144A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449FCu;
    // 0x144a00: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1449FCu, 0x144A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A04u;
label_144a04:
    // 0x144a04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x144A04u;
    {
        const bool branch_taken_0x144a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144a04) {
            ctx->pc = 0x144A34u;
            return;
        }
    }
    ctx->pc = 0x144A0Cu;
    // 0x144a0c: 0x0  nop
    ctx->pc = 0x144a0cu;
    // NOP
    ctx->pc = 0x144a10u;
}
