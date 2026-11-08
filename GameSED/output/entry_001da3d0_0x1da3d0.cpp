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

// Function: entry_001da3d0
// Address: 0x1da3d0 - 0x1da3f4
void entry_001da3d0_0x1da3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da3d0_0x1da3d0");
#endif

    ctx->pc = 0x1da3d0u;

label_1da3d0:
    // 0x1da3d0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1da3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da3d4:
    // 0x1da3d4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da3d8:
    if (ctx->pc == 0x1DA3D8u) {
        ctx->pc = 0x1DA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3D4u;
        // 0x1da3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3DCu;
        goto label_1da3dc;
    }
    ctx->pc = 0x1DA3D4u;
    {
        const bool branch_taken_0x1da3d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3D4u;
        // 0x1da3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3d4) {
            ctx->pc = 0x1DA3F4u;
            return;
        }
    }
    ctx->pc = 0x1DA3DCu;
label_1da3dc:
    // 0x1da3dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da3e0:
    // 0x1da3e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da3e4:
    // 0x1da3e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da3e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da3e8:
    // 0x1da3e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da3ec:
    // 0x1da3ec: 0x60f809  jalr        $v1
label_1da3f0:
    if (ctx->pc == 0x1DA3F0u) {
        ctx->pc = 0x1DA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3ECu;
        // 0x1da3f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3F4u;
        goto label_fallthrough_0x1da3ec;
    }
    ctx->pc = 0x1DA3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA3F4u);
        ctx->pc = 0x1DA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3ECu;
        // 0x1da3f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA3ECu, 0x1DA3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1da3ec:
    ctx->pc = 0x1DA3F4u;
}
