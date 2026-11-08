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

// Function: entry_00178d1c
// Address: 0x178d1c - 0x178d48
void entry_00178d1c_0x178d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d1c_0x178d1c");
#endif

    switch (ctx->pc) {
        case 0x178d2cu: goto label_178d2c;
        default: break;
    }

    ctx->pc = 0x178d1cu;

    // 0x178d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178d24: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x178D24u;
    SET_GPR_U32(ctx, 31, 0x178D2Cu);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178D24u, 0x178D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D2Cu;
label_178d2c:
    // 0x178d2c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x178d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178d30: 0x26244010  addiu       $a0, $s1, 0x4010
    ctx->pc = 0x178d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16400));
    // 0x178d34: 0x24630158  addiu       $v1, $v1, 0x158
    ctx->pc = 0x178d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 344));
    // 0x178d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178d3c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x178D3Cu;
    {
        const bool branch_taken_0x178d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D3Cu;
        // 0x178d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d3c) {
            ctx->pc = 0x178D8Cu;
            return;
        }
    }
    ctx->pc = 0x178D44u;
    // 0x178d44: 0x0  nop
    ctx->pc = 0x178d44u;
    // NOP
    ctx->pc = 0x178d48u;
}
