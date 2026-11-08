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

// Function: entry_001c5858
// Address: 0x1c5858 - 0x1c5880
void entry_001c5858_0x1c5858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5858_0x1c5858");
#endif

    switch (ctx->pc) {
        case 0x1c5864u: goto label_1c5864;
        default: break;
    }

    ctx->pc = 0x1c5858u;

    // 0x1c5858: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1c5858u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1c585c: 0xc06c694  jal         func_1B1A50
    ctx->pc = 0x1C585Cu;
    SET_GPR_U32(ctx, 31, 0x1C5864u);
    ctx->pc = 0x1C5860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C585Cu;
    // 0x1c5860: 0x2624ee40  addiu       $a0, $s1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A50u, 0x1C585Cu, 0x1C5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5864u;
label_1c5864:
    // 0x1c5864: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5864u;
    {
        const bool branch_taken_0x1c5864 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5864u;
        // 0x1c5868: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5864) {
            ctx->pc = 0x1C5898u;
            return;
        }
    }
    ctx->pc = 0x1C586Cu;
    // 0x1c586c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C586Cu;
    {
        const bool branch_taken_0x1c586c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c586c) {
            ctx->pc = 0x1C5898u;
            return;
        }
    }
    ctx->pc = 0x1C5874u;
    // 0x1c5874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5874u;
    {
        const bool branch_taken_0x1c5874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5874) {
            ctx->pc = 0x1C5888u;
            return;
        }
    }
    ctx->pc = 0x1C587Cu;
    // 0x1c587c: 0x0  nop
    ctx->pc = 0x1c587cu;
    // NOP
    ctx->pc = 0x1c5880u;
}
