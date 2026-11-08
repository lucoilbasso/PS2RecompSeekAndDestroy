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

// Function: entry_00112b18
// Address: 0x112b18 - 0x112b38
void entry_00112b18_0x112b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b18_0x112b18");
#endif

    ctx->pc = 0x112b18u;

    // 0x112b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x112b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112b24: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x112b24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x112b28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x112b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x112b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112b30: 0x3e00008  jr          $ra
    ctx->pc = 0x112B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B30u;
        // 0x112b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112B38u;
}
