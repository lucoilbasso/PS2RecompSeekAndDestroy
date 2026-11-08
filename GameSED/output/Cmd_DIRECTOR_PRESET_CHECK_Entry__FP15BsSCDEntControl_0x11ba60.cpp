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

// Function: Cmd_DIRECTOR_PRESET_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x11ba60 - 0x11ba98
void Cmd_DIRECTOR_PRESET_CHECK_Entry__FP15BsSCDEntControl_0x11ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIRECTOR_PRESET_CHECK_Entry__FP15BsSCDEntControl_0x11ba60");
#endif

    switch (ctx->pc) {
        case 0x11ba78u: goto label_11ba78;
        default: break;
    }

    ctx->pc = 0x11ba60u;

    // 0x11ba60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ba64: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11ba68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11ba6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ba70: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x11BA70u;
    SET_GPR_U32(ctx, 31, 0x11BA78u);
    ctx->pc = 0x11BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA70u;
    // 0x11ba74: 0x8c500154  lw          $s0, 0x154($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x11BA70u, 0x11BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA78u;
label_11ba78:
    // 0x11ba78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11ba78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ba7c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x11ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11ba80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ba80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba84: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x11ba84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x11ba88: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11ba88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11ba8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11ba90: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA90u;
        // 0x11ba94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BA98u;
}
