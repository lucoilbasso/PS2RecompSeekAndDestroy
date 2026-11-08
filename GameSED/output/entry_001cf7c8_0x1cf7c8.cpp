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

// Function: entry_001cf7c8
// Address: 0x1cf7c8 - 0x1cf804
void entry_001cf7c8_0x1cf7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf7c8_0x1cf7c8");
#endif

    ctx->pc = 0x1cf7c8u;

    // 0x1cf7c8: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x1cf7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x1cf7cc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1cf7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1cf7d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cf7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf7d4: 0x839824  and         $s3, $a0, $v1
    ctx->pc = 0x1cf7d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cf7d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cf7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cf7dc: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x1cf7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1cf7e0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x1cf7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1cf7e4: 0x2e640010  sltiu       $a0, $s3, 0x10
    ctx->pc = 0x1cf7e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cf7e8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1cf7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x1cf7ec: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1cf7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1cf7f0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF7F0u;
    {
        const bool branch_taken_0x1cf7f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7F0u;
        // 0x1cf7f4: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7f0) {
            ctx->pc = 0x1CF804u;
            return;
        }
    }
    ctx->pc = 0x1CF7F8u;
    // 0x1cf7f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf7fc: 0xc07517a  jal         func_1D45E8
    ctx->pc = 0x1CF7FCu;
    SET_GPR_U32(ctx, 31, 0x1CF804u);
    ctx->pc = 0x1CF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7FCu;
    // 0x1cf800: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45E8u, 0x1CF7FCu, 0x1CF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF804u;
}
