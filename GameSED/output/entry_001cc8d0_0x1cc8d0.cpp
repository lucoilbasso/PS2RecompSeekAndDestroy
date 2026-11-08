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

// Function: entry_001cc8d0
// Address: 0x1cc8d0 - 0x1cc900
void entry_001cc8d0_0x1cc8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc8d0_0x1cc8d0");
#endif

    ctx->pc = 0x1cc8d0u;

    // 0x1cc8d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1cc8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc8d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1cc8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cc8d8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1cc8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc8dc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1cc8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1cc8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cc8e4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1cc8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cc8e8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1cc8e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cc8ec: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1cc8ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc8f0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1cc8f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc8f4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1cc8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1cc8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8F8u;
        // 0x1cc8fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC900u;
}
