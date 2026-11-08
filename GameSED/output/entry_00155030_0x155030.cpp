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

// Function: entry_00155030
// Address: 0x155030 - 0x15505c
void entry_00155030_0x155030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155030_0x155030");
#endif

    switch (ctx->pc) {
        case 0x155058u: goto label_155058;
        default: break;
    }

    ctx->pc = 0x155030u;

    // 0x155030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155034: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x155034u;
    {
        const bool branch_taken_0x155034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155034) {
            ctx->pc = 0x155038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155034u;
            // 0x155038: 0x2603079c  addiu       $v1, $s0, 0x79C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15505Cu;
            return;
        }
    }
    ctx->pc = 0x15503Cu;
    // 0x15503c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x15503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x155040: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155044: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x155044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x155048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15504c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x155050: 0xc041da8  jal         func_1076A0
    ctx->pc = 0x155050u;
    SET_GPR_U32(ctx, 31, 0x155058u);
    ctx->pc = 0x155054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155050u;
    // 0x155054: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x155050u, 0x155058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155058u;
label_155058:
    // 0x155058: 0x2603079c  addiu       $v1, $s0, 0x79C
    ctx->pc = 0x155058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
    ctx->pc = 0x15505cu;
}
