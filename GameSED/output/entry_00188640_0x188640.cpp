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

// Function: entry_00188640
// Address: 0x188640 - 0x188688
void entry_00188640_0x188640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188640_0x188640");
#endif

    ctx->pc = 0x188640u;

    // 0x188640: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x188640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x188644: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x188644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x188648: 0x8e4401bc  lw          $a0, 0x1BC($s2)
    ctx->pc = 0x188648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x18864c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18864cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188650: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x188650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x188654: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x188654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x188658: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18865c: 0x8e8201b8  lw          $v0, 0x1B8($s4)
    ctx->pc = 0x18865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x188660: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x188660u;
    {
        const bool branch_taken_0x188660 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x188664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188660u;
        // 0x188664: 0xae4301c0  sw          $v1, 0x1C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188660) {
            ctx->pc = 0x1887A8u;
            return;
        }
    }
    ctx->pc = 0x188668u;
    // 0x188668: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x188668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18866c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18866cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x188670: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x188670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x188674: 0x244cecf0  addiu       $t4, $v0, -0x1310
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962416));
    // 0x188678: 0x246eed00  addiu       $t6, $v1, -0x1300
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962432));
    // 0x18867c: 0x248ded30  addiu       $t5, $a0, -0x12D0
    ctx->pc = 0x18867cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962480));
    // 0x188680: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x188680u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x188684: 0x8e8301bc  lw          $v1, 0x1BC($s4)
    ctx->pc = 0x188684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
    ctx->pc = 0x188688u;
}
