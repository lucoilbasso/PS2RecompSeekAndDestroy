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

// Function: entry_001a11f4
// Address: 0x1a11f4 - 0x1a1218
void entry_001a11f4_0x1a11f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a11f4_0x1a11f4");
#endif

    switch (ctx->pc) {
        case 0x1a1210u: goto label_1a1210;
        default: break;
    }

    ctx->pc = 0x1a11f4u;

    // 0x1a11f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a11f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A11F8u;
    {
        const bool branch_taken_0x1a11f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11F8u;
        // 0x1a11fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11f8) {
            ctx->pc = 0x1A1218u;
            return;
        }
    }
    ctx->pc = 0x1A1200u;
    // 0x1a1200: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1204: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a1208: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1208u;
    SET_GPR_U32(ctx, 31, 0x1A1210u);
    ctx->pc = 0x1A120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1208u;
    // 0x1a120c: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1208u, 0x1A1210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1210u;
label_1a1210:
    // 0x1a1210: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1210u;
    {
        const bool branch_taken_0x1a1210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1210) {
            ctx->pc = 0x1A1228u;
            return;
        }
    }
    ctx->pc = 0x1A1218u;
}
