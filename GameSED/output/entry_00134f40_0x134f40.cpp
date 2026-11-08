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

// Function: entry_00134f40
// Address: 0x134f40 - 0x134f50
void entry_00134f40_0x134f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134f40_0x134f40");
#endif

    ctx->pc = 0x134f40u;

    // 0x134f40: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x134f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x134f44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x134f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x134f48: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x134F48u;
    {
        const bool branch_taken_0x134f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F48u;
        // 0x134f4c: 0xae020180  sw          $v0, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f48) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x134F50u;
}
