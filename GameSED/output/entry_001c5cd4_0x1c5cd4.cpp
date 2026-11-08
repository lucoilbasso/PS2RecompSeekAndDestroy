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

// Function: entry_001c5cd4
// Address: 0x1c5cd4 - 0x1c5cf4
void entry_001c5cd4_0x1c5cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5cd4_0x1c5cd4");
#endif

    switch (ctx->pc) {
        case 0x1c5cecu: goto label_1c5cec;
        default: break;
    }

    ctx->pc = 0x1c5cd4u;

    // 0x1c5cd4: 0x2642f400  addiu       $v0, $s2, -0xC00
    ctx->pc = 0x1c5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964224));
    // 0x1c5cd8: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1c5cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1c5cdc: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1c5cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c5ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ce4: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1C5CE4u;
    SET_GPR_U32(ctx, 31, 0x1C5CECu);
    ctx->pc = 0x1C5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5CE4u;
    // 0x1c5ce8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1C5CE4u, 0x1C5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CECu;
label_1c5cec:
    // 0x1c5cec: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1c5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1c5cf0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1c5cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c5cf4u;
}
