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

// Function: entry_0014ffa0
// Address: 0x14ffa0 - 0x14ffe8
void entry_0014ffa0_0x14ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ffa0_0x14ffa0");
#endif

    switch (ctx->pc) {
        case 0x14ffc4u: goto label_14ffc4;
        default: break;
    }

    ctx->pc = 0x14ffa0u;

    // 0x14ffa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ffa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ffa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14ffac: 0x92020575  lbu         $v0, 0x575($s0)
    ctx->pc = 0x14ffacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x14ffb0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x14ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14ffb4: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14FFB4u;
    {
        const bool branch_taken_0x14ffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFB4u;
        // 0x14ffb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffb4) {
            ctx->pc = 0x150010u;
            return;
        }
    }
    ctx->pc = 0x14FFBCu;
    // 0x14ffbc: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x14FFBCu;
    SET_GPR_U32(ctx, 31, 0x14FFC4u);
    ctx->pc = 0x14FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFBCu;
    // 0x14ffc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x14FFBCu, 0x14FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFC4u;
label_14ffc4:
    // 0x14ffc4: 0x26050820  addiu       $a1, $s0, 0x820
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x14ffc8: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x14ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x14ffcc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14ffd0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x14ffd4: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x14ffd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14ffd8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14ffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14ffdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14FFDCu;
    {
        const bool branch_taken_0x14ffdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFDCu;
        // 0x14ffe0: 0x24639b80  addiu       $v1, $v1, -0x6480 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffdc) {
            ctx->pc = 0x14FFE8u;
            return;
        }
    }
    ctx->pc = 0x14FFE4u;
    // 0x14ffe4: 0xae060264  sw          $a2, 0x264($s0)
    ctx->pc = 0x14ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 6));
    ctx->pc = 0x14ffe8u;
}
