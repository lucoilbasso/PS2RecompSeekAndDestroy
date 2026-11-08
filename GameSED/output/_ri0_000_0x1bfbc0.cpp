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

// Function: _ri0_000
// Address: 0x1bfbc0 - 0x1bfc54
void _ri0_000_0x1bfbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_000_0x1bfbc0");
#endif

    switch (ctx->pc) {
        case 0x1bfbe0u: goto label_1bfbe0;
        case 0x1bfbe8u: goto label_1bfbe8;
        default: break;
    }

    ctx->pc = 0x1bfbc0u;

    // 0x1bfbc0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bfbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bfbc4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bfbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bfbc8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bfbc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfbcc: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1bfbccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bfbd0: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1bfbd0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bfbd4: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x1bfbd4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1bfbd8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1bfbd8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1bfbdc: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x1bfbdcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfbe0:
    // 0x1bfbe0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1bfbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bfbe4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1bfbe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfbe8:
    // 0x1bfbe8: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1bfbe8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bfbec: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1bfbecu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bfbf0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1bfbf0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1bfbf4: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x1bfbf4u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1bfbf8: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x1bfbf8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x1bfbfc: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x1bfbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x1bfc00: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1bfc00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1bfc04: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1bfc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1bfc08: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x1bfc08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x1bfc0c: 0x1ce0fff6  bgtz        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BFC0Cu;
    {
        const bool branch_taken_0x1bfc0c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1BFC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC0Cu;
        // 0x1bfc10: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc0c) {
            ctx->pc = 0x1BFBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfbe8;
        }
    }
    ctx->pc = 0x1BFC14u;
    // 0x1bfc14: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1bfc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1bfc18: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1bfc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1bfc1c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1bfc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bfc20: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x1bfc20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x1bfc24: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BFC24u;
    {
        const bool branch_taken_0x1bfc24 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC24u;
        // 0x1bfc28: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc24) {
            ctx->pc = 0x1BFBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfbe8;
        }
    }
    ctx->pc = 0x1BFC2Cu;
    // 0x1bfc2c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bfc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bfc30: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bfc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bfc34: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bfc34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfc38: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1bfc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1bfc3c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1bfc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1bfc40: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1bfc40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1bfc44: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1BFC44u;
    {
        const bool branch_taken_0x1bfc44 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC44u;
        // 0x1bfc48: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc44) {
            ctx->pc = 0x1BFBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfbe0;
        }
    }
    ctx->pc = 0x1BFC4Cu;
    // 0x1bfc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFC54u;
}
