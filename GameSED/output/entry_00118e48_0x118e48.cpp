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

// Function: entry_00118e48
// Address: 0x118e48 - 0x118e84
void entry_00118e48_0x118e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118e48_0x118e48");
#endif

    ctx->pc = 0x118e48u;

label_118e48:
    // 0x118e48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118e4c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x118e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x118e50: 0x0  nop
    ctx->pc = 0x118e50u;
    // NOP
    // 0x118e54: 0x0  nop
    ctx->pc = 0x118e54u;
    // NOP
    // 0x118e58: 0x0  nop
    ctx->pc = 0x118e58u;
    // NOP
    // 0x118e5c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118E5Cu;
    {
        const bool branch_taken_0x118e5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E5Cu;
        // 0x118e60: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e5c) {
            ctx->pc = 0x118E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118e48;
        }
    }
    ctx->pc = 0x118E64u;
    // 0x118e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x118e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118e74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x118e74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x118e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x118e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x118E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E7Cu;
        // 0x118e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E84u;
}
