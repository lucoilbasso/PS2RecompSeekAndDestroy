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

// Function: decode_sleb128
// Address: 0x1ca720 - 0x1ca778
void decode_sleb128_0x1ca720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("decode_sleb128_0x1ca720");
#endif

    switch (ctx->pc) {
        case 0x1ca728u: goto label_1ca728;
        default: break;
    }

    ctx->pc = 0x1ca720u;

    // 0x1ca720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca728:
    // 0x1ca728: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1ca728u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca72c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ca72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ca730: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x1ca730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x1ca734: 0x30c30080  andi        $v1, $a2, 0x80
    ctx->pc = 0x1ca734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x1ca738: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x1ca738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ca73c: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x1ca73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1ca740: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CA740u;
    {
        const bool branch_taken_0x1ca740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA740u;
        // 0x1ca744: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca740) {
            ctx->pc = 0x1CA728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca728;
        }
    }
    ctx->pc = 0x1CA748u;
    // 0x1ca748: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x1ca748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ca74c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA74Cu;
    {
        const bool branch_taken_0x1ca74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca74c) {
            ctx->pc = 0x1CA750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA74Cu;
            // 0x1ca750: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA770u;
            goto label_1ca770;
        }
    }
    ctx->pc = 0x1CA754u;
    // 0x1ca754: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x1ca754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x1ca758: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA758u;
    {
        const bool branch_taken_0x1ca758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca758) {
            ctx->pc = 0x1CA75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA758u;
            // 0x1ca75c: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA770u;
            goto label_1ca770;
        }
    }
    ctx->pc = 0x1CA760u;
    // 0x1ca760: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca764: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x1ca764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ca768: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1ca768u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1ca76c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x1ca76cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_1ca770:
    // 0x1ca770: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA770u;
        // 0x1ca774: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA778u;
}
