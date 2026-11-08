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

// Function: entry_00178840
// Address: 0x178840 - 0x178860
void entry_00178840_0x178840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178840_0x178840");
#endif

    switch (ctx->pc) {
        case 0x17884cu: goto label_17884c;
        default: break;
    }

    ctx->pc = 0x178840u;

    // 0x178840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178844: 0xc05e240  jal         func_178900
    ctx->pc = 0x178844u;
    SET_GPR_U32(ctx, 31, 0x17884Cu);
    ctx->pc = 0x178848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178844u;
    // 0x178848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178900u, 0x178844u, 0x17884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17884Cu;
label_17884c:
    // 0x17884c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17884cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178858: 0x3e00008  jr          $ra
    ctx->pc = 0x178858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178858u;
        // 0x17885c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178860u;
}
