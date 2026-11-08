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

// Function: entry_001d2cb8
// Address: 0x1d2cb8 - 0x1d2ccc
void entry_001d2cb8_0x1d2cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2cb8_0x1d2cb8");
#endif

    switch (ctx->pc) {
        case 0x1d2cc8u: goto label_1d2cc8;
        default: break;
    }

    ctx->pc = 0x1d2cb8u;

    // 0x1d2cb8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2CB8u;
    {
        const bool branch_taken_0x1d2cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2cb8) {
            ctx->pc = 0x1D2CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CB8u;
            // 0x1d2cbc: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2CCCu;
            return;
        }
    }
    ctx->pc = 0x1D2CC0u;
    // 0x1d2cc0: 0xc075156  jal         func_1D4558
    ctx->pc = 0x1D2CC0u;
    SET_GPR_U32(ctx, 31, 0x1D2CC8u);
    ctx->pc = 0x1D2CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2CC0u;
    // 0x1d2cc4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4558u, 0x1D2CC0u, 0x1D2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2CC8u;
label_1d2cc8:
    // 0x1d2cc8: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x1d2cc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1d2cccu;
}
