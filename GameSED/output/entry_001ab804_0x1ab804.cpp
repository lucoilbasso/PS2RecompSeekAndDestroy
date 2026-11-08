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

// Function: entry_001ab804
// Address: 0x1ab804 - 0x1ab830
void entry_001ab804_0x1ab804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab804_0x1ab804");
#endif

    ctx->pc = 0x1ab804u;

    // 0x1ab804: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1ab804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1ab808: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1ab808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1ab80c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1ab80cu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1ab810: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ab810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ab814: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB814u;
    {
        const bool branch_taken_0x1ab814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB814u;
        // 0x1ab818: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab814) {
            ctx->pc = 0x1AB850u;
            return;
        }
    }
    ctx->pc = 0x1AB81Cu;
    // 0x1ab81c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1ab81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1ab820: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1ab820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1ab824: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1ab824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1ab828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab82c: 0x0  nop
    ctx->pc = 0x1ab82cu;
    // NOP
    ctx->pc = 0x1ab830u;
}
