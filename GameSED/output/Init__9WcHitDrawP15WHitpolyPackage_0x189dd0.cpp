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

// Function: Init__9WcHitDrawP15WHitpolyPackage
// Address: 0x189dd0 - 0x189e0c
void Init__9WcHitDrawP15WHitpolyPackage_0x189dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9WcHitDrawP15WHitpolyPackage_0x189dd0");
#endif

    switch (ctx->pc) {
        case 0x189decu: goto label_189dec;
        default: break;
    }

    ctx->pc = 0x189dd0u;

    // 0x189dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x189dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x189dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ddc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x189ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x189de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189de4: 0xc061258  jal         func_184960
    ctx->pc = 0x189DE4u;
    SET_GPR_U32(ctx, 31, 0x189DECu);
    ctx->pc = 0x189DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DE4u;
    // 0x189de8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x189DE4u, 0x189DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DECu;
label_189dec:
    // 0x189dec: 0x24020106  addiu       $v0, $zero, 0x106
    ctx->pc = 0x189decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x189df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189df4: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x189df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
    // 0x189df8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x189df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x189dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x189dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x189e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x189e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189e04: 0x3e00008  jr          $ra
    ctx->pc = 0x189E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E04u;
        // 0x189e08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189E0Cu;
}
