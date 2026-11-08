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

// Function: entry_0015a8a4
// Address: 0x15a8a4 - 0x15a8bc
void entry_0015a8a4_0x15a8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a8a4_0x15a8a4");
#endif

    switch (ctx->pc) {
        case 0x15a8b8u: goto label_15a8b8;
        default: break;
    }

    ctx->pc = 0x15a8a4u;

    // 0x15a8a4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15a8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15a8a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A8A8u;
    {
        const bool branch_taken_0x15a8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a8a8) {
            ctx->pc = 0x15A8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A8A8u;
            // 0x15a8ac: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8BCu;
            return;
        }
    }
    ctx->pc = 0x15A8B0u;
    // 0x15a8b0: 0xc057786  jal         func_15DE18
    ctx->pc = 0x15A8B0u;
    SET_GPR_U32(ctx, 31, 0x15A8B8u);
    ctx->pc = 0x15A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8B0u;
    // 0x15a8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DE18u, 0x15A8B0u, 0x15A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8B8u;
label_15a8b8:
    // 0x15a8b8: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a8b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a8bcu;
}
