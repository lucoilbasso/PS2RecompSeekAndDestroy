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

// Function: entry_0017c118
// Address: 0x17c118 - 0x17c138
void entry_0017c118_0x17c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c118_0x17c118");
#endif

    switch (ctx->pc) {
        case 0x17c130u: goto label_17c130;
        default: break;
    }

    ctx->pc = 0x17c118u;

    // 0x17c118: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c11c: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C11Cu;
    {
        const bool branch_taken_0x17c11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x17C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C11Cu;
        // 0x17c120: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c11c) {
            ctx->pc = 0x17C138u;
            return;
        }
    }
    ctx->pc = 0x17C124u;
    // 0x17c124: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x17c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17c128: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C128u;
    SET_GPR_U32(ctx, 31, 0x17C130u);
    ctx->pc = 0x17C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C128u;
    // 0x17c12c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C128u, 0x17C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C130u;
label_17c130:
    // 0x17c130: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C130u;
    {
        const bool branch_taken_0x17c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C130u;
        // 0x17c134: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c130) {
            ctx->pc = 0x17C150u;
            return;
        }
    }
    ctx->pc = 0x17C138u;
}
