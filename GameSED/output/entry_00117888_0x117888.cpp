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

// Function: entry_00117888
// Address: 0x117888 - 0x1178b0
void entry_00117888_0x117888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117888_0x117888");
#endif

    switch (ctx->pc) {
        case 0x117890u: goto label_117890;
        default: break;
    }

    ctx->pc = 0x117888u;

    // 0x117888: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117888u;
    SET_GPR_U32(ctx, 31, 0x117890u);
    ctx->pc = 0x11788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117888u;
    // 0x11788c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117888u, 0x117890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117890u;
label_117890:
    // 0x117890: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x117894: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x117894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x117898: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x117898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11789c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11789Cu;
    {
        const bool branch_taken_0x11789c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11789Cu;
        // 0x1178a0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11789c) {
            ctx->pc = 0x1178B0u;
            return;
        }
    }
    ctx->pc = 0x1178A4u;
    // 0x1178a4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1178a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1178a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1178a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1178ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1178acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1178b0u;
}
