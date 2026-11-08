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

// Function: entry_001a0248
// Address: 0x1a0248 - 0x1a0280
void entry_001a0248_0x1a0248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0248_0x1a0248");
#endif

    switch (ctx->pc) {
        case 0x1a0254u: goto label_1a0254;
        default: break;
    }

    ctx->pc = 0x1a0248u;

    // 0x1a0248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a024c: 0xc067d0e  jal         func_19F438
    ctx->pc = 0x1A024Cu;
    SET_GPR_U32(ctx, 31, 0x1A0254u);
    ctx->pc = 0x1A0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A024Cu;
    // 0x1a0250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F438u, 0x1A024Cu, 0x1A0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0254u;
label_1a0254:
    // 0x1a0254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0258: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a0258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a025c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A025Cu;
    {
        const bool branch_taken_0x1a025c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A025Cu;
        // 0x1a0260: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a025c) {
            ctx->pc = 0x1A0288u;
            return;
        }
    }
    ctx->pc = 0x1A0264u;
    // 0x1a0264: 0x8f858ddc  lw          $a1, -0x7224($gp)
    ctx->pc = 0x1a0264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1a0268: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0268u;
    {
        const bool branch_taken_0x1a0268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0268) {
            ctx->pc = 0x1A0280u;
            return;
        }
    }
    ctx->pc = 0x1A0270u;
    // 0x1a0270: 0x8f858dd8  lw          $a1, -0x7228($gp)
    ctx->pc = 0x1a0270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1a0274: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0274u;
    {
        const bool branch_taken_0x1a0274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0274u;
        // 0x1a0278: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0274) {
            ctx->pc = 0x1A0280u;
            return;
        }
    }
    ctx->pc = 0x1A027Cu;
    // 0x1a027c: 0x8c45f640  lw          $a1, -0x9C0($v0)
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964800)));
    ctx->pc = 0x1a0280u;
}
