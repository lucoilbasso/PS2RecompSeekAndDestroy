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

// Function: entry_00154998
// Address: 0x154998 - 0x1549b4
void entry_00154998_0x154998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154998_0x154998");
#endif

    switch (ctx->pc) {
        case 0x1549b0u: goto label_1549b0;
        default: break;
    }

    ctx->pc = 0x154998u;

    // 0x154998: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x154998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x15499c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1549a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1549A0u;
    {
        const bool branch_taken_0x1549a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1549a0) {
            ctx->pc = 0x1549A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1549A0u;
            // 0x1549a4: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1549B4u;
            return;
        }
    }
    ctx->pc = 0x1549A8u;
    // 0x1549a8: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x1549A8u;
    SET_GPR_U32(ctx, 31, 0x1549B0u);
    ctx->pc = 0x1549ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549A8u;
    // 0x1549ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x1549A8u, 0x1549B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549B0u;
label_1549b0:
    // 0x1549b0: 0x8e22037c  lw          $v0, 0x37C($s1)
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
    ctx->pc = 0x1549b4u;
}
