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

// Function: entry_001cf4b4
// Address: 0x1cf4b4 - 0x1cf4f0
void entry_001cf4b4_0x1cf4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf4b4_0x1cf4b4");
#endif

    switch (ctx->pc) {
        case 0x1cf4ccu: goto label_1cf4cc;
        default: break;
    }

    ctx->pc = 0x1cf4b4u;

    // 0x1cf4b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cf4b8: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x1cf4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cf4bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CF4BCu;
    {
        const bool branch_taken_0x1cf4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4BCu;
        // 0x1cf4c0: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4bc) {
            ctx->pc = 0x1CF4F0u;
            return;
        }
    }
    ctx->pc = 0x1CF4C4u;
    // 0x1cf4c4: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CF4C4u;
    SET_GPR_U32(ctx, 31, 0x1CF4CCu);
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CF4C4u, 0x1CF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4CCu;
label_1cf4cc:
    // 0x1cf4cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cf4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4d0: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1CF4D0u;
    {
        const bool branch_taken_0x1cf4d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D0u;
        // 0x1cf4d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4d0) {
            ctx->pc = 0x1CF50Cu;
            return;
        }
    }
    ctx->pc = 0x1CF4D8u;
    // 0x1cf4d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cf4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf4dc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1cf4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1cf4e0: 0x8c620148  lw          $v0, 0x148($v1)
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x1cf4e4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1cf4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1cf4e8: 0xac660148  sw          $a2, 0x148($v1)
    ctx->pc = 0x1cf4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 6));
    // 0x1cf4ec: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x1cf4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x1cf4f0u;
}
