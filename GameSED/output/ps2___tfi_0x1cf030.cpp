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

// Function: __tfi
// Address: 0x1cf030 - 0x1cf064
void ps2___tfi_0x1cf030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfi_0x1cf030");
#endif

    ctx->pc = 0x1cf030u;

    // 0x1cf030: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cf030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cf034: 0x2445de40  addiu       $a1, $v0, -0x21C0
    ctx->pc = 0x1cf034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958656));
    // 0x1cf038: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DE40u));
    // 0x1cf03c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF03Cu;
    {
        const bool branch_taken_0x1cf03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF03Cu;
        // 0x1cf040: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf03c) {
            ctx->pc = 0x1CF05Cu;
            goto label_1cf05c;
        }
    }
    ctx->pc = 0x1CF044u;
    // 0x1cf044: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cf044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cf048: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cf048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cf04c: 0x2463c180  addiu       $v1, $v1, -0x3E80
    ctx->pc = 0x1cf04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951296));
    // 0x1cf050: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cf050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x1cf054: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cf058: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1cf058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1cf05c:
    // 0x1cf05c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF064u;
}
