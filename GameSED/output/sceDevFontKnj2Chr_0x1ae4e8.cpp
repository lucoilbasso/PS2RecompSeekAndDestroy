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

// Function: sceDevFontKnj2Chr
// Address: 0x1ae4e8 - 0x1ae518
void sceDevFontKnj2Chr_0x1ae4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontKnj2Chr_0x1ae4e8");
#endif

    ctx->pc = 0x1ae4e8u;

    // 0x1ae4e8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1ae4e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1ae4ec: 0x3082ff00  andi        $v0, $a0, 0xFF00
    ctx->pc = 0x1ae4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1ae4f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE4F0u;
    {
        const bool branch_taken_0x1ae4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4F0u;
        // 0x1ae4f4: 0x2482dbdf  addiu       $v0, $a0, -0x2421 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4f0) {
            ctx->pc = 0x1AE510u;
            goto label_1ae510;
        }
    }
    ctx->pc = 0x1AE4F8u;
    // 0x1ae4f8: 0x2c420053  sltiu       $v0, $v0, 0x53
    ctx->pc = 0x1ae4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)83) ? 1 : 0);
    // 0x1ae4fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE4FCu;
    {
        const bool branch_taken_0x1ae4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4FCu;
        // 0x1ae500: 0x2482dc5f  addiu       $v0, $a0, -0x23A1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4fc) {
            ctx->pc = 0x1AE50Cu;
            goto label_1ae50c;
        }
    }
    ctx->pc = 0x1AE504u;
    // 0x1ae504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE504u;
    {
        const bool branch_taken_0x1ae504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE504u;
        // 0x1ae508: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae504) {
            ctx->pc = 0x1AE510u;
            goto label_1ae510;
        }
    }
    ctx->pc = 0x1AE50Cu;
label_1ae50c:
    // 0x1ae50c: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x1ae50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1ae510:
    // 0x1ae510: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE510u;
        // 0x1ae514: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE518u;
}
