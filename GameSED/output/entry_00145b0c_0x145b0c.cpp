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

// Function: entry_00145b0c
// Address: 0x145b0c - 0x145b48
void entry_00145b0c_0x145b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145b0c_0x145b0c");
#endif

    switch (ctx->pc) {
        case 0x145b30u: goto label_145b30;
        case 0x145b44u: goto label_145b44;
        default: break;
    }

    ctx->pc = 0x145b0cu;

    // 0x145b0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x145b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145b10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x145b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x145b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145b18: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x145B18u;
    {
        const bool branch_taken_0x145b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B18u;
        // 0x145b1c: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b18) {
            ctx->pc = 0x145B48u;
            return;
        }
    }
    ctx->pc = 0x145B20u;
    // 0x145b20: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x145b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x145b24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x145b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b28: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x145B28u;
    SET_GPR_U32(ctx, 31, 0x145B30u);
    ctx->pc = 0x145B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B28u;
    // 0x145b2c: 0x248469d8  addiu       $a0, $a0, 0x69D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x145B28u, 0x145B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B30u;
label_145b30:
    // 0x145b30: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b38: 0x24a569c0  addiu       $a1, $a1, 0x69C0
    ctx->pc = 0x145b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27072));
    // 0x145b3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145B3Cu;
    SET_GPR_U32(ctx, 31, 0x145B44u);
    ctx->pc = 0x145B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B3Cu;
    // 0x145b40: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145B3Cu, 0x145B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B44u;
label_145b44:
    // 0x145b44: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x145b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x145b48u;
}
