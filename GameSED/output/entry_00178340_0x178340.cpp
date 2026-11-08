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

// Function: entry_00178340
// Address: 0x178340 - 0x178368
void entry_00178340_0x178340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178340_0x178340");
#endif

    switch (ctx->pc) {
        case 0x178364u: goto label_178364;
        default: break;
    }

    ctx->pc = 0x178340u;

    // 0x178340: 0x26520048  addiu       $s2, $s2, 0x48
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x178344: 0x2aa20028  slti        $v0, $s5, 0x28
    ctx->pc = 0x178344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x178348: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x178348u;
    {
        const bool branch_taken_0x178348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178348u;
        // 0x17834c: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178348) {
            ctx->pc = 0x1782A8u;
            return;
        }
    }
    ctx->pc = 0x178350u;
    // 0x178350: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x178354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178358: 0x24a579e0  addiu       $a1, $a1, 0x79E0
    ctx->pc = 0x178358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31200));
    // 0x17835c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17835Cu;
    SET_GPR_U32(ctx, 31, 0x178364u);
    ctx->pc = 0x178360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17835Cu;
    // 0x178360: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17835Cu, 0x178364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178364u;
label_178364:
    // 0x178364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x178368u;
}
