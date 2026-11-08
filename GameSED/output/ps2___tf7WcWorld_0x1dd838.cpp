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

// Function: __tf7WcWorld
// Address: 0x1dd838 - 0x1dd888
void ps2___tf7WcWorld_0x1dd838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7WcWorld_0x1dd838");
#endif

    switch (ctx->pc) {
        case 0x1dd85cu: goto label_1dd85c;
        case 0x1dd874u: goto label_1dd874;
        default: break;
    }

    ctx->pc = 0x1dd838u;

    // 0x1dd838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd83c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dd840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd844: 0x245015e8  addiu       $s0, $v0, 0x15E8
    ctx->pc = 0x1dd844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5608));
    // 0x1dd848: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4115E8u));
    // 0x1dd84c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD84Cu;
    {
        const bool branch_taken_0x1dd84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD84Cu;
        // 0x1dd850: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd84c) {
            ctx->pc = 0x1DD874u;
            goto label_1dd874;
        }
    }
    ctx->pc = 0x1DD854u;
    // 0x1dd854: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DD854u;
    SET_GPR_U32(ctx, 31, 0x1DD85Cu);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DD854u, 0x1DD85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD85Cu;
label_1dd85c:
    // 0x1dd85c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dd860: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dd860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dd864: 0x24a57f48  addiu       $a1, $a1, 0x7F48
    ctx->pc = 0x1dd864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32584));
    // 0x1dd868: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1dd868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1dd86c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DD86Cu;
    SET_GPR_U32(ctx, 31, 0x1DD874u);
    ctx->pc = 0x1DD870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD86Cu;
    // 0x1dd870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DD86Cu, 0x1DD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD874u;
label_1dd874:
    // 0x1dd874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dd874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd87c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd880: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD880u;
        // 0x1dd884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD888u;
}
