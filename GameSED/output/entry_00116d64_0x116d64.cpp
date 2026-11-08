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

// Function: entry_00116d64
// Address: 0x116d64 - 0x116d94
void entry_00116d64_0x116d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d64_0x116d64");
#endif

    switch (ctx->pc) {
        case 0x116d70u: goto label_116d70;
        case 0x116d90u: goto label_116d90;
        default: break;
    }

    ctx->pc = 0x116d64u;

    // 0x116d64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x116d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x116d68: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116D68u;
    SET_GPR_U32(ctx, 31, 0x116D70u);
    ctx->pc = 0x116D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D68u;
    // 0x116d6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116D68u, 0x116D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D70u;
label_116d70:
    // 0x116d70: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x116d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116d74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x116d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x116d7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x116d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116d80: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116D80u;
    {
        const bool branch_taken_0x116d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x116D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D80u;
        // 0x116d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d80) {
            ctx->pc = 0x116D94u;
            return;
        }
    }
    ctx->pc = 0x116D88u;
    // 0x116d88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x116D88u;
    SET_GPR_U32(ctx, 31, 0x116D90u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x116D88u, 0x116D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D90u;
label_116d90:
    // 0x116d90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116d94u;
}
