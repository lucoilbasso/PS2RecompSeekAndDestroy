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

// Function: entry_00170e80
// Address: 0x170e80 - 0x170e98
void entry_00170e80_0x170e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e80_0x170e80");
#endif

    switch (ctx->pc) {
        case 0x170e8cu: goto label_170e8c;
        default: break;
    }

    ctx->pc = 0x170e80u;

    // 0x170e80: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x170e84: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x170E84u;
    SET_GPR_U32(ctx, 31, 0x170E8Cu);
    ctx->pc = 0x170E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E84u;
    // 0x170e88: 0x248476b8  addiu       $a0, $a0, 0x76B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x170E84u, 0x170E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E8Cu;
label_170e8c:
    // 0x170e8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x170E8Cu;
    {
        const bool branch_taken_0x170e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E8Cu;
        // 0x170e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e8c) {
            ctx->pc = 0x170EBCu;
            return;
        }
    }
    ctx->pc = 0x170E94u;
    // 0x170e94: 0x0  nop
    ctx->pc = 0x170e94u;
    // NOP
    ctx->pc = 0x170e98u;
}
