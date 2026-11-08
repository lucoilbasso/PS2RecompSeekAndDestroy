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

// Function: entry_0015bd28
// Address: 0x15bd28 - 0x15bd80
void entry_0015bd28_0x15bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd28_0x15bd28");
#endif

    ctx->pc = 0x15bd28u;

    // 0x15bd28: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x15bd2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15bd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15bd30: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x15bd34: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x15bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x15bd38: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x15bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x15bd3c: 0x96e9001e  lhu         $t1, 0x1E($s7)
    ctx->pc = 0x15bd3cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
    // 0x15bd40: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x15bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x15bd44: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x15bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15bd48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bd4c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15bd50: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x15bd50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15bd54: 0x11050010  beq         $t0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BD54u;
    {
        const bool branch_taken_0x15bd54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x15BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD54u;
        // 0x15bd58: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd54) {
            ctx->pc = 0x15BD98u;
            return;
        }
    }
    ctx->pc = 0x15BD5Cu;
    // 0x15bd5c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x15bd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15bd60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BD60u;
    {
        const bool branch_taken_0x15bd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD60u;
        // 0x15bd64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd60) {
            ctx->pc = 0x15BD80u;
            return;
        }
    }
    ctx->pc = 0x15BD68u;
    // 0x15bd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bd6c: 0x11020008  beq         $t0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BD6Cu;
    {
        const bool branch_taken_0x15bd6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD6Cu;
        // 0x15bd70: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd6c) {
            ctx->pc = 0x15BD90u;
            return;
        }
    }
    ctx->pc = 0x15BD74u;
    // 0x15bd74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15BD74u;
    {
        const bool branch_taken_0x15bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD74u;
        // 0x15bd78: 0x2443a4e8  addiu       $v1, $v0, -0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd74) {
            ctx->pc = 0x15BDD0u;
            return;
        }
    }
    ctx->pc = 0x15BD7Cu;
    // 0x15bd7c: 0x0  nop
    ctx->pc = 0x15bd7cu;
    // NOP
    ctx->pc = 0x15bd80u;
}
