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

// Function: entry_001e160c
// Address: 0x1e160c - 0x1e1630
void entry_001e160c_0x1e160c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e160c_0x1e160c");
#endif

    ctx->pc = 0x1e160cu;

    // 0x1e160c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1e160cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1e1610: 0xfc820110  sd          $v0, 0x110($a0)
    ctx->pc = 0x1e1610u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 272), GPR_U64(ctx, 2));
    // 0x1e1614: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x1e1614u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x1e1618: 0xfc830118  sd          $v1, 0x118($a0)
    ctx->pc = 0x1e1618u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 280), GPR_U64(ctx, 3));
    // 0x1e161c: 0xdcc20030  ld          $v0, 0x30($a2)
    ctx->pc = 0x1e161cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1e1620: 0xfc820120  sd          $v0, 0x120($a0)
    ctx->pc = 0x1e1620u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 288), GPR_U64(ctx, 2));
    // 0x1e1624: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x1e1624u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1e1628: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1628u;
        // 0x1e162c: 0xfc830128  sd          $v1, 0x128($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 296), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1630u;
}
