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

// Function: entry_00154b48
// Address: 0x154b48 - 0x154b68
void entry_00154b48_0x154b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b48_0x154b48");
#endif

    switch (ctx->pc) {
        case 0x154b60u: goto label_154b60;
        default: break;
    }

    ctx->pc = 0x154b48u;

    // 0x154b48: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x154b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154b50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x154B50u;
    {
        const bool branch_taken_0x154b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b50) {
            ctx->pc = 0x154B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154B50u;
            // 0x154b54: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154B68u;
            return;
        }
    }
    ctx->pc = 0x154B58u;
    // 0x154b58: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x154B58u;
    SET_GPR_U32(ctx, 31, 0x154B60u);
    ctx->pc = 0x154B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B58u;
    // 0x154b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154B58u, 0x154B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B60u;
label_154b60:
    // 0x154b60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154B60u;
    {
        const bool branch_taken_0x154b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B60u;
        // 0x154b64: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b60) {
            ctx->pc = 0x154B80u;
            return;
        }
    }
    ctx->pc = 0x154B68u;
}
