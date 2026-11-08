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

// Function: entry_00198530
// Address: 0x198530 - 0x198568
void entry_00198530_0x198530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198530_0x198530");
#endif

    switch (ctx->pc) {
        case 0x198538u: goto label_198538;
        default: break;
    }

    ctx->pc = 0x198530u;

label_198530:
    // 0x198530: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x198530u;
    SET_GPR_U32(ctx, 31, 0x198538u);
    ctx->pc = 0x198534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198530u;
    // 0x198534: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x198530u, 0x198538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198538u;
label_198538:
    // 0x198538: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x19853c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19853Cu;
    {
        const bool branch_taken_0x19853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x198540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19853Cu;
        // 0x198540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19853c) {
            ctx->pc = 0x198530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198530;
        }
    }
    ctx->pc = 0x198544u;
    // 0x198544: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x198544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x198548: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x198548u;
    {
        const bool branch_taken_0x198548 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198548u;
        // 0x19854c: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198548) {
            ctx->pc = 0x198568u;
            return;
        }
    }
    ctx->pc = 0x198550u;
    // 0x198550: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x198554: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x198554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x198558: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19855c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x19855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x198560: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x198560u;
    {
        const bool branch_taken_0x198560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198560u;
        // 0x198564: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198560) {
            ctx->pc = 0x198578u;
            return;
        }
    }
    ctx->pc = 0x198568u;
}
