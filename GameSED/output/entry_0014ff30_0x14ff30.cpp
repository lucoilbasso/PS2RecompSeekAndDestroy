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

// Function: entry_0014ff30
// Address: 0x14ff30 - 0x14ff58
void entry_0014ff30_0x14ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ff30_0x14ff30");
#endif

    switch (ctx->pc) {
        case 0x14ff38u: goto label_14ff38;
        default: break;
    }

    ctx->pc = 0x14ff30u;

    // 0x14ff30: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x14FF30u;
    SET_GPR_U32(ctx, 31, 0x14FF38u);
    ctx->pc = 0x14FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF30u;
    // 0x14ff34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x14FF30u, 0x14FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF38u;
label_14ff38:
    // 0x14ff38: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14ff3c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x14ff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x14ff40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FF40u;
    {
        const bool branch_taken_0x14ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff40) {
            ctx->pc = 0x14FF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF40u;
            // 0x14ff44: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF58u;
            return;
        }
    }
    ctx->pc = 0x14FF48u;
    // 0x14ff48: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x14ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x14ff4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14ff4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ff50: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x14ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x14ff54: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x14ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->pc = 0x14ff58u;
}
