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

// Function: entry_00117bf8
// Address: 0x117bf8 - 0x117c68
void entry_00117bf8_0x117bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117bf8_0x117bf8");
#endif

    switch (ctx->pc) {
        case 0x117c28u: goto label_117c28;
        default: break;
    }

    ctx->pc = 0x117bf8u;

label_117bf8:
    // 0x117bf8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x117bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x117bfc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x117bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x117c00: 0x0  nop
    ctx->pc = 0x117c00u;
    // NOP
    // 0x117c04: 0x0  nop
    ctx->pc = 0x117c04u;
    // NOP
    // 0x117c08: 0x0  nop
    ctx->pc = 0x117c08u;
    // NOP
    // 0x117c0c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117C0Cu;
    {
        const bool branch_taken_0x117c0c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x117C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C0Cu;
        // 0x117c10: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c0c) {
            ctx->pc = 0x117BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117bf8;
        }
    }
    ctx->pc = 0x117C14u;
    // 0x117c14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117c18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x117c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c1c: 0xa0e20005  sb          $v0, 0x5($a3)
    ctx->pc = 0x117c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x117c20: 0xc045e0e  jal         func_117838
    ctx->pc = 0x117C20u;
    SET_GPR_U32(ctx, 31, 0x117C28u);
    ctx->pc = 0x117C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C20u;
    // 0x117c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117838u, 0x117C20u, 0x117C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C28u;
label_117c28:
    // 0x117c28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x117c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117c2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x117c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c30: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x117c30u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x117c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x117c38: 0x318300f0  andi        $v1, $t4, 0xF0
    ctx->pc = 0x117c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)240);
    // 0x117c3c: 0x52280  sll         $a0, $a1, 10
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x117c40: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x117c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x117c44: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x117c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x117c48: 0x27ab0012  addiu       $t3, $sp, 0x12
    ctx->pc = 0x117c48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x117c4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117c50: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x117c50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x117c54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x117c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x117c58: 0x30aa000f  andi        $t2, $a1, 0xF
    ctx->pc = 0x117c58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x117c5c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x117c5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117c60: 0x26080007  addiu       $t0, $s0, 0x7
    ctx->pc = 0x117c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x117c64: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x117c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117c68u;
}
