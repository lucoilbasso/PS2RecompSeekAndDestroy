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

// Function: entry_00160b58
// Address: 0x160b58 - 0x160b74
void entry_00160b58_0x160b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b58_0x160b58");
#endif

    switch (ctx->pc) {
        case 0x160b70u: goto label_160b70;
        default: break;
    }

    ctx->pc = 0x160b58u;

    // 0x160b58: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x160b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160b5c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x160b60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160B60u;
    {
        const bool branch_taken_0x160b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b60) {
            ctx->pc = 0x160B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160B60u;
            // 0x160b64: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B74u;
            return;
        }
    }
    ctx->pc = 0x160B68u;
    // 0x160b68: 0xc05767a  jal         func_15D9E8
    ctx->pc = 0x160B68u;
    SET_GPR_U32(ctx, 31, 0x160B70u);
    ctx->pc = 0x160B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B68u;
    // 0x160b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D9E8u, 0x160B68u, 0x160B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B70u;
label_160b70:
    // 0x160b70: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x160b70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x160b74u;
}
