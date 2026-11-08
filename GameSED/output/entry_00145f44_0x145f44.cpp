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

// Function: entry_00145f44
// Address: 0x145f44 - 0x145f68
void entry_00145f44_0x145f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145f44_0x145f44");
#endif

    switch (ctx->pc) {
        case 0x145f60u: goto label_145f60;
        default: break;
    }

    ctx->pc = 0x145f44u;

    // 0x145f44: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x145F44u;
    {
        const bool branch_taken_0x145f44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145f44) {
            ctx->pc = 0x145F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145F44u;
            // 0x145f48: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145F68u;
            return;
        }
    }
    ctx->pc = 0x145F4Cu;
    // 0x145f4c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f54: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x145f58: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145F58u;
    SET_GPR_U32(ctx, 31, 0x145F60u);
    ctx->pc = 0x145F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F58u;
    // 0x145f5c: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145F58u, 0x145F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F60u;
label_145f60:
    // 0x145f60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x145F60u;
    {
        const bool branch_taken_0x145f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F60u;
        // 0x145f64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f60) {
            ctx->pc = 0x145F8Cu;
            return;
        }
    }
    ctx->pc = 0x145F68u;
}
