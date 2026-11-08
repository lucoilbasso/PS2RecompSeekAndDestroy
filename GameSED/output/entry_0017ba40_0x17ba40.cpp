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

// Function: entry_0017ba40
// Address: 0x17ba40 - 0x17ba60
void entry_0017ba40_0x17ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba40_0x17ba40");
#endif

    switch (ctx->pc) {
        case 0x17ba54u: goto label_17ba54;
        default: break;
    }

    ctx->pc = 0x17ba40u;

    // 0x17ba40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ba44: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BA44u;
    {
        const bool branch_taken_0x17ba44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA44u;
        // 0x17ba48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba44) {
            ctx->pc = 0x17BA60u;
            return;
        }
    }
    ctx->pc = 0x17BA4Cu;
    // 0x17ba4c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17BA4Cu;
    SET_GPR_U32(ctx, 31, 0x17BA54u);
    ctx->pc = 0x17BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA4Cu;
    // 0x17ba50: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17BA4Cu, 0x17BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA54u;
label_17ba54:
    // 0x17ba54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BA54u;
    {
        const bool branch_taken_0x17ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA54u;
        // 0x17ba58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba54) {
            ctx->pc = 0x17BA74u;
            return;
        }
    }
    ctx->pc = 0x17BA5Cu;
    // 0x17ba5c: 0x0  nop
    ctx->pc = 0x17ba5cu;
    // NOP
    ctx->pc = 0x17ba60u;
}
