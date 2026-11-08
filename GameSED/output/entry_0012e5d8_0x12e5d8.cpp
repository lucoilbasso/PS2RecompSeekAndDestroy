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

// Function: entry_0012e5d8
// Address: 0x12e5d8 - 0x12e5f8
void entry_0012e5d8_0x12e5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e5d8_0x12e5d8");
#endif

    switch (ctx->pc) {
        case 0x12e5f4u: goto label_12e5f4;
        default: break;
    }

    ctx->pc = 0x12e5d8u;

    // 0x12e5d8: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E5D8u;
    {
        const bool branch_taken_0x12e5d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e5d8) {
            ctx->pc = 0x12E5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5D8u;
            // 0x12e5dc: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E5F8u;
            return;
        }
    }
    ctx->pc = 0x12E5E0u;
    // 0x12e5e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12e5e4: 0x54550004  bnel        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E5E4u;
    {
        const bool branch_taken_0x12e5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x12e5e4) {
            ctx->pc = 0x12E5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5E4u;
            // 0x12e5e8: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E5F8u;
            return;
        }
    }
    ctx->pc = 0x12E5ECu;
    // 0x12e5ec: 0xc04b844  jal         func_12E110
    ctx->pc = 0x12E5ECu;
    SET_GPR_U32(ctx, 31, 0x12E5F4u);
    ctx->pc = 0x12E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5ECu;
    // 0x12e5f0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E110u, 0x12E5ECu, 0x12E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5F4u;
label_12e5f4:
    // 0x12e5f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x12e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x12e5f8u;
}
