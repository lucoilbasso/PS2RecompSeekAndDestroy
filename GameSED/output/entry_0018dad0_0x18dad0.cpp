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

// Function: entry_0018dad0
// Address: 0x18dad0 - 0x18daf8
void entry_0018dad0_0x18dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dad0_0x18dad0");
#endif

    switch (ctx->pc) {
        case 0x18daf4u: goto label_18daf4;
        default: break;
    }

    ctx->pc = 0x18dad0u;

    // 0x18dad0: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x18dad4: 0x26220260  addiu       $v0, $s1, 0x260
    ctx->pc = 0x18dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x18dad8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DAD8u;
    {
        const bool branch_taken_0x18dad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dad8) {
            ctx->pc = 0x18DADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DAD8u;
            // 0x18dadc: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DAF8u;
            return;
        }
    }
    ctx->pc = 0x18DAE0u;
    // 0x18dae0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18dae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dae8: 0x24a58130  addiu       $a1, $a1, -0x7ED0
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934832));
    // 0x18daec: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18DAECu;
    SET_GPR_U32(ctx, 31, 0x18DAF4u);
    ctx->pc = 0x18DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAECu;
    // 0x18daf0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18DAECu, 0x18DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAF4u;
label_18daf4:
    // 0x18daf4: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x18daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    ctx->pc = 0x18daf8u;
}
