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

// Function: entry_001e0ffc
// Address: 0x1e0ffc - 0x1e1020
void entry_001e0ffc_0x1e0ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0ffc_0x1e0ffc");
#endif

    ctx->pc = 0x1e0ffcu;

    // 0x1e0ffc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e1000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e1004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e100c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1014: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1e1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1e1018: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1018u;
        // 0x1e101c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1020u;
}
