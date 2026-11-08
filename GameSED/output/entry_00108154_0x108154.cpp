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

// Function: entry_00108154
// Address: 0x108154 - 0x108168
void entry_00108154_0x108154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108154_0x108154");
#endif

    ctx->pc = 0x108154u;

    // 0x108154: 0x106000e9  beqz        $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x108154u;
    {
        const bool branch_taken_0x108154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108154u;
        // 0x108158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108154) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x10815Cu;
    // 0x10815c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x10815Cu;
    {
        const bool branch_taken_0x10815c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10815Cu;
        // 0x108160: 0x24620007  addiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10815c) {
            ctx->pc = 0x108410u;
            return;
        }
    }
    ctx->pc = 0x108164u;
    // 0x108164: 0x0  nop
    ctx->pc = 0x108164u;
    // NOP
    ctx->pc = 0x108168u;
}
