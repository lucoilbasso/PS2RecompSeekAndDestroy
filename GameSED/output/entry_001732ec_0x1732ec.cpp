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

// Function: entry_001732ec
// Address: 0x1732ec - 0x173358
void entry_001732ec_0x1732ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001732ec_0x1732ec");
#endif

    ctx->pc = 0x1732ecu;

    // 0x1732ec: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x1732ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1732f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1732f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1732f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1732f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1732f8: 0x24650023  addiu       $a1, $v1, 0x23
    ctx->pc = 0x1732f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
    // 0x1732fc: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x1732fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x173300: 0xd22021  addu        $a0, $a2, $s2
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x173304: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x173304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x173308: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x173308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x17330c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x17330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173310: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173314: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x173314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x173318: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x17331c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17331cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x173320: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x173320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173324: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x173324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x173328: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x173328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x17332c: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x17332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x173330: 0x16400025  bnez        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x173330u;
    {
        const bool branch_taken_0x173330 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173330u;
        // 0x173334: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173330) {
            ctx->pc = 0x1733C8u;
            return;
        }
    }
    ctx->pc = 0x173338u;
    // 0x173338: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x173338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x17333c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x17333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x173340: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x173340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x173344: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x173344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x173348: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x17334c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173350: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x173350u;
    {
        const bool branch_taken_0x173350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173350u;
        // 0x173354: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173350) {
            ctx->pc = 0x1733C4u;
            return;
        }
    }
    ctx->pc = 0x173358u;
}
