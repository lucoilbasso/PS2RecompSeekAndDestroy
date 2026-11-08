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

// Function: entry_001d3510
// Address: 0x1d3510 - 0x1d3534
void entry_001d3510_0x1d3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3510_0x1d3510");
#endif

    switch (ctx->pc) {
        case 0x1d352cu: goto label_1d352c;
        default: break;
    }

    ctx->pc = 0x1d3510u;

    // 0x1d3510: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1d3510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1d3514: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3514u;
    {
        const bool branch_taken_0x1d3514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3514) {
            ctx->pc = 0x1D3518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3514u;
            // 0x1d3518: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3534u;
            return;
        }
    }
    ctx->pc = 0x1D351Cu;
    // 0x1d351c: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x1d351cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d3520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3524: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3524u;
    SET_GPR_U32(ctx, 31, 0x1D352Cu);
    ctx->pc = 0x1D3528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3524u;
    // 0x1d3528: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3524u, 0x1D352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D352Cu;
label_1d352c:
    // 0x1d352c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d352cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3530: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1d3530u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    ctx->pc = 0x1d3534u;
}
