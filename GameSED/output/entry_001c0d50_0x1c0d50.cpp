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

// Function: entry_001c0d50
// Address: 0x1c0d50 - 0x1c0d7c
void entry_001c0d50_0x1c0d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0d50_0x1c0d50");
#endif

    switch (ctx->pc) {
        case 0x1c0d58u: goto label_1c0d58;
        default: break;
    }

    ctx->pc = 0x1c0d50u;

    // 0x1c0d50: 0xc070778  jal         func_1C1DE0
    ctx->pc = 0x1C0D50u;
    SET_GPR_U32(ctx, 31, 0x1C0D58u);
    ctx->pc = 0x1C0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D50u;
    // 0x1c0d54: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C0D50u, 0x1C0D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D58u;
label_1c0d58:
    // 0x1c0d58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c0d58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d5c: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x1c0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x1c0d60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D60u;
    {
        const bool branch_taken_0x1c0d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D60u;
        // 0x1c0d64: 0x2685b510  addiu       $a1, $s4, -0x4AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d60) {
            ctx->pc = 0x1C0D84u;
            return;
        }
    }
    ctx->pc = 0x1C0D68u;
    // 0x1c0d68: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0D68u;
    {
        const bool branch_taken_0x1c0d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1C0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D68u;
        // 0x1c0d6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d68) {
            ctx->pc = 0x1C0D88u;
            return;
        }
    }
    ctx->pc = 0x1C0D70u;
    // 0x1c0d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d74: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C0D74u;
    SET_GPR_U32(ctx, 31, 0x1C0D7Cu);
    ctx->pc = 0x1C0D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D74u;
    // 0x1c0d78: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C0D74u, 0x1C0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D7Cu;
}
