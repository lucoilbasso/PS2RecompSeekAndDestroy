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

// Function: Finish__7WcActor
// Address: 0x19a608 - 0x19a654
void Finish__7WcActor_0x19a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcActor_0x19a608");
#endif

    switch (ctx->pc) {
        case 0x19a62cu: goto label_19a62c;
        case 0x19a63cu: goto label_19a63c;
        case 0x19a644u: goto label_19a644;
        default: break;
    }

    ctx->pc = 0x19a608u;

    // 0x19a608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a614: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a618: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x19a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x19a61c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A61Cu;
    {
        const bool branch_taken_0x19a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a61c) {
            ctx->pc = 0x19A620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A61Cu;
            // 0x19a620: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A630u;
            goto label_19a630;
        }
    }
    ctx->pc = 0x19A624u;
    // 0x19a624: 0xc066996  jal         func_19A658
    ctx->pc = 0x19A624u;
    SET_GPR_U32(ctx, 31, 0x19A62Cu);
    ctx->pc = 0x19A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A658u, 0x19A624u, 0x19A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A62Cu;
label_19a62c:
    // 0x19a62c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x19a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
label_19a630:
    // 0x19a630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a634: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x19A634u;
    SET_GPR_U32(ctx, 31, 0x19A63Cu);
    ctx->pc = 0x19A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A634u;
    // 0x19a638: 0x2484deb0  addiu       $a0, $a0, -0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x19A634u, 0x19A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A63Cu;
label_19a63c:
    // 0x19a63c: 0xc06674c  jal         func_199D30
    ctx->pc = 0x19A63Cu;
    SET_GPR_U32(ctx, 31, 0x19A644u);
    ctx->pc = 0x19A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A63Cu;
    // 0x19a640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199D30u, 0x19A63Cu, 0x19A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A644u;
label_19a644:
    // 0x19a644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a64c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A64Cu;
        // 0x19a650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A654u;
}
