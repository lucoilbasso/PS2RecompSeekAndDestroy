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

// Function: entry_0017c290
// Address: 0x17c290 - 0x17c2b0
void entry_0017c290_0x17c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c290_0x17c290");
#endif

    switch (ctx->pc) {
        case 0x17c2a4u: goto label_17c2a4;
        default: break;
    }

    ctx->pc = 0x17c290u;

    // 0x17c290: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c294: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C294u;
    {
        const bool branch_taken_0x17c294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C294u;
        // 0x17c298: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c294) {
            ctx->pc = 0x17C2B0u;
            return;
        }
    }
    ctx->pc = 0x17C29Cu;
    // 0x17c29c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C29Cu;
    SET_GPR_U32(ctx, 31, 0x17C2A4u);
    ctx->pc = 0x17C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C29Cu;
    // 0x17c2a0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C29Cu, 0x17C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2A4u;
label_17c2a4:
    // 0x17c2a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C2A4u;
    {
        const bool branch_taken_0x17c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2A4u;
        // 0x17c2a8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2a4) {
            ctx->pc = 0x17C2C4u;
            return;
        }
    }
    ctx->pc = 0x17C2ACu;
    // 0x17c2ac: 0x0  nop
    ctx->pc = 0x17c2acu;
    // NOP
    ctx->pc = 0x17c2b0u;
}
