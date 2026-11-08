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

// Function: entry_00182940
// Address: 0x182940 - 0x182960
void entry_00182940_0x182940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182940_0x182940");
#endif

    switch (ctx->pc) {
        case 0x18294cu: goto label_18294c;
        default: break;
    }

    ctx->pc = 0x182940u;

    // 0x182940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182944: 0xc0600a8  jal         func_1802A0
    ctx->pc = 0x182944u;
    SET_GPR_U32(ctx, 31, 0x18294Cu);
    ctx->pc = 0x182948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182944u;
    // 0x182948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1802A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1802A0u, 0x182944u, 0x18294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18294Cu;
label_18294c:
    // 0x18294c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18294cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182958: 0x3e00008  jr          $ra
    ctx->pc = 0x182958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182958u;
        // 0x18295c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182960u;
}
