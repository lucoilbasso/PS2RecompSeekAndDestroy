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

// Function: entry_001a4214
// Address: 0x1a4214 - 0x1a4238
void entry_001a4214_0x1a4214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4214_0x1a4214");
#endif

    switch (ctx->pc) {
        case 0x1a4234u: goto label_1a4234;
        default: break;
    }

    ctx->pc = 0x1a4214u;

    // 0x1a4214: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4214u;
    {
        const bool branch_taken_0x1a4214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4214) {
            ctx->pc = 0x1A4218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4214u;
            // 0x1a4218: 0x8f84918c  lw          $a0, -0x6E74($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4238u;
            return;
        }
    }
    ctx->pc = 0x1A421Cu;
    // 0x1a421c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1a421cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4220: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a4220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a4224: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4224u;
    {
        const bool branch_taken_0x1a4224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4224) {
            ctx->pc = 0x1A4228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4224u;
            // 0x1a4228: 0x8f84918c  lw          $a0, -0x6E74($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4238u;
            return;
        }
    }
    ctx->pc = 0x1A422Cu;
    // 0x1a422c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A422Cu;
    SET_GPR_U32(ctx, 31, 0x1A4234u);
    ctx->pc = 0x1A4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A422Cu;
    // 0x1a4230: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A422Cu, 0x1A4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4234u;
label_1a4234:
    // 0x1a4234: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a4234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    ctx->pc = 0x1a4238u;
}
