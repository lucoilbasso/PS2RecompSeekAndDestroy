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

// Function: entry_0017c330
// Address: 0x17c330 - 0x17c350
void entry_0017c330_0x17c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c330_0x17c330");
#endif

    switch (ctx->pc) {
        case 0x17c344u: goto label_17c344;
        default: break;
    }

    ctx->pc = 0x17c330u;

    // 0x17c330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c334: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C334u;
    {
        const bool branch_taken_0x17c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C334u;
        // 0x17c338: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c334) {
            ctx->pc = 0x17C350u;
            return;
        }
    }
    ctx->pc = 0x17C33Cu;
    // 0x17c33c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C33Cu;
    SET_GPR_U32(ctx, 31, 0x17C344u);
    ctx->pc = 0x17C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C33Cu;
    // 0x17c340: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C33Cu, 0x17C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C344u;
label_17c344:
    // 0x17c344: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C344u;
    {
        const bool branch_taken_0x17c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C344u;
        // 0x17c348: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c344) {
            ctx->pc = 0x17C364u;
            return;
        }
    }
    ctx->pc = 0x17C34Cu;
    // 0x17c34c: 0x0  nop
    ctx->pc = 0x17c34cu;
    // NOP
    ctx->pc = 0x17c350u;
}
