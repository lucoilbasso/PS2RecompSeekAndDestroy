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

// Function: entry_00101f68
// Address: 0x101f68 - 0x101f88
void entry_00101f68_0x101f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101f68_0x101f68");
#endif

    ctx->pc = 0x101f68u;

    // 0x101f68: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x101F68u;
    {
        const bool branch_taken_0x101f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x101f68) {
            ctx->pc = 0x101F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101F68u;
            // 0x101f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101F8Cu;
            return;
        }
    }
    ctx->pc = 0x101F70u;
    // 0x101f70: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x101f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x101f74: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x101f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x101f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101f7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101f80: 0xc04171a  jal         func_105C68
    ctx->pc = 0x101F80u;
    SET_GPR_U32(ctx, 31, 0x101F88u);
    ctx->pc = 0x101F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F80u;
    // 0x101f84: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x101F80u, 0x101F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F88u;
}
