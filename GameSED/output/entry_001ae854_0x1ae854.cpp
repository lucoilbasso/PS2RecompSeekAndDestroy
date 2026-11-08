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

// Function: entry_001ae854
// Address: 0x1ae854 - 0x1ae8ac
void entry_001ae854_0x1ae854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae854_0x1ae854");
#endif

    switch (ctx->pc) {
        case 0x1ae898u: goto label_1ae898;
        default: break;
    }

    ctx->pc = 0x1ae854u;

    // 0x1ae854: 0x26839a38  addiu       $v1, $s4, -0x65C8
    ctx->pc = 0x1ae854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941240));
    // 0x1ae858: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae85c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1ae85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ae860: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1ae860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1ae864: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ae864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ae868: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1ae868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1ae86c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1ae86cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae870: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1ae870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ae874: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae878: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ae878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ae87c: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1ae87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ae880: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x1ae880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x1ae884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae888: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1ae888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ae88c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ae88cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ae890: 0xc06b83e  jal         func_1AE0F8
    ctx->pc = 0x1AE890u;
    SET_GPR_U32(ctx, 31, 0x1AE898u);
    ctx->pc = 0x1AE894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE890u;
    // 0x1ae894: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE0F8u, 0x1AE890u, 0x1AE898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE898u;
label_1ae898:
    // 0x1ae898: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x1ae898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1ae89c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1ae89cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ae8a0: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1AE8A0u;
    {
        const bool branch_taken_0x1ae8a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A0u;
        // 0x1ae8a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8a0) {
            ctx->pc = 0x1AE840u;
            return;
        }
    }
    ctx->pc = 0x1AE8A8u;
    // 0x1ae8a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ae8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ae8acu;
}
