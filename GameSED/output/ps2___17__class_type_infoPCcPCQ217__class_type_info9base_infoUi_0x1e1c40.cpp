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

// Function: __17__class_type_infoPCcPCQ217__class_type_info9base_infoUi
// Address: 0x1e1c40 - 0x1e1c5c
void ps2___17__class_type_infoPCcPCQ217__class_type_info9base_infoUi_0x1e1c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___17__class_type_infoPCcPCQ217__class_type_info9base_infoUi_0x1e1c40");
#endif

    ctx->pc = 0x1e1c40u;

    // 0x1e1c40: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e1c44: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1e1c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1e1c48: 0x24420be8  addiu       $v0, $v0, 0xBE8
    ctx->pc = 0x1e1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3048));
    // 0x1e1c4c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e1c50: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e1c54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C54u;
        // 0x1e1c58: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1C5Cu;
}
