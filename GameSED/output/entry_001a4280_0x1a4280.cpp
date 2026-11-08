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

// Function: entry_001a4280
// Address: 0x1a4280 - 0x1a429c
void entry_001a4280_0x1a4280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4280_0x1a4280");
#endif

    switch (ctx->pc) {
        case 0x1a4288u: goto label_1a4288;
        default: break;
    }

    ctx->pc = 0x1a4280u;

    // 0x1a4280: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A4280u;
    SET_GPR_U32(ctx, 31, 0x1A4288u);
    ctx->pc = 0x1A4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4280u;
    // 0x1a4284: 0xaf829188  sw          $v0, -0x6E78($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A4280u, 0x1A4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4288u;
label_1a4288:
    // 0x1a4288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a428c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a428cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4294: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4294u;
        // 0x1a4298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A429Cu;
}
