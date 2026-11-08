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

// Function: entry_001c1588
// Address: 0x1c1588 - 0x1c15b0
void entry_001c1588_0x1c1588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1588_0x1c1588");
#endif

    switch (ctx->pc) {
        case 0x1c15acu: goto label_1c15ac;
        default: break;
    }

    ctx->pc = 0x1c1588u;

    // 0x1c1588: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x1c1588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1c158c: 0x8e0b015c  lw          $t3, 0x15C($s0)
    ctx->pc = 0x1c158cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x1c1590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1594: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c1594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c1598: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1c1598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c159c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c159cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15a0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c15a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15a4: 0xc070664  jal         func_1C1990
    ctx->pc = 0x1C15A4u;
    SET_GPR_U32(ctx, 31, 0x1C15ACu);
    ctx->pc = 0x1C15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15A4u;
    // 0x1c15a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1990u, 0x1C15A4u, 0x1C15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15ACu;
label_1c15ac:
    // 0x1c15ac: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1c15acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->pc = 0x1c15b0u;
}
