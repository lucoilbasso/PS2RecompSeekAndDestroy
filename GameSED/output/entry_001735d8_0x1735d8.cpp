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

// Function: entry_001735d8
// Address: 0x1735d8 - 0x173648
void entry_001735d8_0x1735d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001735d8_0x1735d8");
#endif

    ctx->pc = 0x1735d8u;

    // 0x1735d8: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x1735d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1735dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1735dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1735e0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1735e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1735e4: 0x24650023  addiu       $a1, $v1, 0x23
    ctx->pc = 0x1735e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
    // 0x1735e8: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x1735ec: 0xd22021  addu        $a0, $a2, $s2
    ctx->pc = 0x1735ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1735f0: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1735f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1735f4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1735f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1735f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1735f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1735fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173600: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x173600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x173604: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173608: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17360c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173610: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x173610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x173614: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x173618: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x173618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x17361c: 0x16400026  bnez        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x17361Cu;
    {
        const bool branch_taken_0x17361c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17361Cu;
        // 0x173620: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17361c) {
            ctx->pc = 0x1736B8u;
            return;
        }
    }
    ctx->pc = 0x173624u;
    // 0x173624: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x173624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x173628: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x173628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17362c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x173630: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x173630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x173634: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173638: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x173638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17363c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17363Cu;
    {
        const bool branch_taken_0x17363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17363Cu;
        // 0x173640: 0x24420140  addiu       $v0, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17363c) {
            ctx->pc = 0x1736B4u;
            return;
        }
    }
    ctx->pc = 0x173644u;
    // 0x173644: 0x0  nop
    ctx->pc = 0x173644u;
    // NOP
    ctx->pc = 0x173648u;
}
