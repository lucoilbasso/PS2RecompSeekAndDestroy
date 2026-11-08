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

// Function: __tf6WcPoly
// Address: 0x1df200 - 0x1df250
void ps2___tf6WcPoly_0x1df200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf6WcPoly_0x1df200");
#endif

    switch (ctx->pc) {
        case 0x1df224u: goto label_1df224;
        case 0x1df23cu: goto label_1df23c;
        default: break;
    }

    ctx->pc = 0x1df200u;

    // 0x1df200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df204: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1df204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1df208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df20c: 0x24501c00  addiu       $s0, $v0, 0x1C00
    ctx->pc = 0x1df20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7168));
    // 0x1df210: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1df210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411C00u));
    // 0x1df214: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF214u;
    {
        const bool branch_taken_0x1df214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF214u;
        // 0x1df218: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df214) {
            ctx->pc = 0x1DF23Cu;
            goto label_1df23c;
        }
    }
    ctx->pc = 0x1DF21Cu;
    // 0x1df21c: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DF21Cu;
    SET_GPR_U32(ctx, 31, 0x1DF224u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DF21Cu, 0x1DF224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF224u;
label_1df224:
    // 0x1df224: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1df224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1df228: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1df228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1df22c: 0x24a5d5e8  addiu       $a1, $a1, -0x2A18
    ctx->pc = 0x1df22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956520));
    // 0x1df230: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1df230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1df234: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DF234u;
    SET_GPR_U32(ctx, 31, 0x1DF23Cu);
    ctx->pc = 0x1DF238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF234u;
    // 0x1df238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DF234u, 0x1DF23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF23Cu;
label_1df23c:
    // 0x1df23c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df248: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF248u;
        // 0x1df24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF250u;
}
