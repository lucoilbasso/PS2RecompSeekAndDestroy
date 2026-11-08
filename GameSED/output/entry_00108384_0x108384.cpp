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

// Function: entry_00108384
// Address: 0x108384 - 0x108398
void entry_00108384_0x108384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108384_0x108384");
#endif

    ctx->pc = 0x108384u;

    // 0x108384: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x108384u;
    {
        const bool branch_taken_0x108384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108384u;
        // 0x108388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108384) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x10838Cu;
    // 0x10838c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10838Cu;
    {
        const bool branch_taken_0x10838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10838Cu;
        // 0x108390: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10838c) {
            ctx->pc = 0x108410u;
            return;
        }
    }
    ctx->pc = 0x108394u;
    // 0x108394: 0x0  nop
    ctx->pc = 0x108394u;
    // NOP
    ctx->pc = 0x108398u;
}
