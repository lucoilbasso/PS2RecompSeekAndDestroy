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

// Function: MsgTocEntry__7ApcUnit
// Address: 0x1d9458 - 0x1d94c8
void MsgTocEntry__7ApcUnit_0x1d9458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MsgTocEntry__7ApcUnit_0x1d9458");
#endif

    switch (ctx->pc) {
        case 0x1d9490u: goto label_1d9490;
        case 0x1d94b8u: goto label_1d94b8;
        default: break;
    }

    ctx->pc = 0x1d9458u;

    // 0x1d9458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d945c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9464: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9468: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x1d9468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1d946c: 0x4a0000b  bltz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D946Cu;
    {
        const bool branch_taken_0x1d946c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D946Cu;
        // 0x1d9470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d946c) {
            ctx->pc = 0x1D949Cu;
            goto label_1d949c;
        }
    }
    ctx->pc = 0x1D9474u;
    // 0x1d9474: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1d9474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1d9478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9478u;
    {
        const bool branch_taken_0x1d9478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9478u;
        // 0x1d947c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9478) {
            ctx->pc = 0x1D9498u;
            goto label_1d9498;
        }
    }
    ctx->pc = 0x1D9480u;
    // 0x1d9480: 0x8e0801b4  lw          $t0, 0x1B4($s0)
    ctx->pc = 0x1d9480u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1d9484: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d9484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d9488: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1D9488u;
    SET_GPR_U32(ctx, 31, 0x1D9490u);
    ctx->pc = 0x1D948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9488u;
    // 0x1d948c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1D9488u, 0x1D9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9490u;
label_1d9490:
    // 0x1d9490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9490u;
    {
        const bool branch_taken_0x1d9490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9490u;
        // 0x1d9494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9490) {
            ctx->pc = 0x1D949Cu;
            goto label_1d949c;
        }
    }
    ctx->pc = 0x1D9498u;
label_1d9498:
    // 0x1d9498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d949c:
    // 0x1d949c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D949Cu;
    {
        const bool branch_taken_0x1d949c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d949c) {
            ctx->pc = 0x1D94A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D949Cu;
            // 0x1d94a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D94BCu;
            goto label_1d94bc;
        }
    }
    ctx->pc = 0x1D94A4u;
    // 0x1d94a4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d94a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d94a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ac: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1d94acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1d94b0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D94B0u;
    SET_GPR_U32(ctx, 31, 0x1D94B8u);
    ctx->pc = 0x1D94B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94B0u;
    // 0x1d94b4: 0x24a56c48  addiu       $a1, $a1, 0x6C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D94B0u, 0x1D94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94B8u;
label_1d94b8:
    // 0x1d94b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d94bc:
    // 0x1d94bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C0u;
        // 0x1d94c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94C8u;
}
