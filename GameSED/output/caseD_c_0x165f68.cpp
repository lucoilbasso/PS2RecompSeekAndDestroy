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

// Function: caseD_c
// Address: 0x165f68 - 0x165f90
void caseD_c_0x165f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x165f68");
#endif

    switch (ctx->pc) {
        case 0x165f84u: goto label_165f84;
        default: break;
    }

    ctx->pc = 0x165f68u;

    // 0x165f68: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165f6c: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
    ctx->pc = 0x165F6Cu;
    {
        const bool branch_taken_0x165f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165f6c) {
            ctx->pc = 0x165F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165F6Cu;
            // 0x165f70: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x165F74u;
    // 0x165f74: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x165f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x165f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x165f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f7c: 0xc068584  jal         func_1A1610
    ctx->pc = 0x165F7Cu;
    SET_GPR_U32(ctx, 31, 0x165F84u);
    ctx->pc = 0x165F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F7Cu;
    // 0x165f80: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x165F7Cu, 0x165F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F84u;
label_165f84:
    // 0x165f84: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x165f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165f88: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x165F88u;
    {
        const bool branch_taken_0x165f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F88u;
        // 0x165f8c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f88) {
            ctx->pc = 0x166230u;
            return;
        }
    }
    ctx->pc = 0x165F90u;
}
