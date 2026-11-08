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

// Function: entry_001c375c
// Address: 0x1c375c - 0x1c37d0
void entry_001c375c_0x1c375c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c375c_0x1c375c");
#endif

    switch (ctx->pc) {
        case 0x1c3764u: goto label_1c3764;
        default: break;
    }

    ctx->pc = 0x1c375cu;

    // 0x1c375c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C375Cu;
    SET_GPR_U32(ctx, 31, 0x1C3764u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C375Cu, 0x1C3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3764u;
label_1c3764:
    // 0x1c3764: 0xf  sync
    ctx->pc = 0x1c3764u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1c3768: 0x8e060810  lw          $a2, 0x810($s0)
    ctx->pc = 0x1c3768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c376c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c3770: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1c3770u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3774: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1c3774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3778: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x1c3778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c377c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x1c377cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x1c3780: 0x264ad940  addiu       $t2, $s2, -0x26C0
    ctx->pc = 0x1c3780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957376));
    // 0x1c3784: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x1c3784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x1c3788: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c378c: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x1c378cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1c3790: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1c3790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x1c3794: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x1c3794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1c3798: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1c3798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c379c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c379cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c37a0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1c37a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x1c37a4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1c37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1c37a8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x1c37a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x1c37ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c37acu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x1c37b0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1c37b0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 9));
    // 0x1c37b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C37B4u;
    {
        const bool branch_taken_0x1c37b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37B4u;
        // 0x1c37b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37b4) {
            ctx->pc = 0x1C37D0u;
            return;
        }
    }
    ctx->pc = 0x1C37BCu;
    // 0x1c37bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c37bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c37c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c37c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c37c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c37c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c37c8: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1C37C8u;
    ctx->pc = 0x1C37CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37C8u;
    // 0x1c37cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C37D0u;
}
