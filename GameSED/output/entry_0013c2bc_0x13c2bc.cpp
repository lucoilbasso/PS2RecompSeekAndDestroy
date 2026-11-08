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

// Function: entry_0013c2bc
// Address: 0x13c2bc - 0x13c310
void entry_0013c2bc_0x13c2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c2bc_0x13c2bc");
#endif

    switch (ctx->pc) {
        case 0x13c2e8u: goto label_13c2e8;
        default: break;
    }

    ctx->pc = 0x13c2bcu;

    // 0x13c2bc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x13c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x13c2c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x13c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x13c2c4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x13c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x13c2c8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x13c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x13c2cc: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x13c2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x13c2d0: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x13c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x13c2d4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x13c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x13c2d8: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x13c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x13c2dc: 0x8e340024  lw          $s4, 0x24($s1)
    ctx->pc = 0x13c2dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13c2e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13C2E0u;
    SET_GPR_U32(ctx, 31, 0x13C2E8u);
    ctx->pc = 0x13C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2E0u;
    // 0x13c2e4: 0x8e960044  lw          $s6, 0x44($s4) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13C2E0u, 0x13C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2E8u;
label_13c2e8:
    // 0x13c2e8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x13c2ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13c2f0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13c2f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c2f8: 0x5064001d  beql        $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13C2F8u;
    {
        const bool branch_taken_0x13c2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13c2f8) {
            ctx->pc = 0x13C2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C2F8u;
            // 0x13c2fc: 0x24041116  addiu       $a0, $zero, 0x1116 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C370u;
            return;
        }
    }
    ctx->pc = 0x13C300u;
    // 0x13c300: 0x241e0026  addiu       $fp, $zero, 0x26
    ctx->pc = 0x13c300u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x13c304: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x13c304u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x13c308: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x13c308u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x13c30c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x13c30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13c310u;
}
