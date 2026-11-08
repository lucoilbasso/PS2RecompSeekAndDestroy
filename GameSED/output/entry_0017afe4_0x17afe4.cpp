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

// Function: entry_0017afe4
// Address: 0x17afe4 - 0x17b008
void entry_0017afe4_0x17afe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017afe4_0x17afe4");
#endif

    ctx->pc = 0x17afe4u;

    // 0x17afe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17afe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17afe8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x17afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x17afec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17afecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17aff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17aff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17aff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aff8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17aff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17affc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17affcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17b000: 0x3e00008  jr          $ra
    ctx->pc = 0x17B000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B000u;
        // 0x17b004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B008u;
}
