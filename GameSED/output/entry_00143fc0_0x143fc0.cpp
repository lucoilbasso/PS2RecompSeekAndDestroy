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

// Function: entry_00143fc0
// Address: 0x143fc0 - 0x143fd8
void entry_00143fc0_0x143fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143fc0_0x143fc0");
#endif

    switch (ctx->pc) {
        case 0x143fccu: goto label_143fcc;
        default: break;
    }

    ctx->pc = 0x143fc0u;

    // 0x143fc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x143fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143fc4: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x143FC4u;
    SET_GPR_U32(ctx, 31, 0x143FCCu);
    ctx->pc = 0x143FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FC4u;
    // 0x143fc8: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x143FC4u, 0x143FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FCCu;
label_143fcc:
    // 0x143fcc: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x143fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x143fd0: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x143fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x143fd4: 0x0  nop
    ctx->pc = 0x143fd4u;
    // NOP
    ctx->pc = 0x143fd8u;
}
