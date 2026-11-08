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

// Function: __tfv
// Address: 0x1cef88 - 0x1cefbc
void ps2___tfv_0x1cef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfv_0x1cef88");
#endif

    ctx->pc = 0x1cef88u;

    // 0x1cef88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cef88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cef8c: 0x2445de28  addiu       $a1, $v0, -0x21D8
    ctx->pc = 0x1cef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
    // 0x1cef90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cef90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DE28u));
    // 0x1cef94: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEF94u;
    {
        const bool branch_taken_0x1cef94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF94u;
        // 0x1cef98: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef94) {
            ctx->pc = 0x1CEFB4u;
            goto label_1cefb4;
        }
    }
    ctx->pc = 0x1CEF9Cu;
    // 0x1cef9c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cefa0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cefa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cefa4: 0x2463c168  addiu       $v1, $v1, -0x3E98
    ctx->pc = 0x1cefa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951272));
    // 0x1cefa8: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cefa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x1cefac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cefacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cefb0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1cefb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1cefb4:
    // 0x1cefb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEFBCu;
}
