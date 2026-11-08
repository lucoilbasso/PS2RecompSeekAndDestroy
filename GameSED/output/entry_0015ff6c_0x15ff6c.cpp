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

// Function: entry_0015ff6c
// Address: 0x15ff6c - 0x15ff88
void entry_0015ff6c_0x15ff6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff6c_0x15ff6c");
#endif

    switch (ctx->pc) {
        case 0x15ff7cu: goto label_15ff7c;
        default: break;
    }

    ctx->pc = 0x15ff6cu;

    // 0x15ff6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ff70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ff70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff74: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x15FF74u;
    SET_GPR_U32(ctx, 31, 0x15FF7Cu);
    ctx->pc = 0x15FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF74u;
    // 0x15ff78: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x15FF74u, 0x15FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF7Cu;
label_15ff7c:
    // 0x15ff7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15FF7Cu;
    {
        const bool branch_taken_0x15ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF7Cu;
        // 0x15ff80: 0x8e650fc8  lw          $a1, 0xFC8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff7c) {
            ctx->pc = 0x15FFA4u;
            return;
        }
    }
    ctx->pc = 0x15FF84u;
    // 0x15ff84: 0x0  nop
    ctx->pc = 0x15ff84u;
    // NOP
    ctx->pc = 0x15ff88u;
}
