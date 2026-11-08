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

// Function: PadJobHandler__9ApcGameDrP5WcPad
// Address: 0x11b7e8 - 0x11b834
void PadJobHandler__9ApcGameDrP5WcPad_0x11b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PadJobHandler__9ApcGameDrP5WcPad_0x11b7e8");
#endif

    switch (ctx->pc) {
        case 0x11b7fcu: goto label_11b7fc;
        default: break;
    }

    ctx->pc = 0x11b7e8u;

    // 0x11b7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b7f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11b7f4: 0xc06665c  jal         func_199970
    ctx->pc = 0x11B7F4u;
    SET_GPR_U32(ctx, 31, 0x11B7FCu);
    ctx->pc = 0x11B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7F4u;
    // 0x11b7f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199970u, 0x11B7F4u, 0x11B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7FCu;
label_11b7fc:
    // 0x11b7fc: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x11b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b800: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x11b800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x11b804: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B804u;
    {
        const bool branch_taken_0x11b804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B804u;
        // 0x11b808: 0x30642000  andi        $a0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b804) {
            ctx->pc = 0x11B824u;
            goto label_11b824;
        }
    }
    ctx->pc = 0x11B80Cu;
    // 0x11b80c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B80Cu;
    {
        const bool branch_taken_0x11b80c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b80c) {
            ctx->pc = 0x11B810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B80Cu;
            // 0x11b810: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B828u;
            goto label_11b828;
        }
    }
    ctx->pc = 0x11B814u;
    // 0x11b814: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11b818: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x11b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x11b81c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11b81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11b820: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x11b820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_11b824:
    // 0x11b824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b828:
    // 0x11b828: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b82c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B82Cu;
        // 0x11b830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B834u;
}
