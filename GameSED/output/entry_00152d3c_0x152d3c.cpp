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

// Function: entry_00152d3c
// Address: 0x152d3c - 0x152d64
void entry_00152d3c_0x152d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152d3c_0x152d3c");
#endif

    ctx->pc = 0x152d3cu;

    // 0x152d3c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x152d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152d40: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x152d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x152d44: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x152d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152d48: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x152d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x152d4c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x152d4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152d50: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x152d50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x152d54: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x152d54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152d58: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x152d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x152D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D5Cu;
        // 0x152d60: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152D64u;
}
