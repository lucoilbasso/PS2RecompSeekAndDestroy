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

// Function: entry_0010a558
// Address: 0x10a558 - 0x10a568
void entry_0010a558_0x10a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a558_0x10a558");
#endif

    ctx->pc = 0x10a558u;

    // 0x10a558: 0xae260048  sw          $a2, 0x48($s1)
    ctx->pc = 0x10a558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 6));
    // 0x10a55c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a560: 0x3e00008  jr          $ra
    ctx->pc = 0x10A560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A560u;
        // 0x10a564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A568u;
}
