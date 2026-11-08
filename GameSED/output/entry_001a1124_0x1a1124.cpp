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

// Function: entry_001a1124
// Address: 0x1a1124 - 0x1a1158
void entry_001a1124_0x1a1124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1124_0x1a1124");
#endif

    switch (ctx->pc) {
        case 0x1a114cu: goto label_1a114c;
        default: break;
    }

    ctx->pc = 0x1a1124u;

    // 0x1a1124: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a1124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1128: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a1128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a112c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1130: 0x8c422c08  lw          $v0, 0x2C08($v0)
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
    // 0x1a1134: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1134u;
    {
        const bool branch_taken_0x1a1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1134u;
        // 0x1a1138: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1134) {
            ctx->pc = 0x1A1158u;
            return;
        }
    }
    ctx->pc = 0x1A113Cu;
    // 0x1a113c: 0x25258888  addiu       $a1, $t1, -0x7778
    ctx->pc = 0x1a113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936712));
    // 0x1a1140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1144: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1144u;
    SET_GPR_U32(ctx, 31, 0x1A114Cu);
    ctx->pc = 0x1A1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1144u;
    // 0x1a1148: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1144u, 0x1A114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A114Cu;
label_1a114c:
    // 0x1a114c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A114Cu;
    {
        const bool branch_taken_0x1a114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a114c) {
            ctx->pc = 0x1A1164u;
            return;
        }
    }
    ctx->pc = 0x1A1154u;
    // 0x1a1154: 0x0  nop
    ctx->pc = 0x1a1154u;
    // NOP
    ctx->pc = 0x1a1158u;
}
