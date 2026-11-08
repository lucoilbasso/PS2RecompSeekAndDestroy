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

// Function: entry_00196818
// Address: 0x196818 - 0x196838
void entry_00196818_0x196818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196818_0x196818");
#endif

    switch (ctx->pc) {
        case 0x196824u: goto label_196824;
        default: break;
    }

    ctx->pc = 0x196818u;

    // 0x196818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19681c: 0xc061422  jal         func_185088
    ctx->pc = 0x19681Cu;
    SET_GPR_U32(ctx, 31, 0x196824u);
    ctx->pc = 0x196820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19681Cu;
    // 0x196820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x19681Cu, 0x196824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196824u;
label_196824:
    // 0x196824: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x196824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x196828: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x196828u;
    {
        const bool branch_taken_0x196828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196828u;
        // 0x19682c: 0x8e5101b4  lw          $s1, 0x1B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196828) {
            ctx->pc = 0x196870u;
            return;
        }
    }
    ctx->pc = 0x196830u;
    // 0x196830: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x196830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x196834: 0x0  nop
    ctx->pc = 0x196834u;
    // NOP
    ctx->pc = 0x196838u;
}
