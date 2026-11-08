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

// Function: entry_0014fd10
// Address: 0x14fd10 - 0x14fd30
void entry_0014fd10_0x14fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fd10_0x14fd10");
#endif

    switch (ctx->pc) {
        case 0x14fd28u: goto label_14fd28;
        default: break;
    }

    ctx->pc = 0x14fd10u;

    // 0x14fd10: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14fd14: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14fd18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FD18u;
    {
        const bool branch_taken_0x14fd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD18u;
        // 0x14fd1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd18) {
            ctx->pc = 0x14FD40u;
            return;
        }
    }
    ctx->pc = 0x14FD20u;
    // 0x14fd20: 0xc066800  jal         func_19A000
    ctx->pc = 0x14FD20u;
    SET_GPR_U32(ctx, 31, 0x14FD28u);
    ctx->pc = 0x14FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD20u;
    // 0x14fd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x14FD20u, 0x14FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD28u;
label_14fd28:
    // 0x14fd28: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x14fd2c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x14fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    ctx->pc = 0x14fd30u;
}
