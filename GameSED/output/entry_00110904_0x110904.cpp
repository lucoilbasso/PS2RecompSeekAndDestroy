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

// Function: entry_00110904
// Address: 0x110904 - 0x11091c
void entry_00110904_0x110904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110904_0x110904");
#endif

    ctx->pc = 0x110904u;

    // 0x110904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x110904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110908: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x110908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x11090c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x11090cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x110910: 0xaf829118  sw          $v0, -0x6EE8($gp)
    ctx->pc = 0x110910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 2));
    // 0x110914: 0x3e00008  jr          $ra
    ctx->pc = 0x110914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110914u;
        // 0x110918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11091Cu;
}
