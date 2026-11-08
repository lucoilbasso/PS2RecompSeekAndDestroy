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

// Function: entry_00113a7c
// Address: 0x113a7c - 0x113ab8
void entry_00113a7c_0x113a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113a7c_0x113a7c");
#endif

    switch (ctx->pc) {
        case 0x113a84u: goto label_113a84;
        default: break;
    }

    ctx->pc = 0x113a7cu;

    // 0x113a7c: 0xc063c0c  jal         func_18F030
    ctx->pc = 0x113A7Cu;
    SET_GPR_U32(ctx, 31, 0x113A84u);
    ctx->pc = 0x18F030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F030u, 0x113A7Cu, 0x113A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A84u;
label_113a84:
    // 0x113a84: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x113a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x113a88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x113a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113a8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a90: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x113a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x113a94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x113a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x113a98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113A98u;
    {
        const bool branch_taken_0x113a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A98u;
        // 0x113a9c: 0x32630300  andi        $v1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a98) {
            ctx->pc = 0x113AB8u;
            return;
        }
    }
    ctx->pc = 0x113AA0u;
    // 0x113aa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113aa4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x113aa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113aac: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x113aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x113ab0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x113AB0u;
    {
        const bool branch_taken_0x113ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AB0u;
        // 0x113ab4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ab0) {
            ctx->pc = 0x113AE0u;
            return;
        }
    }
    ctx->pc = 0x113AB8u;
}
