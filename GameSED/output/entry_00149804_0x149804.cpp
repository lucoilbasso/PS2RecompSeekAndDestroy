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

// Function: entry_00149804
// Address: 0x149804 - 0x149820
void entry_00149804_0x149804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149804_0x149804");
#endif

    switch (ctx->pc) {
        case 0x14980cu: goto label_14980c;
        default: break;
    }

    ctx->pc = 0x149804u;

    // 0x149804: 0xc05254a  jal         func_149528
    ctx->pc = 0x149804u;
    SET_GPR_U32(ctx, 31, 0x14980Cu);
    ctx->pc = 0x149808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149804u;
    // 0x149808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149528u, 0x149804u, 0x14980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14980Cu;
label_14980c:
    // 0x14980c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14980cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x149810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149818: 0x3e00008  jr          $ra
    ctx->pc = 0x149818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149818u;
        // 0x14981c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149820u;
}
