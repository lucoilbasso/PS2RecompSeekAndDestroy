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

// Function: entry_00103550
// Address: 0x103550 - 0x103594
void entry_00103550_0x103550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103550_0x103550");
#endif

    switch (ctx->pc) {
        case 0x103590u: goto label_103590;
        default: break;
    }

    ctx->pc = 0x103550u;

    // 0x103550: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x103550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x103554: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x103554u;
    {
        const bool branch_taken_0x103554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103554u;
        // 0x103558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103554) {
            ctx->pc = 0x1035A8u;
            return;
        }
    }
    ctx->pc = 0x10355Cu;
    // 0x10355c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x103560: 0x30b10fff  andi        $s1, $a1, 0xFFF
    ctx->pc = 0x103560u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x103564: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x103564u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x103568: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x103568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x10356c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x103570: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x103570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103574: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x103574u;
    {
        const bool branch_taken_0x103574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103574) {
            ctx->pc = 0x103578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103574u;
            // 0x103578: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103594u;
            return;
        }
    }
    ctx->pc = 0x10357Cu;
    // 0x10357c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10357cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x103580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103584: 0x24a51c00  addiu       $a1, $a1, 0x1C00
    ctx->pc = 0x103584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7168));
    // 0x103588: 0xc068186  jal         func_1A0618
    ctx->pc = 0x103588u;
    SET_GPR_U32(ctx, 31, 0x103590u);
    ctx->pc = 0x10358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103588u;
    // 0x10358c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x103588u, 0x103590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103590u;
label_103590:
    // 0x103590: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x103590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x103594u;
}
