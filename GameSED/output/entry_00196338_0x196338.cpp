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

// Function: entry_00196338
// Address: 0x196338 - 0x196358
void entry_00196338_0x196338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196338_0x196338");
#endif

    switch (ctx->pc) {
        case 0x19634cu: goto label_19634c;
        default: break;
    }

    ctx->pc = 0x196338u;

    // 0x196338: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x196338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19633c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196340: 0x24a58338  addiu       $a1, $a1, -0x7CC8
    ctx->pc = 0x196340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
    // 0x196344: 0xc068186  jal         func_1A0618
    ctx->pc = 0x196344u;
    SET_GPR_U32(ctx, 31, 0x19634Cu);
    ctx->pc = 0x196348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196344u;
    // 0x196348: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x196344u, 0x19634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19634Cu;
label_19634c:
    // 0x19634c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x19634Cu;
    {
        const bool branch_taken_0x19634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19634Cu;
        // 0x196350: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19634c) {
            ctx->pc = 0x196658u;
            return;
        }
    }
    ctx->pc = 0x196354u;
    // 0x196354: 0x0  nop
    ctx->pc = 0x196354u;
    // NOP
    ctx->pc = 0x196358u;
}
