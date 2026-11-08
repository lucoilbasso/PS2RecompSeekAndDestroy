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

// Function: entry_001cb238
// Address: 0x1cb238 - 0x1cb250
void entry_001cb238_0x1cb238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb238_0x1cb238");
#endif

    switch (ctx->pc) {
        case 0x1cb24cu: goto label_1cb24c;
        default: break;
    }

    ctx->pc = 0x1cb238u;

    // 0x1cb238: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1cb238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cb23c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb240: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cb244: 0xc072c0e  jal         func_1CB038
    ctx->pc = 0x1CB244u;
    SET_GPR_U32(ctx, 31, 0x1CB24Cu);
    ctx->pc = 0x1CB248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB244u;
    // 0x1cb248: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB038u, 0x1CB244u, 0x1CB24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB24Cu;
label_1cb24c:
    // 0x1cb24c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cb250u;
}
