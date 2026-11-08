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

// Function: entry_00169a58
// Address: 0x169a58 - 0x169a80
void entry_00169a58_0x169a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169a58_0x169a58");
#endif

    ctx->pc = 0x169a58u;

label_169a58:
    // 0x169a58: 0x2483fff1  addiu       $v1, $a0, -0xF
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967281));
label_169a5c:
    // 0x169a5c: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x169a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_169a60:
    // 0x169a60: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
label_169a64:
    if (ctx->pc == 0x169A64u) {
        ctx->pc = 0x169A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A60u;
        // 0x169a64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A68u;
        goto label_169a68;
    }
    ctx->pc = 0x169A60u;
    {
        const bool branch_taken_0x169a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A60u;
        // 0x169a64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a60) {
            ctx->pc = 0x16A080u;
            return;
        }
    }
    ctx->pc = 0x169A68u;
label_169a68:
    // 0x169a68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_169a6c:
    // 0x169a6c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x169a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_169a70:
    // 0x169a70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_169a74:
    // 0x169a74: 0x8c637280  lw          $v1, 0x7280($v1)
    ctx->pc = 0x169a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29312)));
label_169a78:
    // 0x169a78: 0x600008  jr          $v1
label_169a7c:
    if (ctx->pc == 0x169A7Cu) {
        ctx->pc = 0x169A80u;
        goto label_fallthrough_0x169a78;
    }
    ctx->pc = 0x169A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169A78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x169a78:
    ctx->pc = 0x169A80u;
}
