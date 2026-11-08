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

// Function: default
// Address: 0x1166a4 - 0x1166d8
void ps2_default_0x1166a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1166a4");
#endif

    switch (ctx->pc) {
        case 0x1166d0u: goto label_1166d0;
        default: break;
    }

    ctx->pc = 0x1166a4u;

    // 0x1166a4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1166a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1166a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1166ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1166acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1166b0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1166B0u;
    {
        const bool branch_taken_0x1166b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1166b0) {
            ctx->pc = 0x1166B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1166B0u;
            // 0x1166b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1166D8u;
            return;
        }
    }
    ctx->pc = 0x1166B8u;
    // 0x1166b8: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1166b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1166bc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1166bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1166c0: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1166c4: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58
    ctx->pc = 0x1166c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
    // 0x1166c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1166C8u;
    SET_GPR_U32(ctx, 31, 0x1166D0u);
    ctx->pc = 0x1166CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166C8u;
    // 0x1166cc: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1166C8u, 0x1166D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166D0u;
label_1166d0:
    // 0x1166d0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1166D0u;
    {
        const bool branch_taken_0x1166d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166D0u;
        // 0x1166d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166d0) {
            ctx->pc = 0x11675Cu;
            return;
        }
    }
    ctx->pc = 0x1166D8u;
}
