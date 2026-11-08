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

// Function: entry_0018c918
// Address: 0x18c918 - 0x18c958
void entry_0018c918_0x18c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c918_0x18c918");
#endif

    ctx->pc = 0x18c918u;

    // 0x18c918: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x18c918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x18c91c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x18c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x18c920: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18c920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18c924: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18C924u;
    {
        const bool branch_taken_0x18c924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c924) {
            ctx->pc = 0x18C928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C924u;
            // 0x18c928: 0x8e050238  lw          $a1, 0x238($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C95Cu;
            return;
        }
    }
    ctx->pc = 0x18C92Cu;
    // 0x18c92c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x18c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x18c930: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c934: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x18c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x18c938: 0x28430023  slti        $v1, $v0, 0x23
    ctx->pc = 0x18c938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x18c93c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C93Cu;
    {
        const bool branch_taken_0x18c93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c93c) {
            ctx->pc = 0x18C940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C93Cu;
            // 0x18c940: 0xae000250  sw          $zero, 0x250($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C958u;
            return;
        }
    }
    ctx->pc = 0x18C944u;
    // 0x18c944: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x18c944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18c948: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C948u;
    {
        const bool branch_taken_0x18c948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c948) {
            ctx->pc = 0x18C94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C948u;
            // 0x18c94c: 0xae000250  sw          $zero, 0x250($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C958u;
            return;
        }
    }
    ctx->pc = 0x18C950u;
    // 0x18c950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c954: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x18c954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->pc = 0x18c958u;
}
