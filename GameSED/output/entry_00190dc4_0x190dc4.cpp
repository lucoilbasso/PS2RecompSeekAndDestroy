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

// Function: entry_00190dc4
// Address: 0x190dc4 - 0x190de4
void entry_00190dc4_0x190dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190dc4_0x190dc4");
#endif

    ctx->pc = 0x190dc4u;

    // 0x190dc4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x190dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x190dc8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x190dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x190dcc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x190dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x190dd0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x190dd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190dd4: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x190dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x190dd8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x190dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x190ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x190DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DDCu;
        // 0x190de0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190DE4u;
}
