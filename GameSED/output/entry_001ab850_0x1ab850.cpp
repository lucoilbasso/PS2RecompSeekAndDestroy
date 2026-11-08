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

// Function: entry_001ab850
// Address: 0x1ab850 - 0x1ab8a8
void entry_001ab850_0x1ab850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab850_0x1ab850");
#endif

    ctx->pc = 0x1ab850u;

    // 0x1ab850: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1ab850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1ab854: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1ab854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1ab858: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1ab858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1ab85c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ab85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ab860: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x1ab860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x1ab864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab868: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1ab868u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 2));
    // 0x1ab86c: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x1AB86Cu;
    {
        const bool branch_taken_0x1ab86c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB86Cu;
        // 0x1ab870: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab86c) {
            ctx->pc = 0x1AB9ACu;
            return;
        }
    }
    ctx->pc = 0x1AB874u;
    // 0x1ab874: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1ab874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ab878: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x1ab878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x1ab87c: 0x2a41824  and         $v1, $s5, $a0
    ctx->pc = 0x1ab87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
    // 0x1ab880: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1ab880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1ab884: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AB884u;
    {
        const bool branch_taken_0x1ab884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB884u;
        // 0x1ab888: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab884) {
            ctx->pc = 0x1AB94Cu;
            return;
        }
    }
    ctx->pc = 0x1AB88Cu;
    // 0x1ab88c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab890: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab894: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ab894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ab898: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1ab898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1ab89c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x1ab89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x1ab8a0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1AB8A0u;
    {
        const bool branch_taken_0x1ab8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8A0u;
        // 0x1ab8a4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8a0) {
            ctx->pc = 0x1AB95Cu;
            return;
        }
    }
    ctx->pc = 0x1AB8A8u;
}
