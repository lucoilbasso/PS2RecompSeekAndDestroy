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

// Function: entry_0019881c
// Address: 0x19881c - 0x198854
void entry_0019881c_0x19881c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019881c_0x19881c");
#endif

    ctx->pc = 0x19881cu;

    // 0x19881c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x19881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x198820: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x198820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x198824: 0xfe0201f0  sd          $v0, 0x1F0($s0)
    ctx->pc = 0x198824u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 496), GPR_U64(ctx, 2));
    // 0x198828: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x198828u;
    {
        const bool branch_taken_0x198828 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x19882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198828u;
        // 0x19882c: 0xfe0501f8  sd          $a1, 0x1F8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 504), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198828) {
            ctx->pc = 0x198854u;
            return;
        }
    }
    ctx->pc = 0x198830u;
    // 0x198830: 0x8cc20158  lw          $v0, 0x158($a2)
    ctx->pc = 0x198830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x198834: 0x24040368  addiu       $a0, $zero, 0x368
    ctx->pc = 0x198834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x198838: 0x8e83019c  lw          $v1, 0x19C($s4)
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x19883c: 0xfe050208  sd          $a1, 0x208($s0)
    ctx->pc = 0x19883cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 520), GPR_U64(ctx, 5));
    // 0x198840: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198844: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x198844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x198848: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19884c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19884cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x198850: 0xfe030200  sd          $v1, 0x200($s0)
    ctx->pc = 0x198850u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 512), GPR_U64(ctx, 3));
    ctx->pc = 0x198854u;
}
