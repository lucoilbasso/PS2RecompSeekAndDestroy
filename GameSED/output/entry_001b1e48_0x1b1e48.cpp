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

// Function: entry_001b1e48
// Address: 0x1b1e48 - 0x1b1e78
void entry_001b1e48_0x1b1e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1e48_0x1b1e48");
#endif

    switch (ctx->pc) {
        case 0x1b1e68u: goto label_1b1e68;
        default: break;
    }

    ctx->pc = 0x1b1e48u;

label_1b1e48:
    // 0x1b1e48: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1e4c: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x1b1e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1b1e50: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1b1e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1b1e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e58: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b1e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1e5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b1e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e60: 0xc06df7e  jal         func_1B7DF8
    ctx->pc = 0x1B1E60u;
    SET_GPR_U32(ctx, 31, 0x1B1E68u);
    ctx->pc = 0x1B1E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E60u;
    // 0x1b1e64: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF8u, 0x1B1E60u, 0x1B1E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E68u;
label_1b1e68:
    // 0x1b1e68: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B1E68u;
    {
        const bool branch_taken_0x1b1e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E68u;
        // 0x1b1e6c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e68) {
            ctx->pc = 0x1B1E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1e48;
        }
    }
    ctx->pc = 0x1B1E70u;
    // 0x1b1e70: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1B1E70u;
    {
        const bool branch_taken_0x1b1e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E70u;
        // 0x1b1e74: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e70) {
            ctx->pc = 0x1B1F24u;
            return;
        }
    }
    ctx->pc = 0x1B1E78u;
}
