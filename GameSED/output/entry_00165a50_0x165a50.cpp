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

// Function: entry_00165a50
// Address: 0x165a50 - 0x165a90
void entry_00165a50_0x165a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a50_0x165a50");
#endif

    ctx->pc = 0x165a50u;

    // 0x165a50: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x165a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x165a54: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x165A54u;
    {
        const bool branch_taken_0x165a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165a54) {
            ctx->pc = 0x165B54u;
            return;
        }
    }
    ctx->pc = 0x165A5Cu;
    // 0x165a5c: 0x8c821260  lw          $v0, 0x1260($a0)
    ctx->pc = 0x165a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4704)));
    // 0x165a60: 0x1045003c  beq         $v0, $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x165A60u;
    {
        const bool branch_taken_0x165a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x165a60) {
            ctx->pc = 0x165B54u;
            return;
        }
    }
    ctx->pc = 0x165A68u;
    // 0x165a68: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x165A68u;
    {
        const bool branch_taken_0x165a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A68u;
        // 0x165a6c: 0xac851260  sw          $a1, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a68) {
            ctx->pc = 0x165AE0u;
            return;
        }
    }
    ctx->pc = 0x165A70u;
    // 0x165a70: 0x24861258  addiu       $a2, $a0, 0x1258
    ctx->pc = 0x165a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4696));
    // 0x165a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165a78: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x165a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x165a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a80: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x165A80u;
    {
        const bool branch_taken_0x165a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A80u;
        // 0x165a84: 0xac821260  sw          $v0, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a80) {
            ctx->pc = 0x165AD8u;
            return;
        }
    }
    ctx->pc = 0x165A88u;
    // 0x165a88: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x165a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x165a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x165a90u;
}
