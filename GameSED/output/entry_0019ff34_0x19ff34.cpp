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

// Function: entry_0019ff34
// Address: 0x19ff34 - 0x19ff54
void entry_0019ff34_0x19ff34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ff34_0x19ff34");
#endif

    ctx->pc = 0x19ff34u;

    // 0x19ff34: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x19ff38: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x19ff38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x19ff3c: 0xac30f640  sw          $s0, -0x9C0($at)
    ctx->pc = 0x19ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964800), GPR_U32(ctx, 16));
    // 0x19ff40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ff40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ff44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ff44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ff48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ff48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ff4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF4Cu;
        // 0x19ff50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF54u;
}
