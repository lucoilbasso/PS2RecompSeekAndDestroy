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

// Function: entry_0015a8bc
// Address: 0x15a8bc - 0x15a8d4
void entry_0015a8bc_0x15a8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a8bc_0x15a8bc");
#endif

    switch (ctx->pc) {
        case 0x15a8d0u: goto label_15a8d0;
        default: break;
    }

    ctx->pc = 0x15a8bcu;

    // 0x15a8bc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15a8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15a8c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A8C0u;
    {
        const bool branch_taken_0x15a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a8c0) {
            ctx->pc = 0x15A8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A8C0u;
            // 0x15a8c4: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8D4u;
            return;
        }
    }
    ctx->pc = 0x15A8C8u;
    // 0x15a8c8: 0xc0579e0  jal         func_15E780
    ctx->pc = 0x15A8C8u;
    SET_GPR_U32(ctx, 31, 0x15A8D0u);
    ctx->pc = 0x15A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8C8u;
    // 0x15a8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E780u, 0x15A8C8u, 0x15A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8D0u;
label_15a8d0:
    // 0x15a8d0: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a8d4u;
}
