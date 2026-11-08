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

// Function: entry_0016ee84
// Address: 0x16ee84 - 0x16eea8
void entry_0016ee84_0x16ee84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee84_0x16ee84");
#endif

    switch (ctx->pc) {
        case 0x16ee94u: goto label_16ee94;
        default: break;
    }

    ctx->pc = 0x16ee84u;

    // 0x16ee84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16ee84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee8c: 0xc05b040  jal         func_16C100
    ctx->pc = 0x16EE8Cu;
    SET_GPR_U32(ctx, 31, 0x16EE94u);
    ctx->pc = 0x16EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE8Cu;
    // 0x16ee90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C100u, 0x16EE8Cu, 0x16EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE94u;
label_16ee94:
    // 0x16ee94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ee94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ee98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ee9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ee9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16eea0: 0x3e00008  jr          $ra
    ctx->pc = 0x16EEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEA0u;
        // 0x16eea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EEA8u;
}
