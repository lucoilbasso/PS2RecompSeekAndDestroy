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

// Function: entry_001e07f8
// Address: 0x1e07f8 - 0x1e0828
void entry_001e07f8_0x1e07f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e07f8_0x1e07f8");
#endif

    ctx->pc = 0x1e07f8u;

    // 0x1e07f8: 0xae5001c4  sw          $s0, 0x1C4($s2)
    ctx->pc = 0x1e07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 16));
    // 0x1e07fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e07fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e080c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e080cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0810: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e0810u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0814: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e0814u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e0818: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e0818u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e081c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e081cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e0820: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0820u;
        // 0x1e0824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0828u;
}
