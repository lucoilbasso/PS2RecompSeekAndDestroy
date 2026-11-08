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

// Function: entry_001be798
// Address: 0x1be798 - 0x1be7c8
void entry_001be798_0x1be798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be798_0x1be798");
#endif

    ctx->pc = 0x1be798u;

    // 0x1be798: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1be798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1be79c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1be79cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1be7a0: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1be7a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1be7a4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1be7a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1be7a8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1be7a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1be7ac: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1be7acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be7b0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1be7b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be7b4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1be7b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be7b8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1be7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be7bc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1be7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7C0u;
        // 0x1be7c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE7C8u;
}
