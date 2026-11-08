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

// Function: entry_00197cac
// Address: 0x197cac - 0x197cd0
void entry_00197cac_0x197cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197cac_0x197cac");
#endif

    ctx->pc = 0x197cacu;

    // 0x197cac: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x197cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197cb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x197cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197cbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x197cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197cc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x197cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197cc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x197cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x197CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CC8u;
        // 0x197ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197CD0u;
}
