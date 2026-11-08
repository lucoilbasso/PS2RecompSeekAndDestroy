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

// Function: entry_00193fa4
// Address: 0x193fa4 - 0x193fcc
void entry_00193fa4_0x193fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193fa4_0x193fa4");
#endif

    switch (ctx->pc) {
        case 0x193fc8u: goto label_193fc8;
        default: break;
    }

    ctx->pc = 0x193fa4u;

    // 0x193fa4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x193fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x193fa8: 0x2c420200  sltiu       $v0, $v0, 0x200
    ctx->pc = 0x193fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x193fac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193FACu;
    {
        const bool branch_taken_0x193fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FACu;
        // 0x193fb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fac) {
            ctx->pc = 0x193FCCu;
            return;
        }
    }
    ctx->pc = 0x193FB4u;
    // 0x193fb4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193fb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fbc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x193fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x193fc0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193FC0u;
    SET_GPR_U32(ctx, 31, 0x193FC8u);
    ctx->pc = 0x193FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193FC0u;
    // 0x193fc4: 0x24a58258  addiu       $a1, $a1, -0x7DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193FC0u, 0x193FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FC8u;
label_193fc8:
    // 0x193fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x193fccu;
}
