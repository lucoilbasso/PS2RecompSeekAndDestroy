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

// Function: entry_00142260
// Address: 0x142260 - 0x142288
void entry_00142260_0x142260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142260_0x142260");
#endif

    switch (ctx->pc) {
        case 0x142268u: goto label_142268;
        default: break;
    }

    ctx->pc = 0x142260u;

    // 0x142260: 0xc04ff88  jal         func_13FE20
    ctx->pc = 0x142260u;
    SET_GPR_U32(ctx, 31, 0x142268u);
    ctx->pc = 0x13FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FE20u, 0x142260u, 0x142268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142268u;
label_142268:
    // 0x142268: 0x3c05ffbf  lui         $a1, 0xFFBF
    ctx->pc = 0x142268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65471 << 16));
    // 0x14226c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142270: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142270u;
    {
        const bool branch_taken_0x142270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142270u;
        // 0x142274: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142270) {
            ctx->pc = 0x142288u;
            return;
        }
    }
    ctx->pc = 0x142278u;
    // 0x142278: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14227c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14227Cu;
    {
        const bool branch_taken_0x14227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14227Cu;
        // 0x142280: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14227c) {
            ctx->pc = 0x142294u;
            return;
        }
    }
    ctx->pc = 0x142284u;
    // 0x142284: 0x0  nop
    ctx->pc = 0x142284u;
    // NOP
    ctx->pc = 0x142288u;
}
