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

// Function: entry_001c7688
// Address: 0x1c7688 - 0x1c76c0
void entry_001c7688_0x1c7688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7688_0x1c7688");
#endif

    switch (ctx->pc) {
        case 0x1c769cu: goto label_1c769c;
        default: break;
    }

    ctx->pc = 0x1c7688u;

    // 0x1c7688: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1c7688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c768c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1c768cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1c7690: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c7690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7694: 0xc071fe2  jal         func_1C7F88
    ctx->pc = 0x1C7694u;
    SET_GPR_U32(ctx, 31, 0x1C769Cu);
    ctx->pc = 0x1C7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7694u;
    // 0x1c7698: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7F88u, 0x1C7694u, 0x1C769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C769Cu;
label_1c769c:
    // 0x1c769c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c769cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76a0: 0x6400017  bltz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1C76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76A0u;
        // 0x1c76a4: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C7700u;
            return;
        }
    }
    ctx->pc = 0x1C76A8u;
    // 0x1c76a8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1c76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c76ac: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c76acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c76b0: 0x7d8021  addu        $s0, $v1, $sp
    ctx->pc = 0x1c76b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c76b4: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x1c76b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c76b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c76b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c76bc: 0x0  nop
    ctx->pc = 0x1c76bcu;
    // NOP
    ctx->pc = 0x1c76c0u;
}
