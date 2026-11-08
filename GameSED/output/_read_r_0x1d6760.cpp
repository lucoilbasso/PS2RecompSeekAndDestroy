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

// Function: _read_r
// Address: 0x1d6760 - 0x1d67c0
void _read_r_0x1d6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_read_r_0x1d6760");
#endif

    switch (ctx->pc) {
        case 0x1d6790u: goto label_1d6790;
        default: break;
    }

    ctx->pc = 0x1d6760u;

    // 0x1d6760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6764: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d6764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d6768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d676c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d676cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d6774: 0x2451da40  addiu       $s1, $v0, -0x25C0
    ctx->pc = 0x1d6774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x1d6778: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d6778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d677c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d677cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6780: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d6780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6788: 0xc06beaa  jal         func_1AFAA8
    ctx->pc = 0x1D6788u;
    SET_GPR_U32(ctx, 31, 0x1D6790u);
    ctx->pc = 0x1D678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6788u;
    // 0x1d678c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAA8u, 0x1D6788u, 0x1D6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6790u;
label_1d6790:
    // 0x1d6790: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d6790u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6794: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d6794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6798: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6798u;
    {
        const bool branch_taken_0x1d6798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6798u;
        // 0x1d679c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6798) {
            ctx->pc = 0x1D67ACu;
            goto label_1d67ac;
        }
    }
    ctx->pc = 0x1D67A0u;
    // 0x1d67a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d67a4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D67A4u;
    {
        const bool branch_taken_0x1d67a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d67a4) {
            ctx->pc = 0x1D67A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D67A4u;
            // 0x1d67a8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D67ACu;
            goto label_1d67ac;
        }
    }
    ctx->pc = 0x1D67ACu;
label_1d67ac:
    // 0x1d67ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d67b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d67b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d67b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B8u;
        // 0x1d67bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67C0u;
}
