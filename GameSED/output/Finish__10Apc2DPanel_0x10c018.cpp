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

// Function: Finish__10Apc2DPanel
// Address: 0x10c018 - 0x10c044
void Finish__10Apc2DPanel_0x10c018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__10Apc2DPanel_0x10c018");
#endif

    switch (ctx->pc) {
        case 0x10c02cu: goto label_10c02c;
        case 0x10c034u: goto label_10c034;
        default: break;
    }

    ctx->pc = 0x10c018u;

    // 0x10c018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c024: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x10C024u;
    SET_GPR_U32(ctx, 31, 0x10C02Cu);
    ctx->pc = 0x10C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C024u;
    // 0x10c028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x10C024u, 0x10C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C02Cu;
label_10c02c:
    // 0x10c02c: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x10C02Cu;
    SET_GPR_U32(ctx, 31, 0x10C034u);
    ctx->pc = 0x10C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C02Cu;
    // 0x10c030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x10C02Cu, 0x10C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C034u;
label_10c034:
    // 0x10c034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c038: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10c038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c03c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C03Cu;
        // 0x10c040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C044u;
}
