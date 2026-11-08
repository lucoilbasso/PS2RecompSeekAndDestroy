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

// Function: entry_001caf84
// Address: 0x1caf84 - 0x1cafa8
void entry_001caf84_0x1caf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caf84_0x1caf84");
#endif

    switch (ctx->pc) {
        case 0x1caf8cu: goto label_1caf8c;
        default: break;
    }

    ctx->pc = 0x1caf84u;

    // 0x1caf84: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CAF84u;
    SET_GPR_U32(ctx, 31, 0x1CAF8Cu);
    ctx->pc = 0x1CAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF84u;
    // 0x1caf88: 0x8e44aa44  lw          $a0, -0x55BC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CAF84u, 0x1CAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF8Cu;
label_1caf8c:
    // 0x1caf8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1caf8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1caf90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caf98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1caf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caf9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1caf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cafa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFA0u;
        // 0x1cafa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAFA8u;
}
