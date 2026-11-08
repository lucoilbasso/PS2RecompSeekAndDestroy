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

// Function: entry_0011229c
// Address: 0x11229c - 0x1122c8
void entry_0011229c_0x11229c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011229c_0x11229c");
#endif

    switch (ctx->pc) {
        case 0x1122c0u: goto label_1122c0;
        default: break;
    }

    ctx->pc = 0x11229cu;

    // 0x11229c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11229cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1122a0: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x1122a0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x1122a4: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1122a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1122a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1122a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1122ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1122acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1122b0: 0x10430051  beq         $v0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1122B0u;
    {
        const bool branch_taken_0x1122b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1122B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122B0u;
        // 0x1122b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122b0) {
            ctx->pc = 0x1123F8u;
            return;
        }
    }
    ctx->pc = 0x1122B8u;
    // 0x1122b8: 0xc044722  jal         func_111C88
    ctx->pc = 0x1122B8u;
    SET_GPR_U32(ctx, 31, 0x1122C0u);
    ctx->pc = 0x1122BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122B8u;
    // 0x1122bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C88u, 0x1122B8u, 0x1122C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122C0u;
label_1122c0:
    // 0x1122c0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1122C0u;
    {
        const bool branch_taken_0x1122c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122c0) {
            ctx->pc = 0x1123F8u;
            return;
        }
    }
    ctx->pc = 0x1122C8u;
}
