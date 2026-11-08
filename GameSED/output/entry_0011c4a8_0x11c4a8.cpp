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

// Function: entry_0011c4a8
// Address: 0x11c4a8 - 0x11c4d8
void entry_0011c4a8_0x11c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c4a8_0x11c4a8");
#endif

    switch (ctx->pc) {
        case 0x11c4b8u: goto label_11c4b8;
        case 0x11c4ccu: goto label_11c4cc;
        default: break;
    }

    ctx->pc = 0x11c4a8u;

    // 0x11c4a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4ac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11c4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c4b0: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x11C4B0u;
    SET_GPR_U32(ctx, 31, 0x11C4B8u);
    ctx->pc = 0x11C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4B0u;
    // 0x11c4b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x11C4B0u, 0x11C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4B8u;
label_11c4b8:
    // 0x11c4b8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x11c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11c4bc: 0x8e061cb0  lw          $a2, 0x1CB0($s0)
    ctx->pc = 0x11c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7344)));
    // 0x11c4c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4c4: 0xc063764  jal         func_18DD90
    ctx->pc = 0x11C4C4u;
    SET_GPR_U32(ctx, 31, 0x11C4CCu);
    ctx->pc = 0x11C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4C4u;
    // 0x11c4c8: 0x24a5d230  addiu       $a1, $a1, -0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x11C4C4u, 0x11C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4CCu;
label_11c4cc:
    // 0x11c4cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C4CCu;
    {
        const bool branch_taken_0x11c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4CCu;
        // 0x11c4d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4cc) {
            ctx->pc = 0x11C4FCu;
            return;
        }
    }
    ctx->pc = 0x11C4D4u;
    // 0x11c4d4: 0x0  nop
    ctx->pc = 0x11c4d4u;
    // NOP
    ctx->pc = 0x11c4d8u;
}
