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

// Function: entry_001b0314
// Address: 0x1b0314 - 0x1b0348
void entry_001b0314_0x1b0314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0314_0x1b0314");
#endif

    switch (ctx->pc) {
        case 0x1b0328u: goto label_1b0328;
        case 0x1b0340u: goto label_1b0340;
        default: break;
    }

    ctx->pc = 0x1b0314u;

    // 0x1b0314: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1b0314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0318: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b0318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b031c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1b031cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b0320: 0xc06de0a  jal         func_1B7828
    ctx->pc = 0x1B0320u;
    SET_GPR_U32(ctx, 31, 0x1B0328u);
    ctx->pc = 0x1B0324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0320u;
    // 0x1b0324: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7828u, 0x1B0320u, 0x1B0328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0328u;
label_1b0328:
    // 0x1b0328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b0328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b032c: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B032Cu;
    {
        const bool branch_taken_0x1b032c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1b032c) {
            ctx->pc = 0x1B0330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B032Cu;
            // 0x1b0330: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0348u;
            return;
        }
    }
    ctx->pc = 0x1B0334u;
    // 0x1b0334: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b0334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b0338: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B0338u;
    SET_GPR_U32(ctx, 31, 0x1B0340u);
    ctx->pc = 0x1B033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0338u;
    // 0x1b033c: 0x2484aa88  addiu       $a0, $a0, -0x5578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B0338u, 0x1B0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0340u;
label_1b0340:
    // 0x1b0340: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B0340u;
    {
        const bool branch_taken_0x1b0340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0340) {
            ctx->pc = 0x1B0380u;
            return;
        }
    }
    ctx->pc = 0x1B0348u;
}
