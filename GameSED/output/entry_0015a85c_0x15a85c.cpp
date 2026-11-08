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

// Function: entry_0015a85c
// Address: 0x15a85c - 0x15a874
void entry_0015a85c_0x15a85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a85c_0x15a85c");
#endif

    switch (ctx->pc) {
        case 0x15a870u: goto label_15a870;
        default: break;
    }

    ctx->pc = 0x15a85cu;

    // 0x15a85c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15a85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x15a860: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A860u;
    {
        const bool branch_taken_0x15a860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a860) {
            ctx->pc = 0x15A864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A860u;
            // 0x15a864: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A874u;
            return;
        }
    }
    ctx->pc = 0x15A868u;
    // 0x15a868: 0xc058364  jal         func_160D90
    ctx->pc = 0x15A868u;
    SET_GPR_U32(ctx, 31, 0x15A870u);
    ctx->pc = 0x15A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A868u;
    // 0x15a86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D90u, 0x15A868u, 0x15A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A870u;
label_15a870:
    // 0x15a870: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a874u;
}
