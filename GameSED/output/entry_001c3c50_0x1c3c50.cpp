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

// Function: entry_001c3c50
// Address: 0x1c3c50 - 0x1c3c98
void entry_001c3c50_0x1c3c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3c50_0x1c3c50");
#endif

    switch (ctx->pc) {
        case 0x1c3c74u: goto label_1c3c74;
        case 0x1c3c80u: goto label_1c3c80;
        default: break;
    }

    ctx->pc = 0x1c3c50u;

label_1c3c50:
    // 0x1c3c50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3c54: 0x0  nop
    ctx->pc = 0x1c3c54u;
    // NOP
    // 0x1c3c58: 0x0  nop
    ctx->pc = 0x1c3c58u;
    // NOP
    // 0x1c3c5c: 0x0  nop
    ctx->pc = 0x1c3c5cu;
    // NOP
    // 0x1c3c60: 0x0  nop
    ctx->pc = 0x1c3c60u;
    // NOP
    // 0x1c3c64: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3C64u;
    {
        const bool branch_taken_0x1c3c64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3c64) {
            ctx->pc = 0x1C3C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3c50;
        }
    }
    ctx->pc = 0x1C3C6Cu;
    // 0x1c3c6c: 0xc06c004  jal         func_1B0010
    ctx->pc = 0x1C3C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C74u);
    ctx->pc = 0x1C3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C6Cu;
    // 0x1c3c70: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0010u, 0x1C3C6Cu, 0x1C3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C74u;
label_1c3c74:
    // 0x1c3c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c78: 0xc06bc64  jal         func_1AF190
    ctx->pc = 0x1C3C78u;
    SET_GPR_U32(ctx, 31, 0x1C3C80u);
    ctx->pc = 0x1C3C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C78u;
    // 0x1c3c7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF190u, 0x1C3C78u, 0x1C3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C80u;
label_1c3c80:
    // 0x1c3c80: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c3c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3c84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1c3c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3c88: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1c3c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3c8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c3c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C90u;
        // 0x1c3c94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3C98u;
}
