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

// Function: entry_001b7a68
// Address: 0x1b7a68 - 0x1b7ae0
void entry_001b7a68_0x1b7a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7a68_0x1b7a68");
#endif

    switch (ctx->pc) {
        case 0x1b7ab4u: goto label_1b7ab4;
        case 0x1b7abcu: goto label_1b7abc;
        default: break;
    }

    ctx->pc = 0x1b7a68u;

label_1b7a68:
    // 0x1b7a68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7a6c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b7a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b7a70: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b7a74: 0x0  nop
    ctx->pc = 0x1b7a74u;
    // NOP
    // 0x1b7a78: 0x0  nop
    ctx->pc = 0x1b7a78u;
    // NOP
    // 0x1b7a7c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7A7Cu;
    {
        const bool branch_taken_0x1b7a7c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b7a7c) {
            ctx->pc = 0x1B7A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7a68;
        }
    }
    ctx->pc = 0x1B7A84u;
    // 0x1b7a84: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b7a88: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b7a8c: 0x24427928  addiu       $v0, $v0, 0x7928
    ctx->pc = 0x1b7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31016));
    // 0x1b7a90: 0x2524c000  addiu       $a0, $t1, -0x4000
    ctx->pc = 0x1b7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294950912));
    // 0x1b7a94: 0x24637908  addiu       $v1, $v1, 0x7908
    ctx->pc = 0x1b7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30984));
    // 0x1b7a98: 0x2651bfd8  addiu       $s1, $s2, -0x4028
    ctx->pc = 0x1b7a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950872));
    // 0x1b7a9c: 0xad22c000  sw          $v0, -0x4000($t1)
    ctx->pc = 0x1b7a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294950912), GPR_U32(ctx, 2));
    // 0x1b7aa0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1b7aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b7aa4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1b7aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1b7aa8: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x1b7aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
    // 0x1b7aac: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B7AACu;
    SET_GPR_U32(ctx, 31, 0x1B7AB4u);
    ctx->pc = 0x1B7AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7AACu;
    // 0x1b7ab0: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B7AACu, 0x1B7AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AB4u;
label_1b7ab4:
    // 0x1b7ab4: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1B7AB4u;
    SET_GPR_U32(ctx, 31, 0x1B7ABCu);
    ctx->pc = 0x1B7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7AB4u;
    // 0x1b7ab8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1B7AB4u, 0x1B7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7ABCu;
label_1b7abc:
    // 0x1b7abc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1b7ac0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1b7ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1b7ac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x1b7ac8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1b7ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1b7acc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7ACCu;
    {
        const bool branch_taken_0x1b7acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7ACCu;
        // 0x1b7ad0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7acc) {
            ctx->pc = 0x1B7AE0u;
            return;
        }
    }
    ctx->pc = 0x1B7AD4u;
    // 0x1b7ad4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1b7ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1b7ad8: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x1b7ad8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 16));
    // 0x1b7adc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1b7ae0u;
}
