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

// Function: entry_0017df0c
// Address: 0x17df0c - 0x17df58
void entry_0017df0c_0x17df0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017df0c_0x17df0c");
#endif

    switch (ctx->pc) {
        case 0x17df34u: goto label_17df34;
        default: break;
    }

    ctx->pc = 0x17df0cu;

    // 0x17df0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17df10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17df10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17df14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x17df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17df18: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17df18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17df1c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x17df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x17df20: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x17df20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x17df24: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x17df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x17df28: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x17df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17df2c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17DF2Cu;
    SET_GPR_U32(ctx, 31, 0x17DF34u);
    ctx->pc = 0x17DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF2Cu;
    // 0x17df30: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17DF2Cu, 0x17DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF34u;
label_17df34:
    // 0x17df34: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x17df34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17df38: 0x58600032  blezl       $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x17DF38u;
    {
        const bool branch_taken_0x17df38 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17df38) {
            ctx->pc = 0x17DF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DF38u;
            // 0x17df3c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E004u;
            return;
        }
    }
    ctx->pc = 0x17DF40u;
    // 0x17df40: 0x3c1e0025  lui         $fp, 0x25
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
    // 0x17df44: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x17df44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17df48: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17df4c: 0x2415ffb0  addiu       $s5, $zero, -0x50
    ctx->pc = 0x17df4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
    // 0x17df50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17df50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df54: 0x0  nop
    ctx->pc = 0x17df54u;
    // NOP
    ctx->pc = 0x17df58u;
}
