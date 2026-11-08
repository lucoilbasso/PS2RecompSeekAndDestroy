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

// Function: entry_0013ca10
// Address: 0x13ca10 - 0x13ca40
void entry_0013ca10_0x13ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ca10_0x13ca10");
#endif

    switch (ctx->pc) {
        case 0x13ca2cu: goto label_13ca2c;
        default: break;
    }

    ctx->pc = 0x13ca10u;

    // 0x13ca10: 0x26910120  addiu       $s1, $s4, 0x120
    ctx->pc = 0x13ca10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x13ca14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ca18: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13CA18u;
    {
        const bool branch_taken_0x13ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA18u;
        // 0x13ca1c: 0x8e530150  lw          $s3, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca18) {
            ctx->pc = 0x13CA90u;
            return;
        }
    }
    ctx->pc = 0x13CA20u;
    // 0x13ca20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13ca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca24: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13CA24u;
    SET_GPR_U32(ctx, 31, 0x13CA2Cu);
    ctx->pc = 0x13CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA24u;
    // 0x13ca28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13CA24u, 0x13CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA2Cu;
label_13ca2c:
    // 0x13ca2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ca30: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13CA30u;
    {
        const bool branch_taken_0x13ca30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13ca30) {
            ctx->pc = 0x13CA88u;
            return;
        }
    }
    ctx->pc = 0x13CA38u;
    // 0x13ca38: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13ca3c: 0x0  nop
    ctx->pc = 0x13ca3cu;
    // NOP
    ctx->pc = 0x13ca40u;
}
