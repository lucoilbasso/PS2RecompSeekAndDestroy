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

// Function: entry_00103248
// Address: 0x103248 - 0x10326c
void entry_00103248_0x103248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103248_0x103248");
#endif

    ctx->pc = 0x103248u;

    // 0x103248: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x103248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10324c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10324cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103250: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x103250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x103254: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x103254u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103258: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x103258u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10325c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10325cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103260: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x103260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x103264: 0x3e00008  jr          $ra
    ctx->pc = 0x103264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103264u;
        // 0x103268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10326Cu;
}
