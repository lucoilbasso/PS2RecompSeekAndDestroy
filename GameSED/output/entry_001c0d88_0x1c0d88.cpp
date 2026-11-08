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

// Function: entry_001c0d88
// Address: 0x1c0d88 - 0x1c0d9c
void entry_001c0d88_0x1c0d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0d88_0x1c0d88");
#endif

    switch (ctx->pc) {
        case 0x1c0d90u: goto label_1c0d90;
        default: break;
    }

    ctx->pc = 0x1c0d88u;

    // 0x1c0d88: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1C0D88u;
    SET_GPR_U32(ctx, 31, 0x1C0D90u);
    ctx->pc = 0x1C0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D88u;
    // 0x1c0d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1C0D88u, 0x1C0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D90u;
label_1c0d90:
    // 0x1c0d90: 0xae37011c  sw          $s7, 0x11C($s1)
    ctx->pc = 0x1c0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 23));
    // 0x1c0d94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0D94u;
    {
        const bool branch_taken_0x1c0d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D94u;
        // 0x1c0d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d94) {
            ctx->pc = 0x1C0DACu;
            return;
        }
    }
    ctx->pc = 0x1C0D9Cu;
}
