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

// Function: entry_0015a9bc
// Address: 0x15a9bc - 0x15a9d8
void entry_0015a9bc_0x15a9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a9bc_0x15a9bc");
#endif

    switch (ctx->pc) {
        case 0x15a9d4u: goto label_15a9d4;
        default: break;
    }

    ctx->pc = 0x15a9bcu;

    // 0x15a9bc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15a9c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A9C0u;
    {
        const bool branch_taken_0x15a9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9c0) {
            ctx->pc = 0x15A9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A9C0u;
            // 0x15a9c4: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A9D8u;
            return;
        }
    }
    ctx->pc = 0x15A9C8u;
    // 0x15a9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9cc: 0xc057a12  jal         func_15E848
    ctx->pc = 0x15A9CCu;
    SET_GPR_U32(ctx, 31, 0x15A9D4u);
    ctx->pc = 0x15A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A9CCu;
    // 0x15a9d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E848u, 0x15A9CCu, 0x15A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9D4u;
label_15a9d4:
    // 0x15a9d4: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a9d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a9d8u;
}
