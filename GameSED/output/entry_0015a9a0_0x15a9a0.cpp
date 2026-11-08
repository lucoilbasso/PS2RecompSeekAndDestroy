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

// Function: entry_0015a9a0
// Address: 0x15a9a0 - 0x15a9bc
void entry_0015a9a0_0x15a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a9a0_0x15a9a0");
#endif

    switch (ctx->pc) {
        case 0x15a9b8u: goto label_15a9b8;
        default: break;
    }

    ctx->pc = 0x15a9a0u;

    // 0x15a9a0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15a9a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A9A4u;
    {
        const bool branch_taken_0x15a9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9a4) {
            ctx->pc = 0x15A9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A9A4u;
            // 0x15a9a8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A9BCu;
            return;
        }
    }
    ctx->pc = 0x15A9ACu;
    // 0x15a9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9b0: 0xc0578c8  jal         func_15E320
    ctx->pc = 0x15A9B0u;
    SET_GPR_U32(ctx, 31, 0x15A9B8u);
    ctx->pc = 0x15A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A9B0u;
    // 0x15a9b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E320u, 0x15A9B0u, 0x15A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9B8u;
label_15a9b8:
    // 0x15a9b8: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a9b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a9bcu;
}
