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

// Function: entry_001bc90c
// Address: 0x1bc90c - 0x1bc928
void entry_001bc90c_0x1bc90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc90c_0x1bc90c");
#endif

    ctx->pc = 0x1bc90cu;

    // 0x1bc90c: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x1bc90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x1bc910: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bc910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bc914: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC914u;
    {
        const bool branch_taken_0x1bc914 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc914) {
            ctx->pc = 0x1BC928u;
            return;
        }
    }
    ctx->pc = 0x1BC91Cu;
    // 0x1bc91c: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x1bc91cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 24));
    // 0x1bc920: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC920u;
    {
        const bool branch_taken_0x1bc920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC920u;
        // 0x1bc924: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc920) {
            ctx->pc = 0x1BC940u;
            return;
        }
    }
    ctx->pc = 0x1BC928u;
}
