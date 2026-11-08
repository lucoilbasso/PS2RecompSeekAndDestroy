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

// Function: entry_001579bc
// Address: 0x1579bc - 0x1579e0
void entry_001579bc_0x1579bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001579bc_0x1579bc");
#endif

    ctx->pc = 0x1579bcu;

    // 0x1579bc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1579bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1579c0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1579c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1579c4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1579c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1579c8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1579c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1579cc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1579ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1579d0: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1579d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1579d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1579d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1579d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1579D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1579DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1579D8u;
        // 0x1579dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1579D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1579E0u;
}
