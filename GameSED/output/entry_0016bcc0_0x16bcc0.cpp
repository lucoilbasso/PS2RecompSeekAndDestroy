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

// Function: entry_0016bcc0
// Address: 0x16bcc0 - 0x16bce0
void entry_0016bcc0_0x16bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bcc0_0x16bcc0");
#endif

    ctx->pc = 0x16bcc0u;

    // 0x16bcc0: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x16bcc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bcc4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x16bcc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16bcc8: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x16bcc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16bccc: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x16bcccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcd0: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x16bcd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16bcd4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x16bcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16bcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x16BCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCD8u;
        // 0x16bcdc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCE0u;
}
