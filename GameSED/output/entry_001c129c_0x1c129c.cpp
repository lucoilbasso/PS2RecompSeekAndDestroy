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

// Function: entry_001c129c
// Address: 0x1c129c - 0x1c12bc
void entry_001c129c_0x1c129c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c129c_0x1c129c");
#endif

    ctx->pc = 0x1c129cu;

    // 0x1c129c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1c129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c12a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c12a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c12a4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1c12a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c12a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c12ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c12acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c12b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c12b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c12b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C12B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12B4u;
        // 0x1c12b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C12B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C12BCu;
}
