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

// Function: entry_001d3590
// Address: 0x1d3590 - 0x1d35b4
void entry_001d3590_0x1d3590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3590_0x1d3590");
#endif

    switch (ctx->pc) {
        case 0x1d35acu: goto label_1d35ac;
        default: break;
    }

    ctx->pc = 0x1d3590u;

    // 0x1d3590: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1d3590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1d3594: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3594u;
    {
        const bool branch_taken_0x1d3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3594) {
            ctx->pc = 0x1D3598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3594u;
            // 0x1d3598: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D35B4u;
            return;
        }
    }
    ctx->pc = 0x1D359Cu;
    // 0x1d359c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1d359cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d35a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d35a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35a4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D35A4u;
    SET_GPR_U32(ctx, 31, 0x1D35ACu);
    ctx->pc = 0x1D35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35A4u;
    // 0x1d35a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D35A4u, 0x1D35ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35ACu;
label_1d35ac:
    // 0x1d35ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d35acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35b0: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1d35b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    ctx->pc = 0x1d35b4u;
}
