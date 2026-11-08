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

// Function: entry_001d41fc
// Address: 0x1d41fc - 0x1d422c
void entry_001d41fc_0x1d41fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d41fc_0x1d41fc");
#endif

    ctx->pc = 0x1d41fcu;

    // 0x1d41fc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1d41fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4200: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1d4200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d4204: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1d4204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4208: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1d4208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d420c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1d420cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4210: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1d4210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d4214: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1d4214u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4218: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1d4218u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d421c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1d421cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d4220: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1d4220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d4224: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4224u;
        // 0x1d4228: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D422Cu;
}
