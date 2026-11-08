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

// Function: PartsDistributeDeCoding__FPUcUc
// Address: 0x11a360 - 0x11a394
void PartsDistributeDeCoding__FPUcUc_0x11a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsDistributeDeCoding__FPUcUc_0x11a360");
#endif

    ctx->pc = 0x11a360u;

    // 0x11a360: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x11a360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11a364: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x11a364u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11a368: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x11a368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11a36c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a370: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x11a370u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11a374: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x11a374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a378: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x11a378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11a37c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x11a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x11a380: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x11a380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x11a384: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11A384u;
    {
        const bool branch_taken_0x11a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a384) {
            ctx->pc = 0x11A388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A384u;
            // 0x11a388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A38Cu;
            goto label_11a38c;
        }
    }
    ctx->pc = 0x11A38Cu;
label_11a38c:
    // 0x11a38c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A38Cu;
        // 0x11a390: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A394u;
}
