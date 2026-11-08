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

// Function: entry_00171a68
// Address: 0x171a68 - 0x171ac8
void entry_00171a68_0x171a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a68_0x171a68");
#endif

    switch (ctx->pc) {
        case 0x171a70u: goto label_171a70;
        case 0x171a84u: goto label_171a84;
        case 0x171a94u: goto label_171a94;
        default: break;
    }

    ctx->pc = 0x171a68u;

    // 0x171a68: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x171A68u;
    SET_GPR_U32(ctx, 31, 0x171A70u);
    ctx->pc = 0x171A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A68u;
    // 0x171a6c: 0x26a412a8  addiu       $a0, $s5, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x171A68u, 0x171A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A70u;
label_171a70:
    // 0x171a70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x171a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a74: 0x1200fffa  beqz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x171A74u;
    {
        const bool branch_taken_0x171a74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a74) {
            ctx->pc = 0x171A60u;
            return;
        }
    }
    ctx->pc = 0x171A7Cu;
    // 0x171a7c: 0xc05d510  jal         func_175440
    ctx->pc = 0x171A7Cu;
    SET_GPR_U32(ctx, 31, 0x171A84u);
    ctx->pc = 0x171A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A7Cu;
    // 0x171a80: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175440u, 0x171A7Cu, 0x171A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A84u;
label_171a84:
    // 0x171a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a8c: 0xc06f614  jal         func_1BD850
    ctx->pc = 0x171A8Cu;
    SET_GPR_U32(ctx, 31, 0x171A94u);
    ctx->pc = 0x171A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A8Cu;
    // 0x171a90: 0x240604b0  addiu       $a2, $zero, 0x4B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD850u, 0x171A8Cu, 0x171A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A94u;
label_171a94:
    // 0x171a94: 0xde240020  ld          $a0, 0x20($s1)
    ctx->pc = 0x171a94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x171a98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x171a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x171aa0: 0x410fa  dsrl        $v0, $a0, 3
    ctx->pc = 0x171aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 3);
    // 0x171aa4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x171aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x171aa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x171aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x171aac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x171aacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x171ab0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171AB0u;
    {
        const bool branch_taken_0x171ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x171ab0) {
            ctx->pc = 0x171AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171AB0u;
            // 0x171ab4: 0xaf968bdc  sw          $s6, -0x7424($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171AC8u;
            return;
        }
    }
    ctx->pc = 0x171AB8u;
    // 0x171ab8: 0x30830180  andi        $v1, $a0, 0x180
    ctx->pc = 0x171ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)384);
    // 0x171abc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171ac0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x171ac0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x171ac4: 0xaf828bdc  sw          $v0, -0x7424($gp)
    ctx->pc = 0x171ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 2));
    ctx->pc = 0x171ac8u;
}
