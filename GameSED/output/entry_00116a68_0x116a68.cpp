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

// Function: entry_00116a68
// Address: 0x116a68 - 0x116a8c
void entry_00116a68_0x116a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a68_0x116a68");
#endif

    switch (ctx->pc) {
        case 0x116a88u: goto label_116a88;
        default: break;
    }

    ctx->pc = 0x116a68u;

    // 0x116a68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x116a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x116a6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116a70: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x116a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116a74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116a78: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116A78u;
    {
        const bool branch_taken_0x116a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x116A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A78u;
        // 0x116a7c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a78) {
            ctx->pc = 0x116A8Cu;
            return;
        }
    }
    ctx->pc = 0x116A80u;
    // 0x116a80: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116A80u;
    SET_GPR_U32(ctx, 31, 0x116A88u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116A80u, 0x116A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A88u;
label_116a88:
    // 0x116a88: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x116a88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x116a8cu;
}
