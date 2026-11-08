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

// Function: entry_0016ae2c
// Address: 0x16ae2c - 0x16ae38
void entry_0016ae2c_0x16ae2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae2c_0x16ae2c");
#endif

    switch (ctx->pc) {
        case 0x16ae34u: goto label_16ae34;
        default: break;
    }

    ctx->pc = 0x16ae2cu;

    // 0x16ae2c: 0xc04ca08  jal         func_132820
    ctx->pc = 0x16AE2Cu;
    SET_GPR_U32(ctx, 31, 0x16AE34u);
    ctx->pc = 0x16AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE2Cu;
    // 0x16ae30: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132820u, 0x16AE2Cu, 0x16AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE34u;
label_16ae34:
    // 0x16ae34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16ae34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16ae38u;
}
