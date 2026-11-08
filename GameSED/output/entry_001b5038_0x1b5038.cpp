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

// Function: entry_001b5038
// Address: 0x1b5038 - 0x1b5060
void entry_001b5038_0x1b5038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5038_0x1b5038");
#endif

    ctx->pc = 0x1b5038u;

    // 0x1b5038: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b5038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b503c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b503cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5040: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b5040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b5044: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b5044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5048: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b5048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b504c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b504cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5050: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b5050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5054: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b5054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5058: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5058u;
        // 0x1b505c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5060u;
}
