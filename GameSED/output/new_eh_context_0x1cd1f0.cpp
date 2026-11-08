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

// Function: new_eh_context
// Address: 0x1cd1f0 - 0x1cd244
void new_eh_context_0x1cd1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("new_eh_context_0x1cd1f0");
#endif

    switch (ctx->pc) {
        case 0x1cd204u: goto label_1cd204;
        case 0x1cd220u: goto label_1cd220;
        case 0x1cd228u: goto label_1cd228;
        default: break;
    }

    ctx->pc = 0x1cd1f0u;

    // 0x1cd1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd1f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd1fc: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CD1FCu;
    SET_GPR_U32(ctx, 31, 0x1CD204u);
    ctx->pc = 0x1CD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1FCu;
    // 0x1cd200: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CD1FCu, 0x1CD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD204u;
label_1cd204:
    // 0x1cd204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd210: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD210u;
    {
        const bool branch_taken_0x1cd210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD210u;
        // 0x1cd214: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd210) {
            ctx->pc = 0x1CD220u;
            goto label_1cd220;
        }
    }
    ctx->pc = 0x1CD218u;
    // 0x1cd218: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CD218u;
    SET_GPR_U32(ctx, 31, 0x1CD220u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CD218u, 0x1CD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD220u;
label_1cd220:
    // 0x1cd220: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x1CD220u;
    SET_GPR_U32(ctx, 31, 0x1CD228u);
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x1CD220u, 0x1CD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD228u;
label_1cd228:
    // 0x1cd228: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x1cd228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1cd22c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd230: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1cd230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1cd234: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd23c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD23Cu;
        // 0x1cd240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD244u;
}
