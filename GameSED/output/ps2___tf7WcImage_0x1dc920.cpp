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

// Function: __tf7WcImage
// Address: 0x1dc920 - 0x1dc970
void ps2___tf7WcImage_0x1dc920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7WcImage_0x1dc920");
#endif

    switch (ctx->pc) {
        case 0x1dc944u: goto label_1dc944;
        case 0x1dc95cu: goto label_1dc95c;
        default: break;
    }

    ctx->pc = 0x1dc920u;

    // 0x1dc920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc924: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dc928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc92c: 0x24501530  addiu       $s0, $v0, 0x1530
    ctx->pc = 0x1dc92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5424));
    // 0x1dc930: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc930u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411530u));
    // 0x1dc934: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC934u;
    {
        const bool branch_taken_0x1dc934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC934u;
        // 0x1dc938: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc934) {
            ctx->pc = 0x1DC95Cu;
            goto label_1dc95c;
        }
    }
    ctx->pc = 0x1DC93Cu;
    // 0x1dc93c: 0xc0771d4  jal         func_1DC750
    ctx->pc = 0x1DC93Cu;
    SET_GPR_U32(ctx, 31, 0x1DC944u);
    ctx->pc = 0x1DC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC750u, 0x1DC93Cu, 0x1DC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC944u;
label_1dc944:
    // 0x1dc944: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dc944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dc948: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dc94c: 0x24a57cd0  addiu       $a1, $a1, 0x7CD0
    ctx->pc = 0x1dc94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31952));
    // 0x1dc950: 0x24c61510  addiu       $a2, $a2, 0x1510
    ctx->pc = 0x1dc950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5392));
    // 0x1dc954: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DC954u;
    SET_GPR_U32(ctx, 31, 0x1DC95Cu);
    ctx->pc = 0x1DC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC954u;
    // 0x1dc958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DC954u, 0x1DC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC95Cu;
label_1dc95c:
    // 0x1dc95c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc964: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc968: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC968u;
        // 0x1dc96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC970u;
}
