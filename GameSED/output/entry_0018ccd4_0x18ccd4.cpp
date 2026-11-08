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

// Function: entry_0018ccd4
// Address: 0x18ccd4 - 0x18cd04
void entry_0018ccd4_0x18ccd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ccd4_0x18ccd4");
#endif

    ctx->pc = 0x18ccd4u;

    // 0x18ccd4: 0xa6d50000  sh          $s5, 0x0($s6)
    ctx->pc = 0x18ccd4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x18ccd8: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x18ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x18ccdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ccdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18cce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18cce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18cce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18cce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ccec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18ccecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ccf0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18ccf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18ccf4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18ccf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ccf8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x18ccf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18ccfc: 0x3e00008  jr          $ra
    ctx->pc = 0x18CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCFCu;
        // 0x18cd00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CD04u;
}
