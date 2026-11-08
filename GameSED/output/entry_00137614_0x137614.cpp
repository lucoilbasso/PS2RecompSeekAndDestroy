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

// Function: entry_00137614
// Address: 0x137614 - 0x13766c
void entry_00137614_0x137614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137614_0x137614");
#endif

    ctx->pc = 0x137614u;

    // 0x137614: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x137614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x137618: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x137618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13761c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x13761Cu;
    {
        const bool branch_taken_0x13761c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13761c) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x137624u;
    // 0x137624: 0x127e0085  beq         $s3, $fp, . + 4 + (0x85 << 2)
    ctx->pc = 0x137624u;
    {
        const bool branch_taken_0x137624 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        ctx->pc = 0x137628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137624u;
        // 0x137628: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137624) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x13762Cu;
    // 0x13762c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x137630: 0x14800037  bnez        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x137630u;
    {
        const bool branch_taken_0x137630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x137634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137630u;
        // 0x137634: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137630) {
            ctx->pc = 0x137710u;
            return;
        }
    }
    ctx->pc = 0x137638u;
    // 0x137638: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x137638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13763c: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x13763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x137640: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x137640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x137644: 0x54430033  bnel        $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x137644u;
    {
        const bool branch_taken_0x137644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x137644) {
            ctx->pc = 0x137648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137644u;
            // 0x137648: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137714u;
            return;
        }
    }
    ctx->pc = 0x13764Cu;
    // 0x13764c: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x13764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x137650: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137650u;
    {
        const bool branch_taken_0x137650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137650u;
        // 0x137654: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137650) {
            ctx->pc = 0x13766Cu;
            return;
        }
    }
    ctx->pc = 0x137658u;
    // 0x137658: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x137658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13765c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x13765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x137660: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x137660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x137664: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x137664u;
    {
        const bool branch_taken_0x137664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137664) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x13766Cu;
}
