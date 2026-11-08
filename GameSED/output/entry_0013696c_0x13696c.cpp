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

// Function: entry_0013696c
// Address: 0x13696c - 0x1369c0
void entry_0013696c_0x13696c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013696c_0x13696c");
#endif

    switch (ctx->pc) {
        case 0x13698cu: goto label_13698c;
        default: break;
    }

    ctx->pc = 0x13696cu;

    // 0x13696c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136970: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136974: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x136974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x136978: 0x8e031400  lw          $v1, 0x1400($s0)
    ctx->pc = 0x136978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
    // 0x13697c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x13697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x136980: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x136980u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x136984: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x136984u;
    SET_GPR_U32(ctx, 31, 0x13698Cu);
    ctx->pc = 0x136988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136984u;
    // 0x136988: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136984u, 0x13698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13698Cu;
label_13698c:
    // 0x13698c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13698cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136990: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x136994: 0x8e031400  lw          $v1, 0x1400($s0)
    ctx->pc = 0x136994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
    // 0x136998: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x136998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13699c: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13699Cu;
    {
        const bool branch_taken_0x13699c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1369A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13699Cu;
        // 0x1369a0: 0x8c700044  lw          $s0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13699c) {
            ctx->pc = 0x1369C0u;
            return;
        }
    }
    ctx->pc = 0x1369A4u;
    // 0x1369a4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1369a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1369a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1369a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1369ac: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1369ACu;
    {
        const bool branch_taken_0x1369ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1369ac) {
            ctx->pc = 0x1369B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1369ACu;
            // 0x1369b0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1369C0u;
            return;
        }
    }
    ctx->pc = 0x1369B4u;
    // 0x1369b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1369B4u;
    {
        const bool branch_taken_0x1369b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1369B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369B4u;
        // 0x1369b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369b4) {
            ctx->pc = 0x1369E4u;
            return;
        }
    }
    ctx->pc = 0x1369BCu;
    // 0x1369bc: 0x0  nop
    ctx->pc = 0x1369bcu;
    // NOP
    ctx->pc = 0x1369c0u;
}
