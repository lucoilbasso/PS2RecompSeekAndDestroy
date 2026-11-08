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

// Function: entry_001a84d0
// Address: 0x1a84d0 - 0x1a84f8
void entry_001a84d0_0x1a84d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a84d0_0x1a84d0");
#endif

    ctx->pc = 0x1a84d0u;

    // 0x1a84d0: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x1a84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1a84d4: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A84D4u;
    {
        const bool branch_taken_0x1a84d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a84d4) {
            ctx->pc = 0x1A84D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A84D4u;
            // 0x1a84d8: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8500u;
            return;
        }
    }
    ctx->pc = 0x1A84DCu;
    // 0x1a84dc: 0x8f839080  lw          $v1, -0x6F80($gp)
    ctx->pc = 0x1a84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a84e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a84e4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A84E4u;
    {
        const bool branch_taken_0x1a84e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a84e4) {
            ctx->pc = 0x1A84E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A84E4u;
            // 0x1a84e8: 0xaf809080  sw          $zero, -0x6F80($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A850Cu;
            return;
        }
    }
    ctx->pc = 0x1A84ECu;
    // 0x1a84ec: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a84f0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A84F0u;
    SET_GPR_U32(ctx, 31, 0x1A84F8u);
    ctx->pc = 0x1A84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84F0u;
    // 0x1a84f4: 0x2484d948  addiu       $a0, $a0, -0x26B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A84F0u, 0x1A84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84F8u;
}
