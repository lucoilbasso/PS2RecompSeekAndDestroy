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

// Function: entry_0017aa80
// Address: 0x17aa80 - 0x17aaa0
void entry_0017aa80_0x17aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aa80_0x17aa80");
#endif

    switch (ctx->pc) {
        case 0x17aa94u: goto label_17aa94;
        default: break;
    }

    ctx->pc = 0x17aa80u;

    // 0x17aa80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17aa84: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AA84u;
    {
        const bool branch_taken_0x17aa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x17AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA84u;
        // 0x17aa88: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa84) {
            ctx->pc = 0x17AAA0u;
            return;
        }
    }
    ctx->pc = 0x17AA8Cu;
    // 0x17aa8c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17AA8Cu;
    SET_GPR_U32(ctx, 31, 0x17AA94u);
    ctx->pc = 0x17AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA8Cu;
    // 0x17aa90: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17AA8Cu, 0x17AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA94u;
label_17aa94:
    // 0x17aa94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AA94u;
    {
        const bool branch_taken_0x17aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA94u;
        // 0x17aa98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa94) {
            ctx->pc = 0x17AAB4u;
            return;
        }
    }
    ctx->pc = 0x17AA9Cu;
    // 0x17aa9c: 0x0  nop
    ctx->pc = 0x17aa9cu;
    // NOP
    ctx->pc = 0x17aaa0u;
}
