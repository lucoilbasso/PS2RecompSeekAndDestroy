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

// Function: ClassJobRegist__8WcEntity
// Address: 0x1dd3e8 - 0x1dd428
void ClassJobRegist__8WcEntity_0x1dd3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRegist__8WcEntity_0x1dd3e8");
#endif

    switch (ctx->pc) {
        case 0x1dd408u: goto label_1dd408;
        case 0x1dd418u: goto label_1dd418;
        default: break;
    }

    ctx->pc = 0x1dd3e8u;

    // 0x1dd3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3f4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1dd3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1dd3f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd400: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DD400u;
    SET_GPR_U32(ctx, 31, 0x1DD408u);
    ctx->pc = 0x1DD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD400u;
    // 0x1dd404: 0x248415a8  addiu       $a0, $a0, 0x15A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DD400u, 0x1DD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD408u;
label_1dd408:
    // 0x1dd408: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1dd408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1dd40c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd410: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DD410u;
    SET_GPR_U32(ctx, 31, 0x1DD418u);
    ctx->pc = 0x1DD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD410u;
    // 0x1dd414: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DD410u, 0x1DD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD418u;
label_1dd418:
    // 0x1dd418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd41c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd420: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD420u;
        // 0x1dd424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD428u;
}
