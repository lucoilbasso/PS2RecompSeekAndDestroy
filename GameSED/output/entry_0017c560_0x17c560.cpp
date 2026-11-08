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

// Function: entry_0017c560
// Address: 0x17c560 - 0x17c598
void entry_0017c560_0x17c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c560_0x17c560");
#endif

    switch (ctx->pc) {
        case 0x17c568u: goto label_17c568;
        default: break;
    }

    ctx->pc = 0x17c560u;

label_17c560:
    // 0x17c560: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x17C560u;
    SET_GPR_U32(ctx, 31, 0x17C568u);
    ctx->pc = 0x17C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C560u;
    // 0x17c564: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x17C560u, 0x17C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C568u;
label_17c568:
    // 0x17c568: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x17c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x17c56c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17C56Cu;
    {
        const bool branch_taken_0x17c56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C56Cu;
        // 0x17c570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c56c) {
            ctx->pc = 0x17C560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c560;
        }
    }
    ctx->pc = 0x17C574u;
    // 0x17c574: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17c574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c578: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C578u;
    {
        const bool branch_taken_0x17c578 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C578u;
        // 0x17c57c: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c578) {
            ctx->pc = 0x17C598u;
            return;
        }
    }
    ctx->pc = 0x17C580u;
    // 0x17c580: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x17c580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x17c584: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17c584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17c588: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17c588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17c58c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x17c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x17c590: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17C590u;
    {
        const bool branch_taken_0x17c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C590u;
        // 0x17c594: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c590) {
            ctx->pc = 0x17C5A8u;
            return;
        }
    }
    ctx->pc = 0x17C598u;
}
