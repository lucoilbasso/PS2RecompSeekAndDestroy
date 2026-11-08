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

// Function: entry_0013081c
// Address: 0x13081c - 0x130878
void entry_0013081c_0x13081c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013081c_0x13081c");
#endif

    switch (ctx->pc) {
        case 0x130828u: goto label_130828;
        case 0x130868u: goto label_130868;
        default: break;
    }

    ctx->pc = 0x13081cu;

    // 0x13081c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x130820: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x130820u;
    SET_GPR_U32(ctx, 31, 0x130828u);
    ctx->pc = 0x130824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130820u;
    // 0x130824: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x130820u, 0x130828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130828u;
label_130828:
    // 0x130828: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x130828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x13082c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130830: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x130830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x130834: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130838: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x130838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x13083c: 0xae2300e4  sw          $v1, 0xE4($s1)
    ctx->pc = 0x13083cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
    // 0x130840: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x130844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x130844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x130848: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x130848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
    // 0x13084c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x130850: 0xae230128  sw          $v1, 0x128($s1)
    ctx->pc = 0x130850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 3));
    // 0x130854: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x130854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x130858: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x130858u;
    {
        const bool branch_taken_0x130858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x130858) {
            ctx->pc = 0x13085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130858u;
            // 0x13085c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130878u;
            return;
        }
    }
    ctx->pc = 0x130860u;
    // 0x130860: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x130860u;
    SET_GPR_U32(ctx, 31, 0x130868u);
    ctx->pc = 0x130864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130860u;
    // 0x130864: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x130860u, 0x130868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130868u;
label_130868:
    // 0x130868: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x130868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x13086c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130870: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x130870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
    // 0x130874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130878u;
}
