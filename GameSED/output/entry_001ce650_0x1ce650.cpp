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

// Function: entry_001ce650
// Address: 0x1ce650 - 0x1ce680
void entry_001ce650_0x1ce650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce650_0x1ce650");
#endif

    ctx->pc = 0x1ce650u;

    // 0x1ce650: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1ce650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1ce654: 0x54e20016  bnel        $a3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CE654u;
    {
        const bool branch_taken_0x1ce654 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ce654) {
            ctx->pc = 0x1CE658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE654u;
            // 0x1ce658: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6B0u;
            return;
        }
    }
    ctx->pc = 0x1CE65Cu;
    // 0x1ce65c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x1ce65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1ce660: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE660u;
    {
        const bool branch_taken_0x1ce660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE660u;
        // 0x1ce664: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce660) {
            ctx->pc = 0x1CE680u;
            return;
        }
    }
    ctx->pc = 0x1CE668u;
    // 0x1ce668: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ce668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce66c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ce66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce670: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1ce670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1ce674: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1ce674u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x1ce678: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE678u;
        // 0x1ce67c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE680u;
}
