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

// Function: entry_0017be00
// Address: 0x17be00 - 0x17be20
void entry_0017be00_0x17be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be00_0x17be00");
#endif

    switch (ctx->pc) {
        case 0x17be14u: goto label_17be14;
        default: break;
    }

    ctx->pc = 0x17be00u;

    // 0x17be00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17be04: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BE04u;
    {
        const bool branch_taken_0x17be04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE04u;
        // 0x17be08: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be04) {
            ctx->pc = 0x17BE20u;
            return;
        }
    }
    ctx->pc = 0x17BE0Cu;
    // 0x17be0c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17BE0Cu;
    SET_GPR_U32(ctx, 31, 0x17BE14u);
    ctx->pc = 0x17BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE0Cu;
    // 0x17be10: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17BE0Cu, 0x17BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE14u;
label_17be14:
    // 0x17be14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BE14u;
    {
        const bool branch_taken_0x17be14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE14u;
        // 0x17be18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be14) {
            ctx->pc = 0x17BE34u;
            return;
        }
    }
    ctx->pc = 0x17BE1Cu;
    // 0x17be1c: 0x0  nop
    ctx->pc = 0x17be1cu;
    // NOP
    ctx->pc = 0x17be20u;
}
