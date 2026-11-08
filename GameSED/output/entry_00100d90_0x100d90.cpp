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

// Function: entry_00100d90
// Address: 0x100d90 - 0x100db8
void entry_00100d90_0x100d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100d90_0x100d90");
#endif

    switch (ctx->pc) {
        case 0x100d98u: goto label_100d98;
        default: break;
    }

    ctx->pc = 0x100d90u;

    // 0x100d90: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x100D90u;
    SET_GPR_U32(ctx, 31, 0x100D98u);
    ctx->pc = 0x100D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D90u;
    // 0x100d94: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100D90u, 0x100D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D98u;
label_100d98:
    // 0x100d98: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x100d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x100d9c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x100d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x100da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100da4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x100da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100da8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x100da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x100dac: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100DACu;
    {
        const bool branch_taken_0x100dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DACu;
        // 0x100db0: 0x38880  sll         $s1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100dac) {
            ctx->pc = 0x100DB8u;
            return;
        }
    }
    ctx->pc = 0x100DB4u;
    // 0x100db4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x100db8u;
}
