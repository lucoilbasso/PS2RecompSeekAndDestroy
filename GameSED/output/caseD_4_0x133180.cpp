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

// Function: caseD_4
// Address: 0x133180 - 0x1331a0
void caseD_4_0x133180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x133180");
#endif

    ctx->pc = 0x133180u;

    // 0x133180: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133184: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133188: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133188u;
    {
        const bool branch_taken_0x133188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133188u;
        // 0x13318c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133188) {
            ctx->pc = 0x1331A0u;
            return;
        }
    }
    ctx->pc = 0x133190u;
    // 0x133190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133194: 0x24a56418  addiu       $a1, $a1, 0x6418
    ctx->pc = 0x133194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25624));
    // 0x133198: 0xc068186  jal         func_1A0618
    ctx->pc = 0x133198u;
    SET_GPR_U32(ctx, 31, 0x1331A0u);
    ctx->pc = 0x13319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133198u;
    // 0x13319c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x133198u, 0x1331A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331A0u;
}
