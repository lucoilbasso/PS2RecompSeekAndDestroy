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

// Function: entry_00102218
// Address: 0x102218 - 0x102240
void entry_00102218_0x102218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102218_0x102218");
#endif

    ctx->pc = 0x102218u;

    // 0x102218: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x102218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x10221c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x10221cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102220: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102220u;
    {
        const bool branch_taken_0x102220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102220u;
        // 0x102224: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102220) {
            ctx->pc = 0x102240u;
            return;
        }
    }
    ctx->pc = 0x102228u;
    // 0x102228: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10222c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102230: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0
    ctx->pc = 0x102230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    // 0x102234: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x102234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x102238: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102238u;
    SET_GPR_U32(ctx, 31, 0x102240u);
    ctx->pc = 0x10223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102238u;
    // 0x10223c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102238u, 0x102240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102240u;
}
