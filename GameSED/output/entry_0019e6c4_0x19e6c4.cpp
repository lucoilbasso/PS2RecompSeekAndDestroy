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

// Function: entry_0019e6c4
// Address: 0x19e6c4 - 0x19e6e8
void entry_0019e6c4_0x19e6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e6c4_0x19e6c4");
#endif

    ctx->pc = 0x19e6c4u;

    // 0x19e6c4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19E6C4u;
    {
        const bool branch_taken_0x19e6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6C4u;
        // 0x19e6c8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6c4) {
            ctx->pc = 0x19E680u;
            return;
        }
    }
    ctx->pc = 0x19E6CCu;
    // 0x19e6cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e6d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19e6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e6d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19e6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19e6dc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E0u;
        // 0x19e6e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E6E8u;
}
