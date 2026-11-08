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

// Function: entry_00199b08
// Address: 0x199b08 - 0x199b20
void entry_00199b08_0x199b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b08_0x199b08");
#endif

    switch (ctx->pc) {
        case 0x199b18u: goto label_199b18;
        default: break;
    }

    ctx->pc = 0x199b08u;

    // 0x199b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199b0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199b10: 0xc05dd1a  jal         func_177468
    ctx->pc = 0x199B10u;
    SET_GPR_U32(ctx, 31, 0x199B18u);
    ctx->pc = 0x199B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B10u;
    // 0x199b14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177468u, 0x199B10u, 0x199B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B18u;
label_199b18:
    // 0x199b18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199b1c: 0x0  nop
    ctx->pc = 0x199b1cu;
    // NOP
    ctx->pc = 0x199b20u;
}
