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

// Function: entry_0017b4a0
// Address: 0x17b4a0 - 0x17b4c0
void entry_0017b4a0_0x17b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b4a0_0x17b4a0");
#endif

    switch (ctx->pc) {
        case 0x17b4b4u: goto label_17b4b4;
        default: break;
    }

    ctx->pc = 0x17b4a0u;

    // 0x17b4a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b4a4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B4A4u;
    {
        const bool branch_taken_0x17b4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4A4u;
        // 0x17b4a8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4a4) {
            ctx->pc = 0x17B4C0u;
            return;
        }
    }
    ctx->pc = 0x17B4ACu;
    // 0x17b4ac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17B4ACu;
    SET_GPR_U32(ctx, 31, 0x17B4B4u);
    ctx->pc = 0x17B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4ACu;
    // 0x17b4b0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17B4ACu, 0x17B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4B4u;
label_17b4b4:
    // 0x17b4b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B4B4u;
    {
        const bool branch_taken_0x17b4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4B4u;
        // 0x17b4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4b4) {
            ctx->pc = 0x17B4D4u;
            return;
        }
    }
    ctx->pc = 0x17B4BCu;
    // 0x17b4bc: 0x0  nop
    ctx->pc = 0x17b4bcu;
    // NOP
    ctx->pc = 0x17b4c0u;
}
