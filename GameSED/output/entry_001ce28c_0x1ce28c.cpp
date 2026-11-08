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

// Function: entry_001ce28c
// Address: 0x1ce28c - 0x1ce2b0
void entry_001ce28c_0x1ce28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce28c_0x1ce28c");
#endif

    switch (ctx->pc) {
        case 0x1ce298u: goto label_1ce298;
        case 0x1ce2a8u: goto label_1ce2a8;
        default: break;
    }

    ctx->pc = 0x1ce28cu;

label_1ce28c:
    // 0x1ce28c: 0x8fc5048c  lw          $a1, 0x48C($fp)
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_1ce290:
    // 0x1ce290: 0xc072eac  jal         func_1CBAB0
label_1ce294:
    if (ctx->pc == 0x1CE294u) {
        ctx->pc = 0x1CE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE290u;
        // 0x1ce294: 0x2444e288  addiu       $a0, $v0, -0x1D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE298u;
        goto label_1ce298;
    }
    ctx->pc = 0x1CE290u;
    SET_GPR_U32(ctx, 31, 0x1CE298u);
    ctx->pc = 0x1CE294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE290u;
    // 0x1ce294: 0x2444e288  addiu       $a0, $v0, -0x1D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBAB0u, 0x1CE290u, 0x1CE298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE298u;
label_1ce298:
    // 0x1ce298: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ce29c:
    if (ctx->pc == 0x1CE29Cu) {
        ctx->pc = 0x1CE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE298u;
        // 0x1ce29c: 0xafc2048c  sw          $v0, 0x48C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE2A0u;
        goto label_1ce2a0;
    }
    ctx->pc = 0x1CE298u;
    {
        const bool branch_taken_0x1ce298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE298u;
        // 0x1ce29c: 0xafc2048c  sw          $v0, 0x48C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce298) {
            ctx->pc = 0x1CE2B0u;
            return;
        }
    }
    ctx->pc = 0x1CE2A0u;
label_1ce2a0:
    // 0x1ce2a0: 0xc073468  jal         func_1CD1A0
label_1ce2a4:
    if (ctx->pc == 0x1CE2A4u) {
        ctx->pc = 0x1CE2A8u;
        goto label_1ce2a8;
    }
    ctx->pc = 0x1CE2A0u;
    SET_GPR_U32(ctx, 31, 0x1CE2A8u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CE2A0u, 0x1CE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2A8u;
label_1ce2a8:
    // 0x1ce2a8: 0x800008  jr          $a0
label_1ce2ac:
    if (ctx->pc == 0x1CE2ACu) {
        ctx->pc = 0x1CE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2A8u;
        // 0x1ce2ac: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE2B0u;
        goto label_fallthrough_0x1ce2a8;
    }
    ctx->pc = 0x1CE2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x1CE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2A8u;
        // 0x1ce2ac: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE2A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ce2a8:
    ctx->pc = 0x1CE2B0u;
}
