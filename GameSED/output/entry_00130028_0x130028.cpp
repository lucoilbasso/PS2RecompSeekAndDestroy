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

// Function: entry_00130028
// Address: 0x130028 - 0x130050
void entry_00130028_0x130028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130028_0x130028");
#endif

    switch (ctx->pc) {
        case 0x130030u: goto label_130030;
        default: break;
    }

    ctx->pc = 0x130028u;

    // 0x130028: 0xc04844a  jal         func_121128
    ctx->pc = 0x130028u;
    SET_GPR_U32(ctx, 31, 0x130030u);
    ctx->pc = 0x13002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130028u;
    // 0x13002c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130028u, 0x130030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130030u;
label_130030:
    // 0x130030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130034: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x130034u;
    {
        const bool branch_taken_0x130034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x130038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130034u;
        // 0x130038: 0x268994f0  addiu       $t1, $s4, -0x6B10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130034) {
            ctx->pc = 0x1300A8u;
            return;
        }
    }
    ctx->pc = 0x13003Cu;
    // 0x13003c: 0x268894f0  addiu       $t0, $s4, -0x6B10
    ctx->pc = 0x13003cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939888));
    // 0x130040: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x130040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130048: 0x25050040  addiu       $a1, $t0, 0x40
    ctx->pc = 0x130048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x13004c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130050u;
}
