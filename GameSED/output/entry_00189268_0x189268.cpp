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

// Function: entry_00189268
// Address: 0x189268 - 0x18929c
void entry_00189268_0x189268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189268_0x189268");
#endif

    ctx->pc = 0x189268u;

    // 0x189268: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x189268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x18926c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x18926cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189270: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x189270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x189274: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x189274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189278: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x189278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x18927c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x18927cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189280: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x189280u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x189284: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x189284u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189288: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x189288u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18928c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x18928cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x189290: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x189290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x189294: 0x3e00008  jr          $ra
    ctx->pc = 0x189294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189294u;
        // 0x189298: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18929Cu;
}
