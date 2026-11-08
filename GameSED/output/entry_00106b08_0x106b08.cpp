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

// Function: entry_00106b08
// Address: 0x106b08 - 0x106b24
void entry_00106b08_0x106b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106b08_0x106b08");
#endif

    switch (ctx->pc) {
        case 0x106b18u: goto label_106b18;
        default: break;
    }

    ctx->pc = 0x106b08u;

    // 0x106b08: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x106b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x106b0c: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x106b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x106b10: 0xc060e56  jal         func_183958
    ctx->pc = 0x106B10u;
    SET_GPR_U32(ctx, 31, 0x106B18u);
    ctx->pc = 0x106B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B10u;
    // 0x106b14: 0x8d05000c  lw          $a1, 0xC($t0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x106B10u, 0x106B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B18u;
label_106b18:
    // 0x106b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x106B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B1Cu;
        // 0x106b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106B24u;
}
