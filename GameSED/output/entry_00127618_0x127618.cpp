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

// Function: entry_00127618
// Address: 0x127618 - 0x127630
void entry_00127618_0x127618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127618_0x127618");
#endif

    ctx->pc = 0x127618u;

    // 0x127618: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x127618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x12761c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x12761cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127620: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127620u;
    {
        const bool branch_taken_0x127620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127620u;
        // 0x127624: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127620) {
            ctx->pc = 0x127634u;
            return;
        }
    }
    ctx->pc = 0x127628u;
    // 0x127628: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12762c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x127630u;
}
