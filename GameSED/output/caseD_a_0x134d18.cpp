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

// Function: caseD_a
// Address: 0x134d18 - 0x134d48
void caseD_a_0x134d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x134d18");
#endif

    switch (ctx->pc) {
        case 0x134d3cu: goto label_134d3c;
        default: break;
    }

    ctx->pc = 0x134d18u;

    // 0x134d18: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x134d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x134d1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x134D1Cu;
    {
        const bool branch_taken_0x134d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134d1c) {
            ctx->pc = 0x134D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134D1Cu;
            // 0x134d20: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134D48u;
            return;
        }
    }
    ctx->pc = 0x134D24u;
    // 0x134d24: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x134d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x134d28: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x134d28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d34: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134D34u;
    SET_GPR_U32(ctx, 31, 0x134D3Cu);
    ctx->pc = 0x134D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D34u;
    // 0x134d38: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134D34u, 0x134D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D3Cu;
label_134d3c:
    // 0x134d3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x134D3Cu;
    {
        const bool branch_taken_0x134d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D3Cu;
        // 0x134d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d3c) {
            ctx->pc = 0x134D4Cu;
            return;
        }
    }
    ctx->pc = 0x134D44u;
    // 0x134d44: 0x0  nop
    ctx->pc = 0x134d44u;
    // NOP
    ctx->pc = 0x134d48u;
}
