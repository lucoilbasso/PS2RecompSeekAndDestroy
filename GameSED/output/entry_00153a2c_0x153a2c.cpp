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

// Function: entry_00153a2c
// Address: 0x153a2c - 0x153a58
void entry_00153a2c_0x153a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153a2c_0x153a2c");
#endif

    switch (ctx->pc) {
        case 0x153a34u: goto label_153a34;
        case 0x153a3cu: goto label_153a3c;
        default: break;
    }

    ctx->pc = 0x153a2cu;

    // 0x153a2c: 0xc054628  jal         func_1518A0
    ctx->pc = 0x153A2Cu;
    SET_GPR_U32(ctx, 31, 0x153A34u);
    ctx->pc = 0x153A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A2Cu;
    // 0x153a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x153A2Cu, 0x153A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A34u;
label_153a34:
    // 0x153a34: 0xc053c08  jal         func_14F020
    ctx->pc = 0x153A34u;
    SET_GPR_U32(ctx, 31, 0x153A3Cu);
    ctx->pc = 0x153A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A34u;
    // 0x153a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F020u, 0x153A34u, 0x153A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A3Cu;
label_153a3c:
    // 0x153a3c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x153a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x153a40: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x153a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x153a44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x153a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x153a48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153A48u;
    {
        const bool branch_taken_0x153a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153a48) {
            ctx->pc = 0x153A58u;
            return;
        }
    }
    ctx->pc = 0x153A50u;
    // 0x153a50: 0xc0540a4  jal         func_150290
    ctx->pc = 0x153A50u;
    SET_GPR_U32(ctx, 31, 0x153A58u);
    ctx->pc = 0x153A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A50u;
    // 0x153a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150290u, 0x153A50u, 0x153A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A58u;
}
