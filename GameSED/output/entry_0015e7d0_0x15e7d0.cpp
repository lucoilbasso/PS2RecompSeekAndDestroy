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

// Function: entry_0015e7d0
// Address: 0x15e7d0 - 0x15e818
void entry_0015e7d0_0x15e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e7d0_0x15e7d0");
#endif

    ctx->pc = 0x15e7d0u;

    // 0x15e7d0: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E7D0u;
    {
        const bool branch_taken_0x15e7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e7d0) {
            ctx->pc = 0x15E7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E7D0u;
            // 0x15e7d4: 0x8ce50030  lw          $a1, 0x30($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E824u;
            return;
        }
    }
    ctx->pc = 0x15E7D8u;
    // 0x15e7d8: 0x8cc30200  lw          $v1, 0x200($a2)
    ctx->pc = 0x15e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
    // 0x15e7dc: 0x8cc20204  lw          $v0, 0x204($a2)
    ctx->pc = 0x15e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 516)));
    // 0x15e7e0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15E7E0u;
    {
        const bool branch_taken_0x15e7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7E0u;
        // 0x15e7e4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7e0) {
            ctx->pc = 0x15E818u;
            return;
        }
    }
    ctx->pc = 0x15E7E8u;
    // 0x15e7e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x15e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15e7ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e7f0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x15e7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15e7f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15e7f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x15e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x15e7fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15e800: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15e800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15e804: 0x8cc30200  lw          $v1, 0x200($a2)
    ctx->pc = 0x15e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
    // 0x15e808: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x15e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x15e80c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e810: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15e810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x15e814: 0xacc30200  sw          $v1, 0x200($a2)
    ctx->pc = 0x15e814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 512), GPR_U32(ctx, 3));
    ctx->pc = 0x15e818u;
}
