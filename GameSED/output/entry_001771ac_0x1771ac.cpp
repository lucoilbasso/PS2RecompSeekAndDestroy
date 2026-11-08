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

// Function: entry_001771ac
// Address: 0x1771ac - 0x1771e0
void entry_001771ac_0x1771ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001771ac_0x1771ac");
#endif

    ctx->pc = 0x1771acu;

    // 0x1771ac: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1771b0: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1771b4: 0x8f848c6c  lw          $a0, -0x7394($gp)
    ctx->pc = 0x1771b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x1771b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1771bc: 0xac710030  sw          $s1, 0x30($v1)
    ctx->pc = 0x1771bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 17));
    // 0x1771c0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1771c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1771c4: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1771c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1771c8: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1771c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1771cc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1771ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1771d0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1771d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1771d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1771d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1771d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1771D8u;
    SET_GPR_U32(ctx, 31, 0x1771E0u);
    ctx->pc = 0x1771DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771D8u;
    // 0x1771dc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1771D8u, 0x1771E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771E0u;
}
