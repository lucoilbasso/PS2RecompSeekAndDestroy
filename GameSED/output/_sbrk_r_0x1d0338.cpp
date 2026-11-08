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

// Function: _sbrk_r
// Address: 0x1d0338 - 0x1d0390
void _sbrk_r_0x1d0338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sbrk_r_0x1d0338");
#endif

    switch (ctx->pc) {
        case 0x1d0360u: goto label_1d0360;
        default: break;
    }

    ctx->pc = 0x1d0338u;

    // 0x1d0338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d033c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d0340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d034c: 0x2451da40  addiu       $s1, $v0, -0x25C0
    ctx->pc = 0x1d034cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x1d0350: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0358: 0xc06bed8  jal         func_1AFB60
    ctx->pc = 0x1D0358u;
    SET_GPR_U32(ctx, 31, 0x1D0360u);
    ctx->pc = 0x1D035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0358u;
    // 0x1d035c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB60u, 0x1D0358u, 0x1D0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0360u;
label_1d0360:
    // 0x1d0360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0364: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d0364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0368: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0368u;
    {
        const bool branch_taken_0x1d0368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0368) {
            ctx->pc = 0x1D036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0368u;
            // 0x1d036c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0380u;
            goto label_1d0380;
        }
    }
    ctx->pc = 0x1D0370u;
    // 0x1d0370: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0374: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0374u;
    {
        const bool branch_taken_0x1d0374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0374) {
            ctx->pc = 0x1D0378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0374u;
            // 0x1d0378: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D037Cu;
            goto label_1d037c;
        }
    }
    ctx->pc = 0x1D037Cu;
label_1d037c:
    // 0x1d037c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d037cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0380:
    // 0x1d0380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0388: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0388u;
        // 0x1d038c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0390u;
}
