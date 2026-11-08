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

// Function: entry_00162c34
// Address: 0x162c34 - 0x162c50
void entry_00162c34_0x162c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162c34_0x162c34");
#endif

    switch (ctx->pc) {
        case 0x162c3cu: goto label_162c3c;
        default: break;
    }

    ctx->pc = 0x162c34u;

    // 0x162c34: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162C34u;
    SET_GPR_U32(ctx, 31, 0x162C3Cu);
    ctx->pc = 0x162C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C34u;
    // 0x162c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162C34u, 0x162C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C3Cu;
label_162c3c:
    // 0x162c3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162C3Cu;
    {
        const bool branch_taken_0x162c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162c3c) {
            ctx->pc = 0x162C50u;
            return;
        }
    }
    ctx->pc = 0x162C44u;
    // 0x162c44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x162C44u;
    {
        const bool branch_taken_0x162c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C44u;
        // 0x162c48: 0x8e3201b4  lw          $s2, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c44) {
            ctx->pc = 0x162C90u;
            return;
        }
    }
    ctx->pc = 0x162C4Cu;
    // 0x162c4c: 0x0  nop
    ctx->pc = 0x162c4cu;
    // NOP
    ctx->pc = 0x162c50u;
}
