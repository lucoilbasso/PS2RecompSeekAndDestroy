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

// Function: entry_001109b0
// Address: 0x1109b0 - 0x1109d0
void entry_001109b0_0x1109b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001109b0_0x1109b0");
#endif

    ctx->pc = 0x1109b0u;

    // 0x1109b0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1109b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1109b4: 0x8c70b830  lw          $s0, -0x47D0($v1)
    ctx->pc = 0x1109b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
    // 0x1109b8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x1109b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1109bc: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1109bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1109c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1109C0u;
    {
        const bool branch_taken_0x1109c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109C0u;
        // 0x1109c4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109c0) {
            ctx->pc = 0x1109D0u;
            return;
        }
    }
    ctx->pc = 0x1109C8u;
    // 0x1109c8: 0xc061920  jal         func_186480
    ctx->pc = 0x1109C8u;
    SET_GPR_U32(ctx, 31, 0x1109D0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1109C8u, 0x1109D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109D0u;
}
