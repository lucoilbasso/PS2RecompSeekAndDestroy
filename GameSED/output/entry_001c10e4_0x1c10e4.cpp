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

// Function: entry_001c10e4
// Address: 0x1c10e4 - 0x1c1108
void entry_001c10e4_0x1c10e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c10e4_0x1c10e4");
#endif

    switch (ctx->pc) {
        case 0x1c1100u: goto label_1c1100;
        default: break;
    }

    ctx->pc = 0x1c10e4u;

    // 0x1c10e4: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1c10e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c10e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C10E8u;
    {
        const bool branch_taken_0x1c10e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10E8u;
        // 0x1c10ec: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10e8) {
            ctx->pc = 0x1C1108u;
            return;
        }
    }
    ctx->pc = 0x1C10F0u;
    // 0x1c10f0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c10f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10f8: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C10F8u;
    SET_GPR_U32(ctx, 31, 0x1C1100u);
    ctx->pc = 0x1C10FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10F8u;
    // 0x1c10fc: 0x24a5b5b0  addiu       $a1, $a1, -0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C10F8u, 0x1C1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1100u;
label_1c1100:
    // 0x1c1100: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C1100u;
    {
        const bool branch_taken_0x1c1100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1100u;
        // 0x1c1104: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1100) {
            ctx->pc = 0x1C11E4u;
            return;
        }
    }
    ctx->pc = 0x1C1108u;
}
