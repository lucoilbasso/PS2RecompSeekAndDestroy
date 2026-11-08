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

// Function: entry_00194d50
// Address: 0x194d50 - 0x194d80
void entry_00194d50_0x194d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d50_0x194d50");
#endif

    switch (ctx->pc) {
        case 0x194d68u: goto label_194d68;
        case 0x194d74u: goto label_194d74;
        default: break;
    }

    ctx->pc = 0x194d50u;

    // 0x194d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d54: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x194d58: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x194d5c: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x194d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x194d60: 0xc0653c6  jal         func_194F18
    ctx->pc = 0x194D60u;
    SET_GPR_U32(ctx, 31, 0x194D68u);
    ctx->pc = 0x194D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D60u;
    // 0x194d64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194F18u, 0x194D60u, 0x194D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D68u;
label_194d68:
    // 0x194d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d6c: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x194D6Cu;
    SET_GPR_U32(ctx, 31, 0x194D74u);
    ctx->pc = 0x194D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D6Cu;
    // 0x194d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FC0u, 0x194D6Cu, 0x194D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D74u;
label_194d74:
    // 0x194d74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x194d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x194d78: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x194d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x194d7c: 0x0  nop
    ctx->pc = 0x194d7cu;
    // NOP
    ctx->pc = 0x194d80u;
}
