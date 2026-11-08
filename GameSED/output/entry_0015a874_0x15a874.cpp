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

// Function: entry_0015a874
// Address: 0x15a874 - 0x15a88c
void entry_0015a874_0x15a874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a874_0x15a874");
#endif

    switch (ctx->pc) {
        case 0x15a888u: goto label_15a888;
        default: break;
    }

    ctx->pc = 0x15a874u;

    // 0x15a874: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15a874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x15a878: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A878u;
    {
        const bool branch_taken_0x15a878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a878) {
            ctx->pc = 0x15A87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A878u;
            // 0x15a87c: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A88Cu;
            return;
        }
    }
    ctx->pc = 0x15A880u;
    // 0x15a880: 0xc0571e4  jal         func_15C790
    ctx->pc = 0x15A880u;
    SET_GPR_U32(ctx, 31, 0x15A888u);
    ctx->pc = 0x15A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A880u;
    // 0x15a884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C790u, 0x15A880u, 0x15A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A888u;
label_15a888:
    // 0x15a888: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a88cu;
}
