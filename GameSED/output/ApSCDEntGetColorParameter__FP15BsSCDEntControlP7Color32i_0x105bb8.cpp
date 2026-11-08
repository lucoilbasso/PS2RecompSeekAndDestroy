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

// Function: ApSCDEntGetColorParameter__FP15BsSCDEntControlP7Color32i
// Address: 0x105bb8 - 0x105bf8
void ApSCDEntGetColorParameter__FP15BsSCDEntControlP7Color32i_0x105bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntGetColorParameter__FP15BsSCDEntControlP7Color32i_0x105bb8");
#endif

    switch (ctx->pc) {
        case 0x105bd8u: goto label_105bd8;
        default: break;
    }

    ctx->pc = 0x105bb8u;

    // 0x105bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105bc0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x105bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105bc4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x105bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105bcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105bd0: 0xc06a34a  jal         func_1A8D28
    ctx->pc = 0x105BD0u;
    SET_GPR_U32(ctx, 31, 0x105BD8u);
    ctx->pc = 0x105BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105BD0u;
    // 0x105bd4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8D28u, 0x105BD0u, 0x105BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BD8u;
label_105bd8:
    // 0x105bd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x105bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105bdc: 0x56020001  bnel        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x105BDCu;
    {
        const bool branch_taken_0x105bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x105bdc) {
            ctx->pc = 0x105BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105BDCu;
            // 0x105be0: 0xa2300003  sb          $s0, 0x3($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105BE4u;
            goto label_105be4;
        }
    }
    ctx->pc = 0x105BE4u;
label_105be4:
    // 0x105be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x105BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BF0u;
        // 0x105bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105BF8u;
}
