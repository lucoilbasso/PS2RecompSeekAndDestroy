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

// Function: entry_00122a50
// Address: 0x122a50 - 0x122a88
void entry_00122a50_0x122a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a50_0x122a50");
#endif

    switch (ctx->pc) {
        case 0x122a58u: goto label_122a58;
        default: break;
    }

    ctx->pc = 0x122a50u;

label_122a50:
    // 0x122a50: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x122A50u;
    SET_GPR_U32(ctx, 31, 0x122A58u);
    ctx->pc = 0x122A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A50u;
    // 0x122a54: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x122A50u, 0x122A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A58u;
label_122a58:
    // 0x122a58: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x122a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x122a5c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x122A5Cu;
    {
        const bool branch_taken_0x122a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x122A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A5Cu;
        // 0x122a60: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a5c) {
            ctx->pc = 0x122A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a50;
        }
    }
    ctx->pc = 0x122A64u;
    // 0x122a64: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x122A64u;
    {
        const bool branch_taken_0x122a64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A64u;
        // 0x122a68: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a64) {
            ctx->pc = 0x122A88u;
            return;
        }
    }
    ctx->pc = 0x122A6Cu;
    // 0x122a6c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x122a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x122a70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x122a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x122a74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x122a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x122a78: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x122a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x122a7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x122A7Cu;
    {
        const bool branch_taken_0x122a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A7Cu;
        // 0x122a80: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a7c) {
            ctx->pc = 0x122A98u;
            return;
        }
    }
    ctx->pc = 0x122A84u;
    // 0x122a84: 0x0  nop
    ctx->pc = 0x122a84u;
    // NOP
    ctx->pc = 0x122a88u;
}
