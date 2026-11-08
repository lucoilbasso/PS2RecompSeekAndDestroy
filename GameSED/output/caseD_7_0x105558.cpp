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

// Function: caseD_7
// Address: 0x105558 - 0x105598
void caseD_7_0x105558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x105558");
#endif

    switch (ctx->pc) {
        case 0x105578u: goto label_105578;
        default: break;
    }

    ctx->pc = 0x105558u;

    // 0x105558: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x105558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10555c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10555cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x105560: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105564: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x105564u;
    {
        const bool branch_taken_0x105564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x105568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105564u;
        // 0x105568: 0x8f858d10  lw          $a1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105564) {
            ctx->pc = 0x105598u;
            return;
        }
    }
    ctx->pc = 0x10556Cu;
    // 0x10556c: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x10556cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105570: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105570u;
    SET_GPR_U32(ctx, 31, 0x105578u);
    ctx->pc = 0x105574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105570u;
    // 0x105574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105570u, 0x105578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105578u;
label_105578:
    // 0x105578: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x105578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x10557c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x105580: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x105584: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x105584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x105588: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x105588u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10558c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10558Cu;
    {
        const bool branch_taken_0x10558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10558Cu;
        // 0x105590: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10558c) {
            ctx->pc = 0x1055B8u;
            return;
        }
    }
    ctx->pc = 0x105594u;
    // 0x105594: 0x0  nop
    ctx->pc = 0x105594u;
    // NOP
    ctx->pc = 0x105598u;
}
