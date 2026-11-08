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

// Function: entry_001698f8
// Address: 0x1698f8 - 0x169910
void entry_001698f8_0x1698f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001698f8_0x1698f8");
#endif

    switch (ctx->pc) {
        case 0x16990cu: goto label_16990c;
        default: break;
    }

    ctx->pc = 0x1698f8u;

    // 0x1698f8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1698f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1698fc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1698FCu;
    {
        const bool branch_taken_0x1698fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1698fc) {
            ctx->pc = 0x169900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1698FCu;
            // 0x169900: 0x92020c00  lbu         $v0, 0xC00($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169910u;
            return;
        }
    }
    ctx->pc = 0x169904u;
    // 0x169904: 0xc0594ca  jal         func_165328
    ctx->pc = 0x169904u;
    SET_GPR_U32(ctx, 31, 0x16990Cu);
    ctx->pc = 0x169908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169904u;
    // 0x169908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165328u, 0x169904u, 0x16990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16990Cu;
label_16990c:
    // 0x16990c: 0x92020c00  lbu         $v0, 0xC00($s0)
    ctx->pc = 0x16990cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
    ctx->pc = 0x169910u;
}
