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

// Function: RogitronFunc__20ST_ParticleGenerator
// Address: 0x132448 - 0x13249c
void RogitronFunc__20ST_ParticleGenerator_0x132448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RogitronFunc__20ST_ParticleGenerator_0x132448");
#endif

    switch (ctx->pc) {
        case 0x132468u: goto label_132468;
        default: break;
    }

    ctx->pc = 0x132448u;

    // 0x132448: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x132448u;
    {
        const bool branch_taken_0x132448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132448u;
        // 0x13244c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132448) {
            ctx->pc = 0x132494u;
            goto label_132494;
        }
    }
    ctx->pc = 0x132450u;
    // 0x132450: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132454: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x132458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x132458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13245c: 0x2442a298  addiu       $v0, $v0, -0x5D68
    ctx->pc = 0x13245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943384));
    // 0x132460: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x132460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x132464: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x132464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_132468:
    // 0x132468: 0xac8700e0  sw          $a3, 0xE0($a0)
    ctx->pc = 0x132468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
    // 0x13246c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13246Cu;
    {
        const bool branch_taken_0x13246c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x132470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13246Cu;
        // 0x132470: 0xac860134  sw          $a2, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13246c) {
            ctx->pc = 0x132488u;
            goto label_132488;
        }
    }
    ctx->pc = 0x132474u;
    // 0x132474: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x132474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x132478: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x132478u;
    {
        const bool branch_taken_0x132478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132478) {
            ctx->pc = 0x13247Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132478u;
            // 0x13247c: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13248Cu;
            goto label_13248c;
        }
    }
    ctx->pc = 0x132480u;
    // 0x132480: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x132480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x132484: 0xac6200e8  sw          $v0, 0xE8($v1)
    ctx->pc = 0x132484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 2));
label_132488:
    // 0x132488: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x132488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_13248c:
    // 0x13248c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13248Cu;
    {
        const bool branch_taken_0x13248c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x132490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13248Cu;
        // 0x132490: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13248c) {
            ctx->pc = 0x132468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132468;
        }
    }
    ctx->pc = 0x132494u;
label_132494:
    // 0x132494: 0x3e00008  jr          $ra
    ctx->pc = 0x132494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13249Cu;
}
