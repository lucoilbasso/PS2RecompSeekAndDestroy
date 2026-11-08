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

// Function: entry_001ce3e8
// Address: 0x1ce3e8 - 0x1ce410
void entry_001ce3e8_0x1ce3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce3e8_0x1ce3e8");
#endif

    switch (ctx->pc) {
        case 0x1ce3f8u: goto label_1ce3f8;
        case 0x1ce408u: goto label_1ce408;
        default: break;
    }

    ctx->pc = 0x1ce3e8u;

label_1ce3e8:
    // 0x1ce3e8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_1ce3ec:
    // 0x1ce3ec: 0x8fc50490  lw          $a1, 0x490($fp)
    ctx->pc = 0x1ce3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
label_1ce3f0:
    // 0x1ce3f0: 0xc072eac  jal         func_1CBAB0
label_1ce3f4:
    if (ctx->pc == 0x1CE3F4u) {
        ctx->pc = 0x1CE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F0u;
        // 0x1ce3f4: 0x2444e3e8  addiu       $a0, $v0, -0x1C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3F8u;
        goto label_1ce3f8;
    }
    ctx->pc = 0x1CE3F0u;
    SET_GPR_U32(ctx, 31, 0x1CE3F8u);
    ctx->pc = 0x1CE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3F0u;
    // 0x1ce3f4: 0x2444e3e8  addiu       $a0, $v0, -0x1C18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBAB0u, 0x1CE3F0u, 0x1CE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3F8u;
label_1ce3f8:
    // 0x1ce3f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ce3fc:
    if (ctx->pc == 0x1CE3FCu) {
        ctx->pc = 0x1CE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F8u;
        // 0x1ce3fc: 0xafc20490  sw          $v0, 0x490($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE400u;
        goto label_1ce400;
    }
    ctx->pc = 0x1CE3F8u;
    {
        const bool branch_taken_0x1ce3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F8u;
        // 0x1ce3fc: 0xafc20490  sw          $v0, 0x490($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3f8) {
            ctx->pc = 0x1CE410u;
            return;
        }
    }
    ctx->pc = 0x1CE400u;
label_1ce400:
    // 0x1ce400: 0xc073468  jal         func_1CD1A0
label_1ce404:
    if (ctx->pc == 0x1CE404u) {
        ctx->pc = 0x1CE408u;
        goto label_1ce408;
    }
    ctx->pc = 0x1CE400u;
    SET_GPR_U32(ctx, 31, 0x1CE408u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CE400u, 0x1CE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE408u;
label_1ce408:
    // 0x1ce408: 0x800008  jr          $a0
label_1ce40c:
    if (ctx->pc == 0x1CE40Cu) {
        ctx->pc = 0x1CE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE408u;
        // 0x1ce40c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE410u;
        goto label_fallthrough_0x1ce408;
    }
    ctx->pc = 0x1CE408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x1CE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE408u;
        // 0x1ce40c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ce408:
    ctx->pc = 0x1CE410u;
}
