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

// Function: entry_00115250
// Address: 0x115250 - 0x115274
void entry_00115250_0x115250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115250_0x115250");
#endif

    switch (ctx->pc) {
        case 0x115270u: goto label_115270;
        default: break;
    }

    ctx->pc = 0x115250u;

    // 0x115250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115254: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115254u;
    {
        const bool branch_taken_0x115254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x115254) {
            ctx->pc = 0x115258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115254u;
            // 0x115258: 0x128203  sra         $s0, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115274u;
            return;
        }
    }
    ctx->pc = 0x11525Cu;
    // 0x11525c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11525cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x115260: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115264: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x115264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    // 0x115268: 0xc068186  jal         func_1A0618
    ctx->pc = 0x115268u;
    SET_GPR_U32(ctx, 31, 0x115270u);
    ctx->pc = 0x11526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115268u;
    // 0x11526c: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x115268u, 0x115270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115270u;
label_115270:
    // 0x115270: 0x128203  sra         $s0, $s2, 8
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 8));
    ctx->pc = 0x115274u;
}
