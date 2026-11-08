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

// Function: Cmd_GAME_RESET_Entry__FP15BsSCDEntControl
// Address: 0x11ba10 - 0x11ba4c
void Cmd_GAME_RESET_Entry__FP15BsSCDEntControl_0x11ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GAME_RESET_Entry__FP15BsSCDEntControl_0x11ba10");
#endif

    switch (ctx->pc) {
        case 0x11ba40u: goto label_11ba40;
        default: break;
    }

    ctx->pc = 0x11ba10u;

    // 0x11ba10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ba14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ba18: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x11ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11ba1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BA1Cu;
    {
        const bool branch_taken_0x11ba1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA1Cu;
        // 0x11ba20: 0x8f848d10  lw          $a0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba1c) {
            ctx->pc = 0x11BA38u;
            goto label_11ba38;
        }
    }
    ctx->pc = 0x11BA24u;
    // 0x11ba24: 0x8c820168  lw          $v0, 0x168($a0)
    ctx->pc = 0x11ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x11ba28: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x11ba28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x11ba2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA2Cu;
    {
        const bool branch_taken_0x11ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA2Cu;
        // 0x11ba30: 0xac820168  sw          $v0, 0x168($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba2c) {
            ctx->pc = 0x11BA40u;
            goto label_11ba40;
        }
    }
    ctx->pc = 0x11BA34u;
    // 0x11ba34: 0x0  nop
    ctx->pc = 0x11ba34u;
    // NOP
label_11ba38:
    // 0x11ba38: 0xc044d30  jal         func_1134C0
    ctx->pc = 0x11BA38u;
    SET_GPR_U32(ctx, 31, 0x11BA40u);
    ctx->pc = 0x11BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA38u;
    // 0x11ba3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1134C0u, 0x11BA38u, 0x11BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA40u;
label_11ba40:
    // 0x11ba40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba44: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA44u;
        // 0x11ba48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BA4Cu;
}
