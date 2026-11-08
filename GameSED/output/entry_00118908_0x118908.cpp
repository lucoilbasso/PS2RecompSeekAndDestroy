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

// Function: entry_00118908
// Address: 0x118908 - 0x118920
void entry_00118908_0x118908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118908_0x118908");
#endif

    ctx->pc = 0x118908u;

    // 0x118908: 0xae300fec  sw          $s0, 0xFEC($s1)
    ctx->pc = 0x118908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4076), GPR_U32(ctx, 16));
    // 0x11890c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11890cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118914: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118918: 0x3e00008  jr          $ra
    ctx->pc = 0x118918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118918u;
        // 0x11891c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118920u;
}
