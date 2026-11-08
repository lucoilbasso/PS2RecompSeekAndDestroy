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

// Function: caseD_2
// Address: 0x134f50 - 0x134f90
void caseD_2_0x134f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x134f50");
#endif

    switch (ctx->pc) {
        case 0x134f5cu: goto label_134f5c;
        case 0x134f64u: goto label_134f64;
        default: break;
    }

    ctx->pc = 0x134f50u;

    // 0x134f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f54: 0xc055666  jal         func_155998
    ctx->pc = 0x134F54u;
    SET_GPR_U32(ctx, 31, 0x134F5Cu);
    ctx->pc = 0x134F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F54u;
    // 0x134f58: 0x26120370  addiu       $s2, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155998u, 0x134F54u, 0x134F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F5Cu;
label_134f5c:
    // 0x134f5c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134F5Cu;
    SET_GPR_U32(ctx, 31, 0x134F64u);
    ctx->pc = 0x134F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F5Cu;
    // 0x134f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134F5Cu, 0x134F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F64u;
label_134f64:
    // 0x134f64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x134F64u;
    {
        const bool branch_taken_0x134f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F64u;
        // 0x134f68: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f64) {
            ctx->pc = 0x134F90u;
            return;
        }
    }
    ctx->pc = 0x134F6Cu;
    // 0x134f6c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x134f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134f70: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x134f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x134f74: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x134f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x134f78: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x134f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x134f7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134f80: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x134f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x134f84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x134f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x134f88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134F88u;
    {
        const bool branch_taken_0x134f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F88u;
        // 0x134f8c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f88) {
            ctx->pc = 0x134F9Cu;
            return;
        }
    }
    ctx->pc = 0x134F90u;
}
