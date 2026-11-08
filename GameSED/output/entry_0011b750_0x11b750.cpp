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

// Function: entry_0011b750
// Address: 0x11b750 - 0x11b790
void entry_0011b750_0x11b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b750_0x11b750");
#endif

    ctx->pc = 0x11b750u;

    // 0x11b750: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11b750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11b754: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11b754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b758: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11b75c: 0x3c080012  lui         $t0, 0x12
    ctx->pc = 0x11b75cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18 << 16));
    // 0x11b760: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x11b760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11b764: 0xae0740a8  sw          $a3, 0x40A8($s0)
    ctx->pc = 0x11b764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16552), GPR_U32(ctx, 7));
    // 0x11b768: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b76c: 0x2513b6b8  addiu       $s3, $t0, -0x4948
    ctx->pc = 0x11b76cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948536));
    // 0x11b770: 0x8e0940a0  lw          $t1, 0x40A0($s0)
    ctx->pc = 0x11b770u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16544)));
    // 0x11b774: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11b774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x11b778: 0xae0340a4  sw          $v1, 0x40A4($s0)
    ctx->pc = 0x11b778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16548), GPR_U32(ctx, 3));
    // 0x11b77c: 0x15320004  bne         $t1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B77Cu;
    {
        const bool branch_taken_0x11b77c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 18));
        ctx->pc = 0x11B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B77Cu;
        // 0x11b780: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b77c) {
            ctx->pc = 0x11B790u;
            return;
        }
    }
    ctx->pc = 0x11B784u;
    // 0x11b784: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11b784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11b788: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11B788u;
    SET_GPR_U32(ctx, 31, 0x11B790u);
    ctx->pc = 0x11B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B788u;
    // 0x11b78c: 0x24a54760  addiu       $a1, $a1, 0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11B788u, 0x11B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B790u;
}
