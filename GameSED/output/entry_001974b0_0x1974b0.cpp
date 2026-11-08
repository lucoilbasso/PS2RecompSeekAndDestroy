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

// Function: entry_001974b0
// Address: 0x1974b0 - 0x1974d0
void entry_001974b0_0x1974b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001974b0_0x1974b0");
#endif

    switch (ctx->pc) {
        case 0x1974c8u: goto label_1974c8;
        default: break;
    }

    ctx->pc = 0x1974b0u;

    // 0x1974b0: 0x8fc201c4  lw          $v0, 0x1C4($fp)
    ctx->pc = 0x1974b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 452)));
    // 0x1974b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1974B4u;
    {
        const bool branch_taken_0x1974b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1974b4) {
            ctx->pc = 0x1974B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1974B4u;
            // 0x1974b8: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1974D0u;
            return;
        }
    }
    ctx->pc = 0x1974BCu;
    // 0x1974bc: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1974bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1974c0: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x1974C0u;
    SET_GPR_U32(ctx, 31, 0x1974C8u);
    ctx->pc = 0x1974C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974C0u;
    // 0x1974c4: 0x24848de0  addiu       $a0, $a0, -0x7220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x1974C0u, 0x1974C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974C8u;
label_1974c8:
    // 0x1974c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1974C8u;
    {
        const bool branch_taken_0x1974c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974C8u;
        // 0x1974cc: 0x8ed101b4  lw          $s1, 0x1B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974c8) {
            ctx->pc = 0x1974DCu;
            return;
        }
    }
    ctx->pc = 0x1974D0u;
}
