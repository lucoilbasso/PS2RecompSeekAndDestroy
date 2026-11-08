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

// Function: entry_001913b0
// Address: 0x1913b0 - 0x1913c8
void entry_001913b0_0x1913b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001913b0_0x1913b0");
#endif

    switch (ctx->pc) {
        case 0x1913b8u: goto label_1913b8;
        default: break;
    }

    ctx->pc = 0x1913b0u;

    // 0x1913b0: 0xc062ce8  jal         func_18B3A0
    ctx->pc = 0x1913B0u;
    SET_GPR_U32(ctx, 31, 0x1913B8u);
    ctx->pc = 0x1913B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913B0u;
    // 0x1913b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B3A0u, 0x1913B0u, 0x1913B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913B8u;
label_1913b8:
    // 0x1913b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1913b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1913bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1913bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1913c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1913C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1913C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913C0u;
        // 0x1913c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1913C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1913C8u;
}
