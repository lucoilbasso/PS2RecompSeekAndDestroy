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

// Function: _fstat_r
// Address: 0x1d66a0 - 0x1d66fc
void _fstat_r_0x1d66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fstat_r_0x1d66a0");
#endif

    switch (ctx->pc) {
        case 0x1d66ccu: goto label_1d66cc;
        default: break;
    }

    ctx->pc = 0x1d66a0u;

    // 0x1d66a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d66a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d66a4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d66a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d66ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d66acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d66b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d66b4: 0x2451da40  addiu       $s1, $v0, -0x25C0
    ctx->pc = 0x1d66b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x1d66b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d66b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d66bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d66c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d66c4: 0xc06bf06  jal         func_1AFC18
    ctx->pc = 0x1D66C4u;
    SET_GPR_U32(ctx, 31, 0x1D66CCu);
    ctx->pc = 0x1D66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66C4u;
    // 0x1d66c8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC18u, 0x1D66C4u, 0x1D66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66CCu;
label_1d66cc:
    // 0x1d66cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d66ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d66d4: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D66D4u;
    {
        const bool branch_taken_0x1d66d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d66d4) {
            ctx->pc = 0x1D66D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D66D4u;
            // 0x1d66d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D66ECu;
            goto label_1d66ec;
        }
    }
    ctx->pc = 0x1D66DCu;
    // 0x1d66dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d66e0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D66E0u;
    {
        const bool branch_taken_0x1d66e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d66e0) {
            ctx->pc = 0x1D66E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D66E0u;
            // 0x1d66e4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D66E8u;
            goto label_1d66e8;
        }
    }
    ctx->pc = 0x1D66E8u;
label_1d66e8:
    // 0x1d66e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d66e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d66ec:
    // 0x1d66ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d66ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d66f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d66f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d66f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D66F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66F4u;
        // 0x1d66f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D66F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D66FCu;
}
