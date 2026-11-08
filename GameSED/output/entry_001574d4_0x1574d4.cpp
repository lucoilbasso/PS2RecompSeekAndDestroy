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

// Function: entry_001574d4
// Address: 0x1574d4 - 0x1574f4
void entry_001574d4_0x1574d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001574d4_0x1574d4");
#endif

    ctx->pc = 0x1574d4u;

    // 0x1574d4: 0xae130404  sw          $s3, 0x404($s0)
    ctx->pc = 0x1574d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 19));
    // 0x1574d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1574d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1574dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1574dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1574e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1574e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1574e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1574e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1574e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1574e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1574ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1574ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1574F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574ECu;
        // 0x1574f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1574F4u;
}
