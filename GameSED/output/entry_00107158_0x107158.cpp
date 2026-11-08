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

// Function: entry_00107158
// Address: 0x107158 - 0x10717c
void entry_00107158_0x107158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107158_0x107158");
#endif

    ctx->pc = 0x107158u;

    // 0x107158: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x107158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10715c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x10715cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x107160: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x107160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107164: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x107164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x107168: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107168u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10716c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x10716cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x107170: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x107170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107174: 0x3e00008  jr          $ra
    ctx->pc = 0x107174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107174u;
        // 0x107178: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10717Cu;
}
