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

// Function: entry_0012e030
// Address: 0x12e030 - 0x12e048
void entry_0012e030_0x12e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e030_0x12e030");
#endif

    switch (ctx->pc) {
        case 0x12e038u: goto label_12e038;
        default: break;
    }

    ctx->pc = 0x12e030u;

    // 0x12e030: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x12E030u;
    SET_GPR_U32(ctx, 31, 0x12E038u);
    ctx->pc = 0x12E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E030u;
    // 0x12e034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x12E030u, 0x12E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E038u;
label_12e038:
    // 0x12e038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e03c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12e03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e040: 0x3e00008  jr          $ra
    ctx->pc = 0x12E040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E040u;
        // 0x12e044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E048u;
}
