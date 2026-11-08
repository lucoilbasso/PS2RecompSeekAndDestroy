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

// Function: entry_00115790
// Address: 0x115790 - 0x1157c8
void entry_00115790_0x115790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115790_0x115790");
#endif

    switch (ctx->pc) {
        case 0x1157a4u: goto label_1157a4;
        default: break;
    }

    ctx->pc = 0x115790u;

label_115790:
    // 0x115790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115794:
    // 0x115794: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x115794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_115798:
    // 0x115798: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x115798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_11579c:
    // 0x11579c: 0xc045360  jal         func_114D80
label_1157a0:
    if (ctx->pc == 0x1157A0u) {
        ctx->pc = 0x1157A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11579Cu;
        // 0x1157a0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1157A4u;
        goto label_1157a4;
    }
    ctx->pc = 0x11579Cu;
    SET_GPR_U32(ctx, 31, 0x1157A4u);
    ctx->pc = 0x1157A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11579Cu;
    // 0x1157a0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x11579Cu, 0x1157A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157A4u;
label_1157a4:
    // 0x1157a4: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x1157a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1157a8:
    // 0x1157a8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1157ac:
    if (ctx->pc == 0x1157ACu) {
        ctx->pc = 0x1157ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157A8u;
        // 0x1157ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1157B0u;
        goto label_1157b0;
    }
    ctx->pc = 0x1157A8u;
    {
        const bool branch_taken_0x1157a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157A8u;
        // 0x1157ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157a8) {
            ctx->pc = 0x115874u;
            return;
        }
    }
    ctx->pc = 0x1157B0u;
label_1157b0:
    // 0x1157b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1157b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1157b4:
    // 0x1157b4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1157b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1157b8:
    // 0x1157b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1157b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1157bc:
    // 0x1157bc: 0x8c6344a0  lw          $v1, 0x44A0($v1)
    ctx->pc = 0x1157bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17568)));
label_1157c0:
    // 0x1157c0: 0x600008  jr          $v1
label_1157c4:
    if (ctx->pc == 0x1157C4u) {
        ctx->pc = 0x1157C8u;
        goto label_fallthrough_0x1157c0;
    }
    ctx->pc = 0x1157C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1157C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1157c0:
    ctx->pc = 0x1157C8u;
}
