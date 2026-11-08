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

// Function: entry_0011d2dc
// Address: 0x11d2dc - 0x11d30c
void entry_0011d2dc_0x11d2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d2dc_0x11d2dc");
#endif

    switch (ctx->pc) {
        case 0x11d2f0u: goto label_11d2f0;
        default: break;
    }

    ctx->pc = 0x11d2dcu;

    // 0x11d2dc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d2e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2e4: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x11d2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x11d2e8: 0xc05eec6  jal         func_17BB18
    ctx->pc = 0x11D2E8u;
    SET_GPR_U32(ctx, 31, 0x11D2F0u);
    ctx->pc = 0x11D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D2E8u;
    // 0x11d2ec: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB18u, 0x11D2E8u, 0x11D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D2F0u;
label_11d2f0:
    // 0x11d2f0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x11d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x11d2f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11d2f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11d2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d2fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d300: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D300u;
    {
        const bool branch_taken_0x11d300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D300u;
        // 0x11d304: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d300) {
            ctx->pc = 0x11D30Cu;
            return;
        }
    }
    ctx->pc = 0x11D308u;
    // 0x11d308: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x11d308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x11d30cu;
}
