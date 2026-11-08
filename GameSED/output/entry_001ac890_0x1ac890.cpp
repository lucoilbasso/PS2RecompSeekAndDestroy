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

// Function: entry_001ac890
// Address: 0x1ac890 - 0x1ac8cc
void entry_001ac890_0x1ac890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac890_0x1ac890");
#endif

    switch (ctx->pc) {
        case 0x1ac8c8u: goto label_1ac8c8;
        default: break;
    }

    ctx->pc = 0x1ac890u;

    // 0x1ac890: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1ac894: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x1ac894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x1ac898: 0x3484feff  ori         $a0, $a0, 0xFEFF
    ctx->pc = 0x1ac898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65279);
    // 0x1ac89c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ac89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac8a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ac8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac8a4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ac8a8: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x1ac8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x1ac8ac: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x1ac8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x1ac8b0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1ac8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1ac8b4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1ac8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1ac8b8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC8B8u;
    {
        const bool branch_taken_0x1ac8b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B8u;
        // 0x1ac8bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8b8) {
            ctx->pc = 0x1AC8CCu;
            return;
        }
    }
    ctx->pc = 0x1AC8C0u;
    // 0x1ac8c0: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1AC8C0u;
    SET_GPR_U32(ctx, 31, 0x1AC8C8u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1AC8C0u, 0x1AC8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8C8u;
label_1ac8c8:
    // 0x1ac8c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ac8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ac8ccu;
}
