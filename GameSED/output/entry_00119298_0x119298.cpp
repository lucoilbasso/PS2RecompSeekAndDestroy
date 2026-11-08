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

// Function: entry_00119298
// Address: 0x119298 - 0x1192ac
void entry_00119298_0x119298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119298_0x119298");
#endif

    switch (ctx->pc) {
        case 0x1192a0u: goto label_1192a0;
        default: break;
    }

    ctx->pc = 0x119298u;

    // 0x119298: 0xc04566c  jal         func_1159B0
    ctx->pc = 0x119298u;
    SET_GPR_U32(ctx, 31, 0x1192A0u);
    ctx->pc = 0x11929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119298u;
    // 0x11929c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x119298u, 0x1192A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192A0u;
label_1192a0:
    // 0x1192a0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1192a4: 0x102200  sll         $a0, $s0, 8
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1192a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1192a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1192acu;
}
