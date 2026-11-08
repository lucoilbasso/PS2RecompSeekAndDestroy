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

// Function: entry_001a1620
// Address: 0x1a1620 - 0x1a164c
void entry_001a1620_0x1a1620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1620_0x1a1620");
#endif

    switch (ctx->pc) {
        case 0x1a1630u: goto label_1a1630;
        default: break;
    }

    ctx->pc = 0x1a1620u;

    // 0x1a1620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1628: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1A1628u;
    SET_GPR_U32(ctx, 31, 0x1A1630u);
    ctx->pc = 0x1A162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1628u;
    // 0x1a162c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1A1628u, 0x1A1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1630u;
label_1a1630:
    // 0x1a1630: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1634: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x1a1634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
    // 0x1a1638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a163c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A163Cu;
    {
        const bool branch_taken_0x1a163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A163Cu;
        // 0x1a1640: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a163c) {
            ctx->pc = 0x1A164Cu;
            return;
        }
    }
    ctx->pc = 0x1A1644u;
    // 0x1a1644: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1644u;
    SET_GPR_U32(ctx, 31, 0x1A164Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1644u, 0x1A164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A164Cu;
}
