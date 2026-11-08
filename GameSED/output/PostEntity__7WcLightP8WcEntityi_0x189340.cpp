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

// Function: PostEntity__7WcLightP8WcEntityi
// Address: 0x189340 - 0x18938c
void PostEntity__7WcLightP8WcEntityi_0x189340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PostEntity__7WcLightP8WcEntityi_0x189340");
#endif

    switch (ctx->pc) {
        case 0x189354u: goto label_189354;
        default: break;
    }

    ctx->pc = 0x189340u;

    // 0x189340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x189344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x189348: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x189348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18934c: 0xc0612e0  jal         func_184B80
    ctx->pc = 0x18934Cu;
    SET_GPR_U32(ctx, 31, 0x189354u);
    ctx->pc = 0x189350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18934Cu;
    // 0x189350: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184B80u, 0x18934Cu, 0x189354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189354u;
label_189354:
    // 0x189354: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x189354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x189358: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x189358u;
    {
        const bool branch_taken_0x189358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189358) {
            ctx->pc = 0x18935Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189358u;
            // 0x18935c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189380u;
            goto label_189380;
        }
    }
    ctx->pc = 0x189360u;
    // 0x189360: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x189360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x189364: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x189364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x189368: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x189368u;
    {
        const bool branch_taken_0x189368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189368) {
            ctx->pc = 0x18936Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189368u;
            // 0x18936c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189380u;
            goto label_189380;
        }
    }
    ctx->pc = 0x189370u;
    // 0x189370: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x189374: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x189374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x189378: 0xac700134  sw          $s0, 0x134($v1)
    ctx->pc = 0x189378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 16));
    // 0x18937c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18937cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_189380:
    // 0x189380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x189380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x189384: 0x3e00008  jr          $ra
    ctx->pc = 0x189384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189384u;
        // 0x189388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18938Cu;
}
