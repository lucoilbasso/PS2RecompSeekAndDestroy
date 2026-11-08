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

// Function: entry_00105bc8
// Address: 0x105bc8 - 0x105bd8
void entry_00105bc8_0x105bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105bc8_0x105bc8");
#endif

    ctx->pc = 0x105bc8u;

    // 0x105bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105bcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105bd0: 0xc06a34a  jal         func_1A8D28
    ctx->pc = 0x105BD0u;
    SET_GPR_U32(ctx, 31, 0x105BD8u);
    ctx->pc = 0x105BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105BD0u;
    // 0x105bd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8D28u, 0x105BD0u, 0x105BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BD8u;
}
