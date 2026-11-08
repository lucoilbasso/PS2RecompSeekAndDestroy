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

// Function: Finish__8WcCdpack
// Address: 0x17d508 - 0x17d548
void Finish__8WcCdpack_0x17d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8WcCdpack_0x17d508");
#endif

    switch (ctx->pc) {
        case 0x17d530u: goto label_17d530;
        case 0x17d538u: goto label_17d538;
        default: break;
    }

    ctx->pc = 0x17d508u;

    // 0x17d508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d50c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d514: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d51c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x17d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17d520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D520u;
    {
        const bool branch_taken_0x17d520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D520u;
        // 0x17d524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d520) {
            ctx->pc = 0x17D530u;
            goto label_17d530;
        }
    }
    ctx->pc = 0x17D528u;
    // 0x17d528: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17D528u;
    SET_GPR_U32(ctx, 31, 0x17D530u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17D528u, 0x17D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D530u;
label_17d530:
    // 0x17d530: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x17D530u;
    SET_GPR_U32(ctx, 31, 0x17D538u);
    ctx->pc = 0x17D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D530u;
    // 0x17d534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x17D530u, 0x17D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D538u;
label_17d538:
    // 0x17d538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d53c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17d53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d540: 0x3e00008  jr          $ra
    ctx->pc = 0x17D540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D540u;
        // 0x17d544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D548u;
}
