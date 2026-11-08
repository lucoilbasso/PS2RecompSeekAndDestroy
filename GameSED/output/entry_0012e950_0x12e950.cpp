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

// Function: entry_0012e950
// Address: 0x12e950 - 0x12e968
void entry_0012e950_0x12e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e950_0x12e950");
#endif

    ctx->pc = 0x12e950u;

    // 0x12e950: 0xae30015c  sw          $s0, 0x15C($s1)
    ctx->pc = 0x12e950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 16));
    // 0x12e954: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e958: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12E958u;
    {
        const bool branch_taken_0x12e958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E958u;
        // 0x12e95c: 0x8e300158  lw          $s0, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e958) {
            ctx->pc = 0x12E98Cu;
            return;
        }
    }
    ctx->pc = 0x12E960u;
    // 0x12e960: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e964: 0x0  nop
    ctx->pc = 0x12e964u;
    // NOP
    ctx->pc = 0x12e968u;
}
