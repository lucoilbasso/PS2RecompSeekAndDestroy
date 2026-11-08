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

// Function: entry_001c9d78
// Address: 0x1c9d78 - 0x1c9dc8
void entry_001c9d78_0x1c9d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9d78_0x1c9d78");
#endif

    ctx->pc = 0x1c9d78u;

    // 0x1c9d78: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1C9D78u;
    {
        const bool branch_taken_0x1c9d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D78u;
        // 0x1c9d7c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d78) {
            ctx->pc = 0x1C9F74u;
            return;
        }
    }
    ctx->pc = 0x1C9D80u;
    // 0x1c9d80: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x1c9d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1c9d84: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9D84u;
    {
        const bool branch_taken_0x1c9d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D84u;
        // 0x1c9d88: 0x38e30002  xori        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d84) {
            ctx->pc = 0x1C9DD0u;
            return;
        }
    }
    ctx->pc = 0x1C9D8Cu;
    // 0x1c9d8c: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x1c9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x1c9d90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9D90u;
    {
        const bool branch_taken_0x1c9d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d90) {
            ctx->pc = 0x1C9DC8u;
            return;
        }
    }
    ctx->pc = 0x1C9D98u;
    // 0x1c9d98: 0xdd640000  ld          $a0, 0x0($t3)
    ctx->pc = 0x1c9d98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c9d9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c9d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9da0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1c9da0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1c9da4: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x1c9da4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1c9da8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1c9da8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1c9dac: 0xdd640010  ld          $a0, 0x10($t3)
    ctx->pc = 0x1c9dacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1c9db0: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1c9db0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x1c9db4: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1c9db8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1c9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c9dbc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c9dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c9dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DC0u;
        // 0x1c9dc4: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9DC8u;
}
