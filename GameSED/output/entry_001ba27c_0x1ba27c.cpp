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

// Function: entry_001ba27c
// Address: 0x1ba27c - 0x1ba2a0
void entry_001ba27c_0x1ba27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba27c_0x1ba27c");
#endif

    ctx->pc = 0x1ba27cu;

    // 0x1ba27c: 0xae20c0a4  sw          $zero, -0x3F5C($s1)
    ctx->pc = 0x1ba27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951076), GPR_U32(ctx, 0));
    // 0x1ba280: 0xac52c0bc  sw          $s2, -0x3F44($v0)
    ctx->pc = 0x1ba280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951100), GPR_U32(ctx, 18));
    // 0x1ba284: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba28c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ba28cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba290: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ba290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba298: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA298u;
        // 0x1ba29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA2A0u;
}
