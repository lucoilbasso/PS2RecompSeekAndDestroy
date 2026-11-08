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

// Function: _lseek_r
// Address: 0x1d6700 - 0x1d6760
void _lseek_r_0x1d6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lseek_r_0x1d6700");
#endif

    switch (ctx->pc) {
        case 0x1d6730u: goto label_1d6730;
        default: break;
    }

    ctx->pc = 0x1d6700u;

    // 0x1d6700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6704: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d6704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d6708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d670c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d670cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d6714: 0x2451da40  addiu       $s1, $v0, -0x25C0
    ctx->pc = 0x1d6714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x1d6718: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d6718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d671c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6720: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d6720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6728: 0xc06bed6  jal         func_1AFB58
    ctx->pc = 0x1D6728u;
    SET_GPR_U32(ctx, 31, 0x1D6730u);
    ctx->pc = 0x1D672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6728u;
    // 0x1d672c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB58u, 0x1D6728u, 0x1D6730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6730u;
label_1d6730:
    // 0x1d6730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6734: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d6734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6738: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6738u;
    {
        const bool branch_taken_0x1d6738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d6738) {
            ctx->pc = 0x1D673Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6738u;
            // 0x1d673c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6750u;
            goto label_1d6750;
        }
    }
    ctx->pc = 0x1D6740u;
    // 0x1d6740: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d6740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6744: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D6744u;
    {
        const bool branch_taken_0x1d6744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6744) {
            ctx->pc = 0x1D6748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6744u;
            // 0x1d6748: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D674Cu;
            goto label_1d674c;
        }
    }
    ctx->pc = 0x1D674Cu;
label_1d674c:
    // 0x1d674c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d674cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6750:
    // 0x1d6750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d6754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6758: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6758u;
        // 0x1d675c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6760u;
}
