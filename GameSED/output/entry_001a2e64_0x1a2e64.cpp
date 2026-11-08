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

// Function: entry_001a2e64
// Address: 0x1a2e64 - 0x1a2e7c
void entry_001a2e64_0x1a2e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2e64_0x1a2e64");
#endif

    ctx->pc = 0x1a2e64u;

    // 0x1a2e64: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1a2e64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a2e68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2E68u;
    {
        const bool branch_taken_0x1a2e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e68) {
            ctx->pc = 0x1A2E7Cu;
            return;
        }
    }
    ctx->pc = 0x1A2E70u;
    // 0x1a2e70: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1a2e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a2e74: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a2e78: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1a2e78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a2e7cu;
}
