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

// Function: entry_00183690
// Address: 0x183690 - 0x1836a8
void entry_00183690_0x183690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183690_0x183690");
#endif

    switch (ctx->pc) {
        case 0x18369cu: goto label_18369c;
        default: break;
    }

    ctx->pc = 0x183690u;

    // 0x183690: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x183690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183694: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x183694u;
    SET_GPR_U32(ctx, 31, 0x18369Cu);
    ctx->pc = 0x183698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183694u;
    // 0x183698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x183694u, 0x18369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18369Cu;
label_18369c:
    // 0x18369c: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x18369cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x1836a0: 0xa612002c  sh          $s2, 0x2C($s0)
    ctx->pc = 0x1836a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 18));
    // 0x1836a4: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x1836a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    ctx->pc = 0x1836a8u;
}
