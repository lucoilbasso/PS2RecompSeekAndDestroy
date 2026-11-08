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

// Function: entry_0017c208
// Address: 0x17c208 - 0x17c228
void entry_0017c208_0x17c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c208_0x17c208");
#endif

    switch (ctx->pc) {
        case 0x17c21cu: goto label_17c21c;
        default: break;
    }

    ctx->pc = 0x17c208u;

    // 0x17c208: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c20c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C20Cu;
    {
        const bool branch_taken_0x17c20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C20Cu;
        // 0x17c210: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c20c) {
            ctx->pc = 0x17C228u;
            return;
        }
    }
    ctx->pc = 0x17C214u;
    // 0x17c214: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C214u;
    SET_GPR_U32(ctx, 31, 0x17C21Cu);
    ctx->pc = 0x17C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C214u;
    // 0x17c218: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C214u, 0x17C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C21Cu;
label_17c21c:
    // 0x17c21c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C21Cu;
    {
        const bool branch_taken_0x17c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C21Cu;
        // 0x17c220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c21c) {
            ctx->pc = 0x17C23Cu;
            return;
        }
    }
    ctx->pc = 0x17C224u;
    // 0x17c224: 0x0  nop
    ctx->pc = 0x17c224u;
    // NOP
    ctx->pc = 0x17c228u;
}
