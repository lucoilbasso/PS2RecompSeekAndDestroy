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

// Function: ApEventLoadDiagArea__FP16ApEventDiagTableP15BsSCDEntControl
// Address: 0x14a5c8 - 0x14a61c
void ApEventLoadDiagArea__FP16ApEventDiagTableP15BsSCDEntControl_0x14a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventLoadDiagArea__FP16ApEventDiagTableP15BsSCDEntControl_0x14a5c8");
#endif

    switch (ctx->pc) {
        case 0x14a5e8u: goto label_14a5e8;
        default: break;
    }

    ctx->pc = 0x14a5c8u;

    // 0x14a5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a5cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a5d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5d4: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x14a5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x14a5d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14a5e0: 0xc05250a  jal         func_149428
    ctx->pc = 0x14A5E0u;
    SET_GPR_U32(ctx, 31, 0x14A5E8u);
    ctx->pc = 0x14A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A5E0u;
    // 0x14a5e4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x14A5E0u, 0x14A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5E8u;
label_14a5e8:
    // 0x14a5e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x14a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a5ec: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A5ECu;
    {
        const bool branch_taken_0x14a5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5ECu;
        // 0x14a5f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5ec) {
            ctx->pc = 0x14A60Cu;
            goto label_14a60c;
        }
    }
    ctx->pc = 0x14A5F4u;
    // 0x14a5f4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x14a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14a5f8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A5F8u;
    {
        const bool branch_taken_0x14a5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a5f8) {
            ctx->pc = 0x14A5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A5F8u;
            // 0x14a5fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A610u;
            goto label_14a610;
        }
    }
    ctx->pc = 0x14A600u;
    // 0x14a600: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a604: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x14a604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x14a608: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14a608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_14a60c:
    // 0x14a60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14a610:
    // 0x14a610: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a614: 0x3e00008  jr          $ra
    ctx->pc = 0x14A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A614u;
        // 0x14a618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A61Cu;
}
