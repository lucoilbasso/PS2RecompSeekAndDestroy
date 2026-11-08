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

// Function: ReleaseMotion__8WcEntityP13BMotionPacket
// Address: 0x1dd298 - 0x1dd314
void ReleaseMotion__8WcEntityP13BMotionPacket_0x1dd298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleaseMotion__8WcEntityP13BMotionPacket_0x1dd298");
#endif

    switch (ctx->pc) {
        case 0x1dd2c8u: goto label_1dd2c8;
        case 0x1dd308u: goto label_1dd308;
        default: break;
    }

    ctx->pc = 0x1dd298u;

    // 0x1dd298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd29c: 0x24870148  addiu       $a3, $a0, 0x148
    ctx->pc = 0x1dd29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    // 0x1dd2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd2a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dd2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd2a8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd2a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd2ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dd2b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DD2B0u;
    {
        const bool branch_taken_0x1dd2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2B0u;
        // 0x1dd2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2b0) {
            ctx->pc = 0x1DD300u;
            goto label_1dd300;
        }
    }
    ctx->pc = 0x1DD2B8u;
    // 0x1dd2b8: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD2B8u;
    {
        const bool branch_taken_0x1dd2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1dd2b8) {
            ctx->pc = 0x1DD2DCu;
            goto label_1dd2dc;
        }
    }
    ctx->pc = 0x1DD2C0u;
    // 0x1dd2c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dd2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd2c4: 0x0  nop
    ctx->pc = 0x1dd2c4u;
    // NOP
label_1dd2c8:
    // 0x1dd2c8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1dd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1dd2cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD2CCu;
    {
        const bool branch_taken_0x1dd2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2cc) {
            ctx->pc = 0x1DD300u;
            goto label_1dd300;
        }
    }
    ctx->pc = 0x1DD2D4u;
    // 0x1dd2d4: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1DD2D4u;
    {
        const bool branch_taken_0x1dd2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd2d4) {
            ctx->pc = 0x1DD2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD2D4u;
            // 0x1dd2d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd2c8;
        }
    }
    ctx->pc = 0x1DD2DCu;
label_1dd2dc:
    // 0x1dd2dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD2DCu;
    {
        const bool branch_taken_0x1dd2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2dc) {
            ctx->pc = 0x1DD300u;
            goto label_1dd300;
        }
    }
    ctx->pc = 0x1DD2E4u;
    // 0x1dd2e4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD2E4u;
    {
        const bool branch_taken_0x1dd2e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2E4u;
        // 0x1dd2e8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2e4) {
            ctx->pc = 0x1DD2F8u;
            goto label_1dd2f8;
        }
    }
    ctx->pc = 0x1DD2ECu;
    // 0x1dd2ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD2ECu;
    {
        const bool branch_taken_0x1dd2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2ECu;
        // 0x1dd2f0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2ec) {
            ctx->pc = 0x1DD2FCu;
            goto label_1dd2fc;
        }
    }
    ctx->pc = 0x1DD2F4u;
    // 0x1dd2f4: 0x0  nop
    ctx->pc = 0x1dd2f4u;
    // NOP
label_1dd2f8:
    // 0x1dd2f8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1dd2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1dd2fc:
    // 0x1dd2fc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1dd2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1dd300:
    // 0x1dd300: 0xc069070  jal         func_1A41C0
    ctx->pc = 0x1DD300u;
    SET_GPR_U32(ctx, 31, 0x1DD308u);
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x1DD300u, 0x1DD308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD308u;
label_1dd308:
    // 0x1dd308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd30c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD30Cu;
        // 0x1dd310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD314u;
}
