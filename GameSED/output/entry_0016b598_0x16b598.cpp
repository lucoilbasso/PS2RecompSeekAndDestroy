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

// Function: entry_0016b598
// Address: 0x16b598 - 0x16b5b0
void entry_0016b598_0x16b598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b598_0x16b598");
#endif

    ctx->pc = 0x16b598u;

    // 0x16b598: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16b598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16b59c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16b5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B5A0u;
    {
        const bool branch_taken_0x16b5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5a0) {
            ctx->pc = 0x16B5B0u;
            return;
        }
    }
    ctx->pc = 0x16B5A8u;
    // 0x16b5a8: 0xc061920  jal         func_186480
    ctx->pc = 0x16B5A8u;
    SET_GPR_U32(ctx, 31, 0x16B5B0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16B5A8u, 0x16B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5B0u;
}
