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

// Function: ddddd__Fi
// Address: 0x17a4d8 - 0x17a530
void ddddd__Fi_0x17a4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ddddd__Fi_0x17a4d8");
#endif

    switch (ctx->pc) {
        case 0x17a4f4u: goto label_17a4f4;
        case 0x17a508u: goto label_17a508;
        case 0x17a520u: goto label_17a520;
        default: break;
    }

    ctx->pc = 0x17a4d8u;

label_17a4d8:
    // 0x17a4d8: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x17a4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
    // 0x17a4dc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x17a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x17a4e0: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x17a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x17a4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a4e8: 0xffbf0408  sd          $ra, 0x408($sp)
    ctx->pc = 0x17a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 31));
    // 0x17a4ec: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17A4ECu;
    SET_GPR_U32(ctx, 31, 0x17A4F4u);
    ctx->pc = 0x17A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A4ECu;
    // 0x17a4f0: 0x2444d568  addiu       $a0, $v0, -0x2A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17A4ECu, 0x17A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A4F4u;
label_17a4f4:
    // 0x17a4f4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17a4f8: 0x24847ab0  addiu       $a0, $a0, 0x7AB0
    ctx->pc = 0x17a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31408));
    // 0x17a4fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a500: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17A500u;
    SET_GPR_U32(ctx, 31, 0x17A508u);
    ctx->pc = 0x17A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A500u;
    // 0x17a504: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17A500u, 0x17A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A508u;
label_17a508:
    // 0x17a508: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x17a508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a50c: 0x2a10000a  slti        $s0, $s0, 0xA
    ctx->pc = 0x17a50cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17a510: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A510u;
    {
        const bool branch_taken_0x17a510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a510) {
            ctx->pc = 0x17A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A510u;
            // 0x17a514: 0xdfb00400  ld          $s0, 0x400($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A524u;
            goto label_17a524;
        }
    }
    ctx->pc = 0x17A518u;
    // 0x17a518: 0xc05e936  jal         func_17A4D8
    ctx->pc = 0x17A518u;
    SET_GPR_U32(ctx, 31, 0x17A520u);
    ctx->pc = 0x17A4D8u;
    goto label_17a4d8;
    ctx->pc = 0x17A520u;
label_17a520:
    // 0x17a520: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x17a520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_17a524:
    // 0x17a524: 0xdfbf0408  ld          $ra, 0x408($sp)
    ctx->pc = 0x17a524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x17a528: 0x3e00008  jr          $ra
    ctx->pc = 0x17A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A528u;
        // 0x17a52c: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A530u;
}
