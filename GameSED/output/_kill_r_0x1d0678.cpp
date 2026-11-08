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

// Function: _kill_r
// Address: 0x1d0678 - 0x1d06d4
void _kill_r_0x1d0678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_kill_r_0x1d0678");
#endif

    switch (ctx->pc) {
        case 0x1d06a4u: goto label_1d06a4;
        default: break;
    }

    ctx->pc = 0x1d0678u;

    // 0x1d0678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d067c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d067cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d0680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d068c: 0x2451da40  addiu       $s1, $v0, -0x25C0
    ctx->pc = 0x1d068cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x1d0690: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0694: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d0694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d069c: 0xc06bf0e  jal         func_1AFC38
    ctx->pc = 0x1D069Cu;
    SET_GPR_U32(ctx, 31, 0x1D06A4u);
    ctx->pc = 0x1D06A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D069Cu;
    // 0x1d06a0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC38u, 0x1D069Cu, 0x1D06A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06A4u;
label_1d06a4:
    // 0x1d06a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d06a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d06a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d06ac: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D06ACu;
    {
        const bool branch_taken_0x1d06ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d06ac) {
            ctx->pc = 0x1D06B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D06ACu;
            // 0x1d06b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D06C4u;
            goto label_1d06c4;
        }
    }
    ctx->pc = 0x1D06B4u;
    // 0x1d06b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d06b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d06b8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D06B8u;
    {
        const bool branch_taken_0x1d06b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d06b8) {
            ctx->pc = 0x1D06BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D06B8u;
            // 0x1d06bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D06C0u;
            goto label_1d06c0;
        }
    }
    ctx->pc = 0x1D06C0u;
label_1d06c0:
    // 0x1d06c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d06c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d06c4:
    // 0x1d06c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d06c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d06c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d06c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d06cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D06CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06CCu;
        // 0x1d06d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D06CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D06D4u;
}
