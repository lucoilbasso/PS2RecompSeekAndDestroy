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

// Function: entry_0016c344
// Address: 0x16c344 - 0x16c370
void entry_0016c344_0x16c344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c344_0x16c344");
#endif

    ctx->pc = 0x16c344u;

    // 0x16c344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c348: 0x26230270  addiu       $v1, $s1, 0x270
    ctx->pc = 0x16c348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    // 0x16c34c: 0xae240260  sw          $a0, 0x260($s1)
    ctx->pc = 0x16c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 4));
    // 0x16c350: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16c350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16c354: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16c354u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16c358: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16c35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c360: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16c364: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x16C364u;
    {
        const bool branch_taken_0x16c364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C364u;
        // 0x16c368: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c364) {
            ctx->pc = 0x16C434u;
            return;
        }
    }
    ctx->pc = 0x16C36Cu;
    // 0x16c36c: 0x0  nop
    ctx->pc = 0x16c36cu;
    // NOP
    ctx->pc = 0x16c370u;
}
